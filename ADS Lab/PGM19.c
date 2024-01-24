#include<stdio.h>
#include<stdbool.h>
#define INF 99999
int G[50][50],x,y,V,n=0,mincost=0;
bool s[20]={false};
void prims(){
    while(n<V-1){
        int min = INF;
        x=0; y=0;
        for(int i=0;i<V;i++){
            if(s[i]){
                for(int j=0;j<V;j++){
                    if(!s[j] && G[i][j]){
                        if(min > G[i][j]){
                            min = G[i][j];
                            x=i; y=j;
                        }
                    }
                }
            }
        }
        
        printf("%d\t%d\t:\t%d\n",x,y,G[x][y]);
        mincost+=G[x][y];
        s[y]=true;
        n++;
    }
    printf("Minimum Cost : %d",mincost);
}
void main(){
    
    printf("Enter the no of vertices : ");
    scanf("%d",&V);
    printf("Enter cost matrix : ");
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            scanf("%d",&G[i][j]);
        }
    }
    
    s[0]=true;
    
    printf("Edge\t:\tCost\n");
    prims();
    
}

OUTPUT

Enter the no of vertices : 5
Enter cost matrix : 0 5 0 7 0 5 0 8 1 10 0 8 0 1 11 7 3 1 0 0 0 10 11 0 0
Edge	:	Cost
0	1	:	5
1	3	:	1
3	2	:	1
1	4	:	10
Minimum Cost : 17