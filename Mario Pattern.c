#include<stdio.h>
#include<conio.h>
void main(){
    int n,i, j,r,l;
    printf("Height:");
    scanf("%d",&n); //Height of pyramid
    for(i=1;i<=n;i++){ // determine the number of rows
        for(j=i;j<=n;j++){
            printf(" ");
        }
        for(l=1;l<=i;l++){ //left triangle
            printf("*");
        }
        printf(" "); // vertical line
        for(r=1;r<=i;r++){ //right triangle
            printf("*");
        }
        printf("\n");
    }
}
