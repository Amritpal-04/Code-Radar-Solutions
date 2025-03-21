#include<stdio.h>
void alphabet_pyramid(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        for (int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    alphabet_pyramid(n);
    return 0;
}