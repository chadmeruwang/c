#include <stdio.h>
#include <string.h>

void reverse(char* str, int sz) {
    int lo = 0;
    int hi = sz - 1;
    while (lo < hi) {
        char tmp = str[lo];
        str[lo] = str[hi];
        str[hi] = tmp;
        lo++;
        hi--;
    }
}

int main() {
    // char* str = "helloworld"; //string literal, it cannot be changed
    char str[] = "helloworld"; //string array

    size_t len = strlen(str);
    printf(" %zu\n", len);
    reverse(str, len);
    printf(" %s", str);
}