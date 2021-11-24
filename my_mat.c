#include <stdio.h>
#include <string.h>
#include "my_mat.h"
#define N 10

int mat [N][N];



//A - the first function
void A(){
   int x=0;
   for (int i = 0; i < N; i++){
     for (int j = 0; j < N; j++){
        scanf("%d",&x);
        mat[i][j] =x;
     }
   }
}

int help_C(int x, int y){
    int dist[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(i==j){
                dist[i][j]=0;  
            }
            else if(mat[i][j]==0 ){
                dist[i][j]=99999; 
            }
            else {
                dist[i][j] = mat[i][j];
            }
        }
    }
    for (int k = 0; k < N; k++){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                  if (dist[i][j] > dist[i][k] + dist[k][j])
                  {
                        dist[i][j] = dist[i][k] + dist[k][j];
                  }    
            }
        }
    }
    // for (int k = 0; k < N; k++)
    // {
    //     for (int i = 0; i < N; i++)
    //     {
    //         printf("%d ",dist[k][i]);
    //     }
    //     printf("\n");
    // }
    if(dist[x][y]==0 || dist[x][y]>=99999){
        return -1;
    }
    int w = dist[x][y];
    return w; 
    
}

void C(){
    int i,j;
    scanf("%d",&i);
    scanf("%d",&j); 
    int s = help_C(i,j);
    printf("%d\n",s);
}

void B(){
   int i,j;
   scanf("%d",&i);
   scanf("%d",&j); 
   int x =help_C(i,j);
    if(x!=-1){
      printf("True\n");  
    }
    else{
       printf("False\n");
   }

}

// int main()
// {
// int p = C();
// printf("the dist is: %d\n", p);
// A();
// for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             printf("%d ",mat[i][j]);
//         }
//         printf("\n");    
//     }
// B();
// return 0;
// }