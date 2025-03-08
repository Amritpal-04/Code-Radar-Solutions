#include<stdio.h>
int main(void){
  int i,j,rows;
  scanf("%d",&rows);
     for (i=1;i<=rows;i++){
      for (j=1;j<=rows;j++){
        if ((i+j)<=rows)
        printf(" ");
        else
        printf("* ");//Upon space before star it will print triangle
      }
      printf("\n");
     }
     for (i=rows-1;i>=1;i--){
      for (j=1;j<=rows;j++){
        if ((i+j)<=rows)
        printf(" ");
        else
        printf("* ");//Upon space before star it will print triangle
      }
      printf("\n");
     }
}