#include <stdio.h> 
#include <math.h> 
int main(){   
    float a, b, c, S, CV, p;
    printf("Nhap a = ");
    scanf("%f",&a);
   
    printf("Nhap b = ");
    scanf("%f",&b);
 
    printf("Nhap c = ");
    scanf("%f",&c);
    CV = a+b+c;
    printf("Chu vi = %f\n",CV);
    p = CV/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Dien tich = %f",S);
 
    return 0;
}
