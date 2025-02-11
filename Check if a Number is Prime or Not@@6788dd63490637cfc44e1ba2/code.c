#include <stdio.h>
int main() {
    int a,c;
    scanf("%d",&a);
    if (a>1){
        for (int i=1;i<=n;i++){
            c=a%n==0;
            if (c==0){
                break;
            }
        }
        if (c==1){
            printf("Prime");
        }else {
            printf("Not Prime");
        }
    }
    return 0;
}