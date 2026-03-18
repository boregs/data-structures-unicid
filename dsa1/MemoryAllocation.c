#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 10000;

    /* adicionar "*" na frente de um ponteiro
       causa a ele passar um valor para a varivel
       que está apontando
    */
    int *vector = (int *)malloc(size * sizeof(int));
    if (!vector){
        printf("> ERROR: Failed to allocate memory\n");
        return 1;
    }

    for (int i = 0; i < size; i++){
        vector[i] = i + 1;
        printf("%d", vector[i]);
    }

    free(vector);
    return 0;


}
