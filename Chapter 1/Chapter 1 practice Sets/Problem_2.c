// #include <stdio.h>
// #define PI 3.1415

// int main(){
//     float radius,area;
//     // int pi;
//     // pi=3.1415;

//      // user se radius input lena

//     printf("Enter Radius of circle=");
//     scanf("%f",&radius);
    
//     // Area of circle
//     area=PI*radius*radius;

//     //  result print karana 

//     printf("Area of Circle= %.2f\n",area);

//     return 0;
// }

// VOLUME OF CYLENDERS

#include <stdio.h>
#define PI 3.14159

int main(){
    float volume,radius,height;

    printf("Type Radius of Cylender: ");
    scanf("%f",&radius);
    printf("Type Height of Cylender: ");
    scanf("%f",&height);

    volume=PI*radius*radius*height;

    printf("Volume of cylender is = %.2f",volume);
    
    return 0;
}