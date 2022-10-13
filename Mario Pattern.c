#include<stdio.h>
#include<conio.h>
void main(){
    int n,i, j,r,l;
    printf("Height:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=i;j++){
            printf("*");
        }
    }
}