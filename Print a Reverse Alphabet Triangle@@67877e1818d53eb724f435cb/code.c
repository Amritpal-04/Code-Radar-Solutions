#include<stdio.h>
void reverse_alpha_tri(int n){
    for (int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    return 0;
}