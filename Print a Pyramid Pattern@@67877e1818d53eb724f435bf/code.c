#include<stdio.h>
int main(void){
    int i,j,space,rows;
    scanf("%d",&rows);
    for (i=1;i<=rows;i++){
        for (space=1;space<=rows-i;space++){
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}