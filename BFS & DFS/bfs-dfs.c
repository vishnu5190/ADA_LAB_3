#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int a[10][10], n, vis[10];
void bfs(int);
int dfs(int);

void main() {
  int i, j, src, ans, choice;

  while(1) {
    printf("\n1. BFS \t 2. DFS \t 3. Exit\n");
    printf("\nEnter the choice: ");
    scanf("%d\n", &choice);

    switch(choice) {
        case 1: bfs(src);
            break;
        case 2: ans = dfs(src);
            break;
        case 3: exit(0);
            break;
        default: printf("invalid choice\n");
            break;
    }

  printf("\n Enter the no of nodes: ");
  scanf("%d", &n);
  printf("\n Enter the adjacency matrix: \n");

  for(i = 1; i <= n; i++) {
    for(j = 1; j <= n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n Enter the source node: \t");
  scanf("%d", &src);
  getch();
  }
}

void bfs(int src) {
  int q[10], f=0, r=-1, vis[10], i, j;
  for(j = 1; j <= n; j++) {
    vis[j]=0;
  }
  vis[src] = 1;
  r = r + 1;
  q[r] = src;

  while(f <= r) {
    i = q[f];
    f = f + 1;
    for(j = 1; j <= n; j++) {
      if(a[i][j] == 1 && vis[j] != 1) {
        vis[j] = 1;
        r = r + 1;
        q[r] = j;
      }
    }
  }

  for(j = 1; j <= n; j++) {
    if(vis[j] != 1) {
      printf("\n Node %d is not reachable\n", j);
    }
    else {
      printf("\n Node %d is reachable\n", j);
    }
  }
}

int dfs(int src) {
  int j;
  vis[src] = 1;
  for(j = 1; j <= n; j++) {
    if(a[src][j] == 1 && vis[j] != 1) {
      dfs(j);
    }
  }

  int ans = dfs(src);

  if(ans==1) {
    printf("\n Graph is connected\n");
  }
  else {
    printf("\n Graph is not connected\n");
  }
  getch();

  for(j = 1; j <= n; j++) {
    if(vis[j] != 1) {
      return 0;
    }
  }
  return 1;
}


