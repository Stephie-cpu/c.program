// C variables and data types
//Preprocessor directive
#include<stdio.h>//scanf(),printf()
int main(){
    char a;//%c
    char name[5]={};//%s
    int age;//%d
    float area;//%f
    double salary;//%1f
    
    printf( "Enter a character: ");
    scanf("%c",&a);
    printf("the character is :%c",a);
    
    printf("\nEnter your name:");
    scanf("%s",&name);
    printf("The string is:%s",name);
    
    printf("\nEnter age:");
    scanf("%d",&age);
    printf("The age is:%d",age);
    
    printf("\nEnter the area:");
    scanf("%f",&area);
    printf("The area is:%f",area);
    
    printf("\nEnter salary: ");
    scanf("%lf",&salary);
    printf("the salary is:%lf",salary);
   return 0; 
}
