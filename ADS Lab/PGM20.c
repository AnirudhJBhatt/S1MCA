#include <stdio.h>
#include <stdlib.h>
const int inf = 99999;
int k, a, b, u, v, n, e = 1, mincost = 0, s[9] = {0}, G[50][50];

int find(int i) {
    while(s[i] != 0)
        i=s[i];
    return i;
}

int combine(int i,int j) {
    if(i != j) {
        s[j] = i;
        return 1;
    }
    return 0;
}
void kruskals(){
    while(e<n) {
        int min = inf;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(G[i][j] < min) {
                    min = G[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        u = find(u); v = find(v);
        if(combine(u, v) != 0) {
            printf("%d\t%d\t:\t%d\n",a,b,min);
            mincost += min;
        }
        G[a][b] = G[b][a] = 99999;
        e++;
    }

    printf("Minimum cost = %d\n", mincost);
}

void main() {
    printf("Enter the number of vertices : ");
    scanf("%d", &n);

    printf("Enter the cost matrix: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &G[i][j]);
            if (G[i][j] == 0) {
                G[i][j] = inf;
            }
        }
    }

    printf("Edge\t:\tCost\n");
    
    kruskals();
}


OUTPUT

Enter the number of vertices : 5
Enter the cost matrix: 0 5 0 7 0 5 0 8 1 10 0 8 0 1 11 7 3 1 0 0 0 10 11 0 0
Edge	:	Cost
1	3	:	1
2	3	:	1
0	1	:	5
0	3	:	7
Minimum cost = 14
