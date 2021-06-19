#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *v, int n){
    int i, flag, aux, fim = n;

    do{
        flag = 0;
        for(i=0; i< fim-1; i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i]= v[i+1];
                v[i+1] = aux;
                flag = 1;
            }
        }

        fim--;
    }while(flag != 0);
}

int main()
{
    int v[] = {23,4,67,-8, 90,54,21};

    bubbleSort(v, 7);

    for(int i=0; i<7;i++){
        printf("%i ", v[i]);
    }

    return 0;
}
