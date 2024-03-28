//
// Created by Chengwei Wang on 3/28/24.
//
#include <stdio.h>
#include <stdlib.h>

struct par_pos {
    int lo;
    int hi;
};

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

void swap(int *A, int px, int py) {
    int tmp = A[px];
    A[px] = A[py];
    A[py] = tmp;
}

void print_array(int *A, int sz) {
    for (int i = 0; i < sz; ++i) {
        printf(" %d", A[i]);
    }
    printf("\n");
}

struct par_pos three_way_par(int *A, int sz, int start, int end, int pivot) {
    int cur = start;
    int lo = start;
    int hi = end;
    while (cur <= hi) {
        if (A[cur] < pivot) {
            swap(A, cur, lo);
            cur++;
            lo++;
        }
        else if (A[cur] == pivot) {
            cur++;
        }
        else {
            swap(A, cur, hi);
            hi--;
        }
    }
//    printf(" %d (%d, %d):", pivot, hi, lo);
//    print_array(A, sz);
    struct par_pos res;
    res.lo = lo;
    res.hi = hi;
    return res;
}

void helper(int *A, int sz, int start, int end) {
//    printf("start %d end %d\n", start, end);
    if (start < end) {
        struct par_pos ps = three_way_par(A, sz, start, end, A[end]);
//        printf("ps1 %d ps2 %d\n", ps.lo, ps.hi);
        helper(A, sz, start, ps.lo - 1);
        helper(A, sz, ps.hi + 1, end);
    }
}

void quick_sort(int *A, int sz) {
    helper(A, sz, 0, sz - 1);
}

int main() {
    int sz = 7;
    int A[7] = {2, 4, 6, 9, 0, -1, 5};
    int *B = (int *)malloc(sz * sizeof(int));
//    qsort(A, 7, sizeof(int), cmp);
//    qsort(B, sz, sizeof(int), cmp);
    quick_sort(A, 7);
    quick_sort(B, sz);
    for (int i = 0; i < 7; ++i) {
        printf(" %d", B[i]);
    }
    printf("\n");
}