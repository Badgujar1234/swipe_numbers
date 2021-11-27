#include<stdio.h>

int main(){
    int a,b;
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
    printf("Your values before swapping are %d & %d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Your values before swapping are %d & %d",a,b);
    return 0;
}
