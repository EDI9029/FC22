//Cooperation of EDB1 P.11//
//Edward 1,12,2022       //

/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[21];
    char score;
};

int main(void){
    struct student a[100], t;
    int i,j,n;

    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%s %d", a[i].name, &a[i].score);
    }

    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-1;j++){
            if(a[j].score<a[j+1].score){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    for(i=1;i<=n;i++){
        printf("%s\n", a[i].name);
    }

    system("pause");
    return 0;
}