# 다섯 자리의 정수 1개를 입력받아 각 자리별로 나누어 출력한다.

# 참고
# scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
# 를 사용하면 1개의 숫자로 각각 구분되어 저장된다.

# 예시
# 읽어들인 값을 적당히 바꿔 출력하기 위해서

# printf("[%d]", a*10000);

# 과 같은 방법도 가능하다.


# 입력
# 다섯 자리로 이루어진 1개의 정수를 입력받는다.
# (단, 10,000 <= 입력받는 수 <= 99,999 )


# 출력
# 각 자리의 숫자를 분리해 한 줄에 하나씩 [ ]속에 넣어 출력한다.

v = input()

for i in range(len(v)):
    print([int(v[i]) * 10 ** (len(v) - i - 1)])
