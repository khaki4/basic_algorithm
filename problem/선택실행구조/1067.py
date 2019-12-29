def determineEven(n):
    if n % 2 == 0:
        print('even')
    else:
        print('odd')

def determineMinus(n):
    if n < 0:
        print('minus')
    else:
        print('plus')

n = int(input())

determineMinus(n)
determineEven(n)