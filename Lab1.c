#include <stdio.h>
#include <math.h>
int main(){
    float r1, r2;
    char i;
    float a, b, c, k;

    printf("Enter the coefficients a , b, c restpectively: ");
    scanf("%f%f%f", &a, &b, &c);
    k = sqrt(b*b - 4*a*c);
    r1 = (-b + k)/(2*a);
    r2 = (-b - k)/(2*a);
    if(k>0){
    printf("First root is: %f", r1);
    printf("Second root is %f", r2);

    }
    else if(k==0) {
    r1=r2=-b/(2*a);
    printf("First root1 = root2= %f", r1);
    }

    else{
    printf("the roots are imaginary!");
    r1=r2= -b / (2 * a);

    printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", r1, k, r1, k);
    }
    return 0;
    }