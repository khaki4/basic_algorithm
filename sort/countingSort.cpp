#include <iostream>

using namespace std;

// 데이터의 크기 범위가 한정되어 있을 때 사용 가능
int main() {
    int temp;
    int count[5] = {};
    int arr[30] = {
            1, 3, 2, 4, 3, 2, 5, 3, 1, 2,
            3, 4, 4, 3, 5, 1, 2, 3, 5, 2,
            3, 1, 4, 3, 5, 1, 2, 1, 1, 1
    };

    for (int i = 0; i < 30; i++) {
        count[arr[i] - 1]++;
    }

    for (int i = 0; i < 5; i++) {
        while (count[i] > 0) {
            cout << i + 1 << ' ';
            count[i]--;
        }
    }
    return 0;
}
