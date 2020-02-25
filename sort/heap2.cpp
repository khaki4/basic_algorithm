#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int N = 9;
int heap[] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

void _sort(int _heap[], int child) {
    if (child < 1) return;
    const int root =  (child - 1) / 2;
    if (_heap[root] < _heap[child]) {
        int temp = _heap[root];
        _heap[root] = _heap[child];
        _heap[child] = temp;
    }
    _sort(_heap, root);
}

void heapify(int _heap[], int _N) {
    for (int i = 1; i < _N; i++) {
        _sort(heap, i);
    }
}

int main(void) {
    heapify(heap, N);

    for (int i = N - 1; i > 0; i--) {
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
        heapify(heap, i);
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", heap[i]);
    }
    return 0;
}