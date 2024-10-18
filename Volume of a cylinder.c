//VOLUME OF A CYLINDER
#include <stdio.h>
#define PI 3.142 
int main (){
    double radius,height,volume;
    printf("enter radius:");
    scanf("%lf",&radius);
    printf("The radius is:%lf",radius);
    
    printf("\nenter perpendicular height :");
    scanf("%lf",&height);
    printf("The height is:%lf",height);
    
    volume=PI*radius*radius*height;
    
    
    printf("\nThe volume is:%lf",volume);
    return 0;
    
    
}
