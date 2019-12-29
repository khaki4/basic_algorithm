numbers = input().split()

def printEven(a):
    if a % 2 == 0:
        print(a)

for a in numbers:
    x = int(a)
    printEven(x)

