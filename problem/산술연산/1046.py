from functools import reduce

def idtt(x):
    return int(x)

numbers = list(map(idtt, input().split()))
total = sum(numbers, 0)
avg = total / len(numbers)

print(total);    
print('%0.1f' % avg);