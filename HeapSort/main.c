#include <stdio.h>
#include <stdlib.h>

void criaHeap(int *vet, int inicio, int fim){
    int aux = vet[inicio];
    int j = 2*inicio + 1;
    while(j <= fim){
        if(j<fim){
            if(vet[j] < vet[j+1]){
                j = j+1;
            }
        }
        if(aux < vet[j]){
            vet[inicio] = vet[j];
            inicio = j;
            j = 2*inicio+1;
        }else{
            j = fim +1;
        }
    }
    vet[inicio] = aux;
}

void heapSort(int *v, int n){
    int i, aux;
    for(i = (n-1)/2; i >= 0; i--){
        criaHeap(v, i, n-1);
    }
    for(i = n-1; i>= 1; i--){
        aux = v[0];
        v[0] = v[i];
        v[i] = aux;
        criaHeap(v, 0, i-1);
    }
}

int main()
{
    int v[] = {23,4,67,-8, 90,54,21};

    heapSort(v, 7);

    for(int i=0; i<7;i++){
        printf("%i ", v[i]);
    }

    return 0;
}
