#include <stdio.h>
#include <stdlib.h>

void exibe(int *vet, int n){
  for (int i = 0; i < n; ++i)
    printf("%i  ", vet[i]);
  printf("\n\n");
}

/* This function partitions a[] in three parts
   vet[l..i] elementos maiores que o pivô
   vet[i+1..j-1] elementos iguais ao pivô
   vet[j..r] elementos maior que o pivô */

void swap(int *vet, int i, int j){
  int aux = vet[i];
  vet[i] = vet[j];
  vet[j] = aux;
}

void partition(int *vet, int left, int right, int *i, int *j){
  int aux = left;
  int pivot = vet[left];
  
  while(aux <= right){
    if(vet[aux] < pivot){
      swap(vet, left++, aux++);
    }
    else if(vet[aux] == pivot)
      aux++;
    else if(vet[aux] > pivot)
      swap(vet, aux, right--);
  }
  *i = left - 1;
  *j = aux;
}

void threeWayQuickSort(int *vet, int left, int right){
    exibe(vet, 13);
    if(right <= left){
        return;
    }
    
    int i, j;
    partition(vet, left, right, &i, &j);
    threeWayQuickSort(vet, left, i);
    threeWayQuickSort(vet, j, right);
}



int main()
{
    int vet[] = {4, 9, 4, 4, 2, 9, 4, 4, 9, 4, 4, 1, 4};
    int n = sizeof(vet) / sizeof(int);

    //exibe(vet, n);
    threeWayQuickSort(vet, 0, n - 1);
    //exibe(vet, n);
    
    return 0;
}
