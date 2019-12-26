y, m, d = input().split('.')
# print(f'{int(d):02}-{int(m):02}-{int(y):04}')
print(d.zfill(2), m.zfill(2), y.zfill(2), sep='-')