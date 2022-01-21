//Cooperation of EDB1 P.31//
//Edward 1,12,2022       //

/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct queue{
    int data[100];
    int head;
    int tail;
};

int main(void){
    struct queue q;
    int i;

    q.head=1;
    q.tail=1;
    for(i=1;i<=9;i++){
        scanf("%d", &q.data[q.tail]);
        q.tail++;
    }

    while(q.head<q.tail){

        printf("%d ", q.data[q.head]);
        q.head++;

        q.data[q.tail]=q.data[q.head];
        q.tail++;

        q.head++;
    }

    system("pause");
    return 0;
}