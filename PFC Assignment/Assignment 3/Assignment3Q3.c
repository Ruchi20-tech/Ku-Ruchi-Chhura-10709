//MULTIPLES OF 5
//Assignment-3 Question-3
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k = n/5;
    int sum = 5*k*(k+1)/2;
    printf("5 multiple sum = %d",sum);
    return 0;
}