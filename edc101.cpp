//Cooperation of EDB1 P.5//
//Edward 1,12,2022       //

/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[11], comp1, comp2, vel1;

    for(comp1=0;comp1<=10;comp1++){
        a[comp1]=0;
    }

    for(comp1=1;comp1<=5;comp1++){
        scanf("%d",&vel1);
        a[vel1]++;
    }

    for(comp1=0;comp1<=10;comp1++){
        for(comp2=1;comp2<=a[comp1];comp2++){
            printf("%d ",comp1);
        }
    }

    system("pause");
    return 0;
}