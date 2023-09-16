#include <stdio.h>

int main() {
    char name[7] = "gilmar";

    for (int i=0; i < sizeof(name) - 1; i++){
        char* c = &name[i];
        
        printf("%c = %d\n", *c, *c);
    }

    return 0;
}
