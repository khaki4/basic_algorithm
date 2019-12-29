numbers = input().split()

def printEvenOrOdd(a):
    if a % 2 == 0:
        print('even')
    else:
        print('odd')

for a in numbers:
    x = int(a)
    printEvenOrOdd(x)

