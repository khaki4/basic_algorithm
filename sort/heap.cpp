#include <iostream>

using namespace std;

int number = 9;
int heap[9] = {7, 6, 5, 8, 3, 5, 9, 1, 8};

void heapify(int arr[], int cnt) {
    // 힙만들기
    // 해당 node의 부모 구하기
    // 부모와 값 비교후 큰 값을 부모로
    // 자식을 부모로 정한다
    // 위의 플로우를 자식이 존재할 때까지 반봅
    for (int i = 1; i < cnt; i++) {
        int c = i;
        do {
            int root = (c - 1) / 2;
            if (arr[root] < arr[c]) {
                int temp = arr[root];
                arr[root] = arr[c];
                arr[c] = temp;
            }
            c = root;
        } while(c != 0);
    }
}

int main() {
    heapify(heap, number);

    // 크기를 줄여가면서 반복적으로 힙을 구성
    // 가장 큰 값과 루트값(가장 큰 값)을 바꿔 줌
    for (int i = number - 1; i >= 0; i--) {
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        heapify(heap, i);
    }

    for (int i = 0; i < number; i++) {
        cout << heap[i] << ' ';
    }
    return 0;
}
