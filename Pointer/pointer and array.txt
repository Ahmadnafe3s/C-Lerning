#include<stdio.h>
//WAF to calculate price and products and average of two products 

void product(int arr[2] , int *sum , int *pro , int *avg);

int main(){
int arr[2] = {5 , 10};

int sum , avg , pro;

product(arr , &sum , &pro , &avg);

printf("Final price = %d Produc = %d Avg = %d \n" , sum , pro , avg);

    return 0;
}

void product(int arr[2] , int *sum , int *pro , int *avg){

*sum = arr[0] + arr[1];
*pro = arr[0] * arr[1];
*avg = (arr[0] + arr[1])/2;

}