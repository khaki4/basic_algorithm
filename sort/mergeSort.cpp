#include <iostream>

using namespace std;

int number = 8;
int sorted[8];

void merge(int arr[], int m, int middle, int n) {
    int i = m;
    int j = middle + 1;
    int k = m;

    while (i <= middle && j <= n) {
        // 작은 수 부터 삽입
        if (arr[i] < arr[j]) {
            sorted[k] = arr[i];
            i++;
        } else {
            sorted[k] = arr[j];
            j++;
        }
        k++;
    }

    // 남은 데이터도 주입
    if (i > middle) {
        for (int t = j; t <= n; t++) {
            sorted[k] = arr[t];
            k++;
        }
    } else {
        for (int t = i; t <= middle; t++) {
            sorted[k] = arr[t];
            k++;
        }
    }

    // 정렬된 임시 배열을 원본 배열에 대입
    for (int t = m; t <= n; t++) {
        arr[t] = sorted[t];
    }
}

void mergeSort(int arr[], int m, int n) {
    if (m >= n) return;
    int middle = (m + n) / 2;
    mergeSort(arr, m, middle);
    mergeSort(arr, middle + 1, n);
    merge(arr, m, middle, n);
}

int main() {
    int data[] = {7, 6, 5, 8, 3, 5, 9, 1};
    mergeSort(data, 0, number - 1);
    for (int i = 0; i < number; i++) {
        cout << data[i] << ' ';
    }
    return 0;
}
