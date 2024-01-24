#include<stdio.h>
int visited[10] = {0}, q[10] = {0}, n, v, f=-1, r=-1, a[10][10];

void bfs(int v){
    for(int i=1;i<=n;i++){
        if(a[v][i]&&!visited[i]){
            q[++r]=i;
        }
    }
    if(f<=r){
        visited[q[f]]=1;
        bfs(q[f++]);
    }
}

void dfs(int v) {
    printf("%d\t", v);
    visited[v]=1;

    for(int i=1;i<=n;i++){
        if (!visited[i]&&a[v][i]==1){
            dfs(i);
        }
    }
}

void main(){
    printf("Enter no of vertices : ");
    scanf("%d",&n);
    
    printf("Enter the adjacency matrix : ");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
   
    printf("Enter the starting vertex : ");
    scanf("%d",&v);
    bfs(v);
    printf("BFS Traversal : ");
    for(int i=1;i<=n;i++){
        if(visited[i]){
            printf("%d\t",i);
        }
    }

    for(int i=1;i<=n;i++){
       visited[i]=0;
    }
    
    printf("\nDFS Traversal : ");
    dfs(v);
}

OUTPUT

Enter no of vertices : 5
Enter the adjacency matrix : 0 1 0 1 0 1 0 1 1 1 0 1 0 1 1 1 0 1 0 0 0 1 1 0 0
Enter the starting vertex : 3
BFS Traversal : 1	2	3	4	5	
DFS Traversal : 3	2	1	4	5