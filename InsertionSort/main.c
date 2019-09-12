#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[] = {4,5,2,3,7,8,1,9,0,6};
    int n = sizeof(values)/sizeof(values[0]);
    insertionSort(values, n);
    for(int i = 0;i<n;i++){
        printf("%i ",values[i]);
    }
    return 0;
}

void insertionSort(int arr[],int n)
{
    for(int i = 0;i < n;i++){
        int j = i-1;
        int val = arr[i];
        while(val<arr[j] && j>=0){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = val;
    }
}

