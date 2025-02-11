#include <stdio.h>
int main() {
    int a,c;
    c = 1;
    scanf("%d",&a);
    if (a>1){
        for (int i=2;i<a;i++){
            c=a%i!=0;
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