from math import sqrt
from sys import exit

x = int(input("Enter a number: "))
if x < 0:
    exit("Negative numbers cannot be prime numbers.")

divided = False

for i in range(2, int(sqrt(x)) + 1):
    if x == 2:
        break
    if x % i == 0:
        divided = True
    
if divided == False and x > 1:
    print("Prime")
else:
    print("Not prime")
    
    
