#include <iostream>

using namespace std;

int number = 8;
int sorted[8];

void mergeSort(int data[], int m, int n);

int main() {
    int array[] = {7, 6, 5, 8, 3, 5, 9, 1};
    mergeSort(array, 0, number - 1);
    for (int i = 0; i < number; i++) {
        cout << array[i] << ' ';
    }
    return 0;
}

// 일단 반으로 나누고 나중에 정렬
void merge(int data[], int m, int middle, int n) {
    int i = m;
    int j = middle + 1;
    int k = m;

    while (i <= middle && j <= n)
    {
        // 작은 순서대로 임시 배열에 삽입
        if (data[i] <= data[j])
        {
            sorted[k] = data[i];
            i++;
        }
        else
        {
            sorted[k] = data[j];
            j++;
        }
        k++;
    }

    // 남은 데이터도 삽입
    if (i > middle) {
        for (int t = j; t <= n; t++) {
            sorted[k] = data[t];
            k++;
        }
    } else {
        for (int t = i; t <= m; t++) {
            sorted[k] = data[t];
            k++;
        }
    }

    // 정렬된 배열을 삽입
    for (int t = m; t <= n; t++) {
        data[t] = sorted[t];
    }
}

void mergeSort(int arr[], int m, int n)
{
    // 배열의 길이가 2개 이상일 때만
    if (m >= n)
        return;

    int middle = (m + n) / 2;
    mergeSort(arr, m, middle);
    mergeSort(arr, middle + 1, n);
    merge(arr, m, middle, n);
}