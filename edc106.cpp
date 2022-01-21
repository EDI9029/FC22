//Cooperation of EDB1 P.24//
//Edward 1,12,2022       //

/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[1001],n,i,t;
    for(i=1;i<=1000;i++){
        a[i]=0;
    }

    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &t);
        a[t]=1;
    }

    for(i=1;i<=1000;i++){
        if(a[i]==1){
            printf("%d",i);
        }
    }

    system("pause");
    return 0;
}