#include <stdio.h>

int main() {
    
    FILE* f = fopen("helloworld", "w");
    
    if (f == NULL) {
        return -1;
    }
    
    char buf[10];
    fgets(buf, sizeof(buf), stdin);
    fprintf(f, "%s", buf);
    fclose(f);

    f = fopen("helloworld", "r");
    if (f == NULL) {
        return -1;
    }
    
    while(fgets(buf, sizeof(buf), f) != NULL) {
        printf("%s ", buf);
    }
    fclose(f);
    return 0;
}