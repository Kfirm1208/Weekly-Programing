#include <stdio.h>

int main()
{
    int fac=1,count,num;
    // input
    printf("Enter a postive number: ");
    scanf("%d",&num);
    //process
    for(count = 1; count<= num; count++){
        fac *= count;
    }
    //codition output
    if (num==0){
        printf("Factorial of %d is %d\n",num,1);
        
    }
    else{
         printf("Factorial of %d is %d\n",num,fac);
    }
    
   
    return 0;
}