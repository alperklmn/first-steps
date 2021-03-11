#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // check usage
    if (argc != 2)
    {
        printf("Usage: ./recover image");
        return 1;
    }
    
    // open file
    FILE *card = fopen(argv[1], "r");
    
    BYTE bytes[512];
    int filecount = 0;
    FILE *img = NULL;
    while (fread(bytes, sizeof(BYTE), 512, card))
    {
        if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff && (bytes[3] & 0xf0) == 0xe0)
        {
            if (filecount != 0)
            {
                fclose(img);
            }
            char filename[8];
            sprintf(filename, "%03i.jpg", filecount);
            img = fopen(filename, "w");
            
            filecount++;
        }
        if (img != NULL)
        {
            fwrite(bytes, sizeof(BYTE), 512, img);
        }
    }
    
    fclose(img);
    fclose(card);
}
