#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_INTS 10

int main() {
    srand(time(NULL));

    int arr1[NUM_INTS];
    arr1[NUM_INTS-1] = 0;
    int i;
    for(i = 0; i < NUM_INTS-1; i++) {
        arr1[i] = rand();
    }

    printf("Array 1:\n");
    for(i = 0; i < NUM_INTS; i++) {
        printf("pos %d: %d\n",i,arr1[i]);
    }

    int arr2[NUM_INTS];
    int *arr2p = arr2;
    int *arr1p = arr1;
    for(int i = NUM_INTS-1; i >= 0; i--) {
        *(arr2p+i) = *(arr1p+NUM_INTS-i-1);
    }

    printf("Array 2:\n");
    for(i = 0; i < NUM_INTS; i++) {
        printf("pos %d: %d\n",i,*(arr2p+i));
    }

    return 0;
}
