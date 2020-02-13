#include <iostream>
using namespace std;

void quickSort(int *data, int start, int end);      

int main() {
    int number = 10;
    int data[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    quickSort(data, 0, number - 1);

    for(int i = 0; i < number; i++) {
        cout << data[i] << ' ';
    }
    return 0;
}

void quickSort(int *data, int start, int end) {
    if (start >= end) { // 원소가 1개인 경우
        return;
    }

    int pivot = start;
    int i = start + 1;
    int j = end;
    int temp;

    while (i <= j) { // 엇갈릴 때 까지 반복
        while (data[i] <= data[pivot]) { // 피봇 값 보다 큰 값을 만날 때까지 반복
            i++;
        }

        while ((data[j] >= data[pivot]) && (j > start)) { // 피봇 값 보다 작은 값을 만날 때까지 반복
            j--;
        }
        if (i > j) { // 엇갈린 상태라면
            // 피봇 값과 엇갈린 왼쪽값과 교체
            temp = data[pivot];
            data[pivot] = data[j];
            data[j] = temp;
        } else {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    // 특정값(피봇값) 을 기준으로 왼쪽과 오른쪽 정렬 수행
    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}
