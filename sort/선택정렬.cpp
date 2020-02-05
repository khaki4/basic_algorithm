#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 선택 해서 첫번째와 교체한다.
int main(void) {
    int array[10] = {1, 3, 5, 10, 9, 7, 8, 4, 6, 2};
    int min;
    int index = 0;
    int temp;
    for (int i = 0; i < 10; i++) {
        min = 99999;
        for (int j = i; j < 10; j++) {
            if (array[j] < min) {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    for (int i : array) {
        cout << i << ' ';
    }

    return 0;
}