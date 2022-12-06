#include<stdio.h>

int main() {
//age cheking
int marks;
printf("Enter your age");
scanf("%d" , &marks);


if (marks >= 70 && marks <= 100 ) {
printf("A++ \n");
}
else if (marks >= 50 && marks <= 69 ){
printf("A+ \n");
 }
else if (marks <= 30){

    printf("fail");
}
    return 0;
}