import io, sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf8')

# 한글 입력을 위해 위와같이 import 해야 함

print('\u250C\u252C\u2510')
print('\u251C\u253C\u2524')
print('\u2514\u2534\u2518')
