#include <stdio.h>
#include <stdlib.h>

int main(void){
    int dis[10],bak[10],i,k,n,m,u[10],v[10],w[10],check,flag;
    int inf=99999999;

    scanf("%d %d",&n,&m);

    for(i=1;i<=m;i++){
        scanf("%d %d %d",&u[i],&v[i],&w[i]);
    }

    for(i=1;i<=m;i++){
        dis[i]=inf;
    }
    dis[1]=0;

    for(k=1;k<=n-1;k++){
        for(i=1;i<=n;i++){
            bak[i]=dis[i];
        }
        
        for(i=1;i<=m;i++){
            if( dis[v[i]] > dis[u[i]] + w[i] ){
                dis[v[i]] = dis[u[i]] + w[i];
            }
        }

        check=0;
        for(i=1;i<=n;i++){
            if( bak[i]!=dis[i]){
                check=1;
                break;
            }

            if(check==0){
                break;
            }
        }

        flag=0;
        for(i=1;i<=m;i++){
            if( dis[v[i]] > dis[u[i]] + w[i] ){
                flag=1;
            }
        }

        if(flag==1){
            printf("This graphic has negative circle.");
        }

        else{
            for(i=1;i<=n;i++){
                printf("%d",dis[i]);
            }
        }
    }
    system("pause");
    return 0;
}