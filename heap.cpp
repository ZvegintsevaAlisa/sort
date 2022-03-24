#include <iostream>

using namespace std;

void heap(int* A, int n, int i)
{
    int max = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && A[l] > A[max])
        max = l;
    if (r < n && A[r]>A[max])
        max = r;
    if (max != i)
    {
        swap(A[i], A[max]);
        heap(A, n, max);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Число элементов:";
    cin >> n;
    int* A = new int[n];


    cout << "Массив:";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = n / 2; i >= 0; i--)
        heap(A, n-1, i);
    for (int i = n - 1; i >= 1; i--)
    {
        swap(A[0], A[i]);
        heap(A, i-1, 0);
    }

    cout << "Отсортированный массив:";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}
