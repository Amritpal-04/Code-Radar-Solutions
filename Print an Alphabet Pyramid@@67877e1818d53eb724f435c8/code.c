#include<stdio.h>
void alphabet_pyramid(int n){
    for(int i=1;i<=n;i++){//Loop for rows
        char ch='A';//Reset character to 'A' for each row
        for (int j=1;j<=i;j++){//Loop for printing alphabets
            printf("%c ",ch);
            ch++;//Move to the next letter
        }
        printf("\n");//Move to the next row
    }
}
int main(){
    int n;
    scanf("%d",&n);
    alphabet_pyramid(n);
    return 0;
}