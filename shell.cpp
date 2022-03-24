#include <iostream>

using namespace std;

void qsort(int l, int r) {
   int x = A[(l + r) / 2];
    int i = l; int j = r;
    while (i <= j) {
        while (A[i] < x) l++;
        while (A[j] > x) r--;
        if (i > j) break;
        swap(A[i], A[j]);
    }
    qsort(l, j); qsort(i, l);
}
int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Число элементов:";
    cin >> n;
    int *A = new int[n];


    cout << "Массив:";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    qsort(0, n - 1);
   
    cout << "Отсортированный массив:";
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}
