// progam to do a simple iterest
#include <stdio.h>
int main(){
    int principal_amount,rate,time,simple_interest;
    
    printf("enter principal_amount: ");
    scanf("%d",&principal_amount);
    printf("the principal_amount is:%d",principal_amount);
    
    printf("\nenter rate: ");
    scanf("%d",&rate);
     printf("the rate is:%d",rate);

    printf("\nenter time: ");
    scanf("%d",&time);
    printf("the time is:%d",time);

    simple_interest=(principal_amount*time*rate)/100;
    printf("\nthe simple interest is:%d",simple_interest);

    
    
    
    return 0;
}
