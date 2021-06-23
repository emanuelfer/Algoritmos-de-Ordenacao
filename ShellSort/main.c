#include <stdio.h>
#include <stdlib.h>

void shellSort(int *vet, int n){
    int h, temp, j;

    for(h=1; h < n; h = (3*h)+1);

    while(h > 0){
        h = (h-1)/3;

        for(int i = h; i < n; i++){
            temp = vet[i];
            j = i;

            while(vet[j-h] > temp){
                vet[j] = vet[j-h];
                j = j-h;
                if(j < h)
                    break;
            }
            vet[j] = temp;
        }
    }
}

int main()
{

    int vet[] = {7, 15, 23, -1, 8, 44, 9, 36, -15, 27};
    int n = sizeof(vet)/sizeof(int);

    shellSort(vet, n);

    for(int i = 0; i < n; i++){
        printf("%i ", vet[i]);
    }
    return 0;
}
