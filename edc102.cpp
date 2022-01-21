//Cooperation of EDB1 P.6//
//Edward 1,12,2022       //

/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int book[1001], comp1, comp2, val1, val2;

    for(comp1=0;comp1<=1000;comp1++){
        book[comp1]=0;
    }

    scanf("%d", &val2);

    for(comp1=1;comp1<=val2;comp1++){
        scanf("%d", &val1);
        book[comp1]=0;
    }

    for(comp1=1000;comp1>=0;comp1--){
        for(comp2=1;comp2<=book[comp1];comp2++){
            printf("%d", comp1);
        }
    }

    system("pause");
    return 0;
}