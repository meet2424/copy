#include <stdio.h>
 

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

 
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void quickSort(int a[], int low, int high)
{
    int partitionIndex; 

    if (low < high)
    {
        partitionIndex = partition(a, low, high); 
        quickSort(a, low, partitionIndex - 1);  
        quickSort(a, partitionIndex + 1, high); 
    }
}

int main()
{ 
   int n;
  printf ("Enter the number of elements\n");
  scanf ("%d", &n);
  int a[n];
  printf ("Enter the elements\n");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }

  printf ("\nElements before quick sort\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    quickSort(a, 0, n - 1); 
  printf ("\n\nElements after quick sort\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}



