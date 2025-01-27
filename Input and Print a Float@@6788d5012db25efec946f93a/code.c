#include <stdio.h>

char* welcome() {
    return "You entered: ";
}

int main() {
    printf("%s", welcome());
    return 0;
}