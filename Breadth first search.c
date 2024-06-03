#include<stdio.h>
void BFS(int);
int graph[10][10],visited[10],total;
int main()
{
  int i,j;
  printf("\nenter the total number of vertices is graph");
  scanf("%d",&total);
  printf("\nenter the adjancey matric\n");
  for(i=0;i<total;i++)
  {
    for(j=0;j<total;j++)
    {
      scanf("%d",&graph[i][j]);
    }
  }
  for(i=0;i<total;i++)
  {
    visited[i]=0;
  }
  BFS(0);
}
void BFS(int vertex)
{
  int j;
  printf("%d\t",vertex);
  visited[vertex]=1;
  for(j=0;j<total;j++)
  {
    if(!visited[j]&& graph[vertex][j]==1)
    {
      BFS(j);
    }
  }
}
