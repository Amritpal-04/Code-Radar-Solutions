#include<stdio.h>
void Floyd_triangle(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Floyd_triangle(n);
    return 0;
}