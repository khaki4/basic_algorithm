#include <iostream>

using namespace std;

/**
 * dynamic programming이란 
 * 크고 어려운 문제가 있다면 잘게 나누어 해결한 뒤에
 * 나중에 전체의 답을 구하는 것입니다.
 * 
 * 다만 이 과정에서 '메모제이션(Memozation)'을 사용한다는 점에서
 * 분할 정복과 다릅니다.
 * 
*/
long d[100]; // meorization 을 위한 데이터

// log(N) 의 복잡도
long fib(int x) {
    if (x <= 2) return 1;
    if (d[x] != 0) return d[x];
    return d[x] = fib(x -1) + fib(x - 2);
}

int main(void) {
    printf("%ld", fib(50));
    return 0;
}