#include <stdio.h>
int main(){
    char a[20];
    char  b[20];
    scanf("%s %s", &a, &b);
    printf("You entered: %s", a);
    printf(" and ");
    printf("%s", b);
    return 0;
}