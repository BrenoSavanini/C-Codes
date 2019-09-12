#include<stdlib.h> 
#include<stdio.h> 

int main(){

    //declaring unsorted array
    int values[] = {8,2,6,1,9,7,0,5,3,4,300};
    //calculating array length
    int n = sizeof(values)/sizeof(values[0]);
    
    mergeSort(values,0,n-1);
    
    //printing sorted array elements
    for(int i = 0;i < n;i++){
        printf("%i  ",values[i]);
    }
    
    return 0;

}

//arr - unsorted array; l - left(first) index of array; r - right(last) index of array 
void mergeSort(int arr[],int l, int r){

    //narrowing down array to pairs of single elements
    if(l<r){
        int m = (l+r)/2;
        //mergeSort left side of array
        mergeSort(arr,l,m);
        //mergeSort right side of array
        mergeSort(arr,m+1,r);

        merge(arr,l,m,r);
    }   

}

//arr - array; l - left(first) index of array; m - middle index of array; r - right(last) index of array 
void merge(int arr[],int l, int m, int r){
    
    //size of the two halves
    int a1 = m - l + 1; 
    int a2 =  r - m;

    //temporary arrays for the left and right halves
    int L[a1];
    int R[a2];

    //Transposing arr elements to the two arrays
    for (int i = 0; i < a1; i++){ 
        L[i] = arr[l + i];
    } 
    for (int j = 0; j < a2; j++){ 
        R[j] = arr[m + 1 + j];
    }

    //tick variables
    int i = 0;
    int j = 0;
    int p = l;

    while (i < a1 && j < a2){ 
        if (L[i] <= R[j]){ 
            arr[p] = L[i]; 
            i++; 
        } 
        else{ 
            arr[p] = R[j]; 
            j++; 
        } 
        p++; 
    } 
  
    while (i < a1){ 
        arr[p] = L[i]; 
        i++; 
        p++; 
    } 
  
    while (j < a2){ 
        arr[p] = R[j]; 
        j++; 
        p++; 
    }
       
}