#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[] = {9,3,6,1,5,4,7,2,8,0};
    int n = sizeof(values)/sizeof(values[0]);
    selectionSort(values,n);
    for(int i = 0;i < n; i++){
        printf(" %i ",values[i]);
    }
    return 0;
}

void selectionSort(int arr[],int n){
    int minPos = 0;

    for (int i = 0; i < n-1; i++)
    {
        minPos  = i;
        for (int j = i+1; j < n; j++)
          if (arr[j] < arr[minPos])
            minPos  = j;
        swap(&arr[minPos], &arr[i]);
    }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
