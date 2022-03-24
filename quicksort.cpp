#include <iostream>

using namespace std;

//функция сортировка
void qsort(int n, int *A) {
        int x = A[n / 2];
        int i = 0; int j = n-1;
        while (i <= j) {
            while (A[i] < x) i++;
            while (A[j] > x) j--;
            if (i <= j) {
                swap(A[i], A[j]); i++; j--;
            }
        }

       if (j>0) qsort(j+1, A); //сортировка левой части
        if (i<n) qsort(n-i, &A[i]); //сортировка правой части
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

    qsort(n, A);

    cout << "Отсортированный массив:";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}