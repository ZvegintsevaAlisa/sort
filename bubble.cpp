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
    
    for (int i = 0; i < n-1; i++)
      for (int j =0; j < n-1; j++)
        if (A[j]>A[j+1]) swap(A[j],A[j+1]);

cout << "Отсортированный массив:";
   for (int i = 0; i < n; i++)
    cout << A[i] << " ";
    return 0;
}
