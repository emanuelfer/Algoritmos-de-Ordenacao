#include <stdio.h>
#include <stdlib.h>

int particiona(int *v, int inicio, int fim){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = v[inicio];

    while(esq < dir){
        while(v[esq] <= pivo)
            esq++;
        while(v[dir] > pivo)
            dir--;
        if(esq < dir){
            aux = v[esq];
            v[esq] = v[dir];
            v[dir] = aux;
        }
    }
    v[inicio] = v[dir];
    v[dir] = pivo;
    return dir;
}

void quickSort(int *v, int inicio, int fim){
    int pivo;
    if(inicio < fim){
        pivo = particiona(v, inicio, fim);
        quickSort(v, inicio, pivo-1);
        quickSort(v, pivo+1, fim);
    }
}

int main()
{
    int v[] = {23,4,67,-8, 90,54,21};

    quickSort(v, 0, 6);

    for(int i=0; i<7;i++){
        printf("%i ", v[i]);
    }
    return 0;
}
