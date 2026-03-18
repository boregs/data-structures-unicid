#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void InsertionSort(int *nums, int target);

int main()
{
    int arr[] = {6,4,7,56,3,6};
    int dih = 6;
    InsertionSort(arr, dih);

    return 0;
}

void InsertionSort(int *nums, int target){
    int i, j, key;
    for (i = 1; i < target; i++){
        // faz 'key' ter o valor do indice 'i'
        key = nums[i];

        // loop que verifica se j continua maior que o e se key é menor que a posição anterior
        // EX: [6,4,7,56,3,6]
        //          ^ <-- key
        //        ele verificaria se o 4 (nums [j - 1]) é maior que o 7 (key)


        for (j = i; (j > 0) && (key < nums[j - 1]); j--){
            // se key for menor, o indice j vai receber o valor do indice j - 1
            // EX: [6,4,7,56,3,6]
            //      o indice j é o 4, ele é menor, entao vai receber o valor de 6
            nums[j] = nums[j - 1];
            // toda vez que o loop completar, o j vai voltar uma casa no array para
            // verificar se existe algum numero menor que o atual
        }
        // caso o loop quebre a posição atual do j vai receber o valor guardado dentro da key
        nums[j] = key;


        for (int k = 0; k < target; k++) {
            printf("%d ", nums[k]);
        }
        printf("\n");
    }
}
