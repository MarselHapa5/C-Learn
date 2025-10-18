#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int *ar = malloc(1000000000000000000);
    printf("Allocated %d bytes in address %p \n", sizeof(int), (void*)ar);
    free(ar);
    printf("Memory freed!");
    return 0;
}