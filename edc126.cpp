//Cooperation of EDB1 P.127//
//Edward 1,17,2022       //

/***************************************************************/
#include <stdio.h>
#include <stdlib.h>

int book[101],sum,n,e[101][101];

void dfs(int cur){
    int i;
    printf("%d",cur);
    sum++;
    if(sum==n){
        return ;
    }
    for(i=1;i<=n;i++){
        if(e[cur][i]==1 && book[i]==0){
            book[i]=1;
            dfs(i);
        }
    }
    return ;
}

int main(void){
    int i,j,m,a,b;
    scanf("%d %d",&n, &m);

    for(i=1;i<=m;i++){
        scanf("%d %d", &a, &b);
        e[a][b]=1;
        e[b][a]=1;
    }

    book[1]=1;
    dfs(1);

    system("pause");
    return 0;
}