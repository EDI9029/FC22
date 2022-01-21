//Cooperation of EDB1 P.24//
//Edward 1,12,2022       //

/***************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[101],n,i,j,t;

    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }

    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    printf("%d ",a[1]);
    for(i=2;i<=n;i++){
        if(a[i] != a[i-1]){
            printf("%d", a[i]);
        }
    }

    system("pause");
    return 0;
}