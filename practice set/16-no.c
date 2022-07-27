#include <stdio.h>
#include<conio.h>
#include <math.h>


double getCircumference(double radius);
double getArea(double radius);


int main() 
{
    system("cls");
    float radius, circ, area;
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
   
    circ = getCircumference(radius);  
    area = getArea(radius);          
    
    

    printf("Circumference of the circle = %.2f \n", circ);
    printf("Area of the circle = %.2f", area);
    
    return 0;
}






double getCircumference(double radius) 
{
    return (2 * M_PI * radius); 
}


double getArea(double radius)
{
    return (M_PI * radius * radius); 
}