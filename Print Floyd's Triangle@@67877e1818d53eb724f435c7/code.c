#include<stdio.h>
void Floyd_triangle(int n){
    int num=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num++;
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