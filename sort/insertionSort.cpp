void insertionSort(int *_arr, int n)
{
    int temp;
    int index;

    for (int i = 1; i < n; i++)
    {
        // 왼쪽과 값을 비교
        // - 왼쪽이 더 작으면 멈춤
        // - 왼쪽이 더 크다면 swap
        index = i;
        while (_arr[index - 1] >= _arr[index])
        {
            temp = _arr[index - 1];
            _arr[index - 1] = _arr[index];
            _arr[index] = temp;
            index--;
        }
    }
}