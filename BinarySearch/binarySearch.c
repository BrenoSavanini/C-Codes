#include <stdio.h>

struct usuario{
    int id;
    char nome[50];
};

int main()
{
    struct usuario values[] = {{1,"Breno"},{2,"Pedro"},{3,"Rodrigo"},{4,"Maria"},{5,"Marcelo"},{6,"Fernanda"},{7,"Joana"},{8,"Murilo"},{9,"Rosana"},{10,"Aparecido"}};
    int n = sizeof(values)/sizeof(values[0]);
    int k = 2;
    
    struct usuario result = binarySearch(values,k,0,n-1);
    printf("\n Nome do usuario: %s \n");
    return 0;
}

struct usuario binarySearch(struct usuario arr[],int k,int l, int r){
    int m = l+r/2;
    if(k == arr[m].id){
        return arr[m];
    }
    else if (k > m)
    {
        return binarySearch(&arr,k,m+1,r);
    }
    else
    {
        return binarySearch(&arr,k,l,m-1);

    }    
    
}