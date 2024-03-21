#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_random_val_to_array(int *A, int sz) {
    srand((unsigned int)clock());
    for (int i = 0; i < sz; ++i) {
        A[i] = rand() % 7;
    }
}

void print_array(int *A, int sz) {
    for (int i = 0; i < sz; ++i) {
        printf(" %d", *(A + i));
    }
    printf("\n");
}

int main() {
    int A[7] = {1, 2, 3, 4, 5, 6, 7};
    int* B = (int*)malloc(7 * sizeof(int));
    int** C = (int **)malloc(7 * sizeof(int*));
    for (int i = 0; i < 7; ++i) {
        C[i] = (int *)malloc(7 * sizeof(int));
        fill_random_val_to_array(C[i], 7);
    }
    fill_random_val_to_array(B, 7);
    print_array(A, 7);
    print_array(B, 7);
    print_array(C[0], 7);
}