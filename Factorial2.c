#include <stdio.h>
//fauction for calculate factorial
int fac(int num){
    //Process
    return ((num >0)?(num * fac(num-1)):1);
}
int main()
{
    //input
    int num;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    //output
    printf("Factorial of %d is %d",num,fac(num));
    return 0;
}