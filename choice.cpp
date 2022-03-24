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

int i, j, min, k;
    for (i = 0; i < n-1; i++)
      {  min = A[i]; k = i;
        for (j = i+1; j < n; j++)
          if (A[j]<min) {min = A[j], k = j;}
        swap(A[k],A[i]);}
            
cout << "Отсортированный массив:";
   for (i = 0; i < n; i++)
    cout << A[i] << " ";
    return 0;
}