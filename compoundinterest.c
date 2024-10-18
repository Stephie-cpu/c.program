//compound interest
#include <stdio.h>
#include<math.h>//for the pow () function
int main(){
    //rate= interestrate/100:its in decimal form
    double principal,rate,time,compoundInterest;
    int n;//number of times iterest is compounded per year
    
    printf("enter the principal amount: ");
    scanf("%lf",&principal);
    
    printf("enter the  rate: ");
    scanf("%lf",&rate);
  
    printf("enter the time in years: ");
    scanf("%lf",&time);
  
    printf("enter the number of times interest is compounded per year: ");
    scanf("%d",&n);
    //compoundInterest formula:A=P(1+rate/n)^(n*time)
    
    
    compoundInterest=principal* pow((1+rate/n),n*time);
    printf("The accumulated compound interest is:%.2lf",compoundInterest);
    return 0;
    
}
