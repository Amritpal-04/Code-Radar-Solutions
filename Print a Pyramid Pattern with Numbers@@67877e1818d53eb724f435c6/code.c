#include<stdio.h>
void number_pyramid(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){//print spaces
            printf(" ");
        }
        for (int j=1;j<=i;j++){//print numbers
            printf("%d ",j);
        }
        printf("\n");//move to the next line
    }
}
int main(){
    int n;
    scanf("%d",&n);
    number_pyramid(n);
    return 0;
}