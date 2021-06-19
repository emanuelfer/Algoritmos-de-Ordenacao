#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *v, int n){
    int i, j, aux;

    for(i=0;i<n;i++){
        aux = v[i];
        for(j=i; j>0 && (aux < v[j-1]); j--){
            v[j] = v[j-1];
        }
        v[j] = aux;
    }
}

int main()
{
    int v[] = {23,4,67,-8, 90,54,21};

    insertionSort(v, 7);

    for(int i=0; i<7;i++){
        printf("%i ", v[i]);
    }
    return 0;
}
