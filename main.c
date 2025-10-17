#include <iso646.h>
#include <stdio.h>//Hey compiler, before compiling my program, include the contents of the Standard Input/Output Header file.
#include <stdbool.h>  //To use bool, true, and false, you must include the header:
#include <math.h>
int main() {

    // int x = 10;
    // x = sqrt(x); square root
     // x =pow(x, 2);   power
    // printf("%d" , x);

    // double radius = 0.0;
    // double area = 0.0;
    // double surfaceArea = 0.0;
    // const double PI = 3.141592653589;
    //
    // printf("Enter radius: ");
    // scanf("%lf", &radius);
    //
    // area = PI * pow(radius, 2);
    // printf("Area is %lf\n", area);
    //
    // surfaceArea = 4 * PI * pow(radius, 3);
    // printf("surfaceArea is %.2lf", surfaceArea);
    
    int dayOfWeek =0;
    printf("Enter a day of the week (1-7): \n");
    scanf("%d",&dayOfWeek);
    
    switch (dayOfWeek) {
        case 1:
            printf("This is Monday");
            break;
        case 2:
            printf("This is Tuesday");
            break;
        case 3:
            printf("This is wednesday");
            break;
        case 4:
            printf("This is Thursday");
            break;
        case 5:
            printf("This is Friday");
            break;
        case 6:
            printf("This is Saturday");
            break; 
        case 7:
            printf("This is Sunday");
            break;     
           default:
            printf("Please only enter a number (1-7)");
    }
    
    
    

    
    return 0;
}
