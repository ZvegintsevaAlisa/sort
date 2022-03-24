#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  
    int n;
    int *A = new int[n];
  cout << "Число элементов:";
  cin >> n;
    
    cout << "Массив:";
    for (int i = 0; i < n; i++)
    cin >> A[i];

int i, j;
    for (i = 1; i < n; i++)
      {int key = A[i];
      int j = i;
  while (j>0 && A[j-1] > key)  {A[j] = A[j-1];
      j--;}
  A[j]=key;}
    
cout << "Отсортированный массив:";
   for (i = 0; i < n; i++)
    cout << A[i] << " ";
    return 0;
}