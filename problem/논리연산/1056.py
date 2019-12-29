a, b = input().split()
x = bool(int(a))
y = bool(int(b))
res = 1 if x ^ y else 0

print(res)