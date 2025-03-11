#include<stdio.h>
int main(void){
    int i,j,a;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=1;j<=i;j++){
            printf("%c ",64+j);
        }
        printf("\n");
    }
}