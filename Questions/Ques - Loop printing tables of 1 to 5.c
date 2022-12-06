#include<stdio.h>

int main(){

for (int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= 10; j++)
    {
        printf("Table %d %d\n" , i , i * j);
    }
    
    printf("\n");
}



    return 0;
}