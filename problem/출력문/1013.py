# 정수(int) 2개를 입력받아 그대로 출력해보자.

# 참고

# int a, b;
# scanf("%d%d", &a, &b);  //엔터/공백으로 입력 데이터가 구분되어 입력
# printf("%d %d", a, b);

# 와 같은 방법으로 가능하다.

a, b = input().split()
print(int(a), int(b))