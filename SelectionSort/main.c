#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *v, int n){
    int i, j, menor, troca;

    for(i = 0; i < n-1; i++){
        menor = i;
        for(j=i+1; j< n; j++){
            if(v[j] < v[menor]){
                menor = j;
            }
        }

        if(i != menor){
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
}

int main()
{
    int v[] = {-10,4,67,-8, 90,54,21};

    selectionSort(v, 7);

    for(int i=0; i<7;i++){
        printf("%i ", v[i]);
    }
    return 0;
}
