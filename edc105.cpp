//Cooperation of EDB1 P.20//
//Edward 1,12,2022       //

/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

int a[101], n;

void quicksort(int left, int right){
    int i,j,t,temp;

    if(left>right){
        return;
    }

    temp=a[left];
    i=left;
    j=right;

    while(i!=j){
        while(a[j]>=temp && i<j){
            j--;
        }
        while(a[i]<=temp && i<j){
            i++;
        }

        if(i<j){
            t=a[i];
            a[i]=a[j];
            a[i]=t;
        }
    }

    a[left]=a[i];
    a[i]=temp;

    quicksort(left,i-1);
    quicksort(i+1,right);
}

int main(void){
    int i,j,t;

    scanf("%d", &n);

    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }

    quicksort(1, n);

    for(i=1;i<=n;i++){
        printf("%d",a[i]);
    }

    system("pause");
    return 0;
}