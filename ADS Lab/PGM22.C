#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

int G[50][50], V, d[50];
bool v[50];

int min_d(int d[], bool v[]) {
    int min = INT_MAX, min_i;
    for(int i = 0; i < V; i++) {
        if(!v[i] && d[i] <= min) {
            min = d[i];
            min_i = i;
        }
    }
    return min_i;
}

void dijsktra(int G[50][50], int s) {
    
    for(int k = 0; k < V; k++) {
        d[k] = INT_MAX;
        v[k] = false;
    }
    d[s] = 0;

    for(int i = 0; i < V; i++) {
        int m = min_d(d, v);
        v[m] = true;
        for(int j = 0; j < V; j++) {
            if(!v[j] && G[m][j] && d[m] != INT_MAX && d[m] + G[m][j] < d[j])
                d[j] = d[m] + G[m][j];
        }
    }

    printf("Vertex\tDistance\n");
    for(int i = 0; i < V; i++) {
        char str = 'A' + i;
        printf("%c\t\t%d\n", str, d[i]);
    }
}

void main() {
    printf("Enter the number of vertices: ");
    scanf("%d", &V);

    printf("Enter the cost matrix: ");
    for(int i = 0; i < V; i++) {
        for(int j = 0; j < V; j++) {
            scanf("%d", &G[i][j]);
        }
    }
    dijsktra(G, 0);
}

OUTPUT
Enter the number of vertices: 5
Enter the cost matrix: 0 5 0 7 0 5 0 8 1 10 0 8 0 1 11 7 3 1 0 0 0 10 11 0 0
Vertex	Distance
A		0
B		5
C		7
D		6
E		15
