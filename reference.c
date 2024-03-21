#include <stdio.h>

int swap_by_val(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int swap_by_reference(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 1;
    int b = 2;
    swap_by_val(a, b);
    printf("a %d, b %d", a, b);

}