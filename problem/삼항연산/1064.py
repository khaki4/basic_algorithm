a, b, c = input().split()
x = int(a);
y = int(b);
z = int(c);

res = (x < y and (x < z and x or z)) or (y < z and y or z) 
print(res)