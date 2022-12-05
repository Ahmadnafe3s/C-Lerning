#include<stdio.h>

int main(){
    int multiply;
    printf("Enter your num");
    scanf("%d" , &multiply);
for (int i = 20; i >= 1; i--)
{
    printf("%d\n" , multiply * i);
}


    return 0;
}