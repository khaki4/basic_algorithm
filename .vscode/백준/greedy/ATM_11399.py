from functools import reduce

N = 5
p = [3, 1, 4, 3, 2]

_p = sorted(p)

res = sum(map(lambda i: sum(_p[: i]), range(1, N + 1)))

print(res)


