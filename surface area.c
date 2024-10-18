// Online C compiler to run surface area of a cylinder
#include <stdio.h>
#define PI 3.146

int main(){
    double radius,height,surfacearea;
    printf("Enter radius: ");
    scanf("%lf",&radius);
    
    printf("Enter height: ");
    scanf("%lf",&height);
    
    surfacearea=(2*PI*radius*height) +(2*PI*radius*radius);
    printf("%lf",surfacearea);
    


    return 0;
}
