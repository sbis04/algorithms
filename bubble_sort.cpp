#include <iostream>
using namespace std;

void b_sort(int n, int a[]);
void swap(int *,int *);

int main()
{
  int n;

  cout << "Enter the number of elements to be inserted: ";
  cin >> n;

  int a[n];

  cout << "Enter the elements: \n";
  for(int i=0; i<n; i++)
  {
    cin >> a[i];
  }

  b_sort(n, a);

  cout << "SORTED ARRAY: \n";
  for(int i=0; i<n; i++)
  {
    cout << a[i] << " ";
  }cout<<endl;

  return 0;
}

void b_sort(int n, int a[])
{
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n-1-i; j++)
    {
      if(a[j] > a[j+1])//assending
      {
        swap(&a[j],&a[j+1]);
      }
    }
  }
}

void swap(int *x, int *y)
{
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;

}
