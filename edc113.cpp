#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a=10;
    int *p;
    p=&a;
    printf("%d", *p);

    system("pause");
    return 0;
}