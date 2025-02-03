#include <stdio.h>

char* welcome() {
    return "You entered: ";
}

int main() {
    printf("%.2f", welcome());
    return 0;
}