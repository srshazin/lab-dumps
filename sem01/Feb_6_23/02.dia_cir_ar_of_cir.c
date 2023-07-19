#include <stdio.h>

double diameter(int r);
double circumference(int r);
double area(int r);

int  main(){

    int r;
    printf("Insert the radius: ");
    scanf("%d", &r);
    printf("Diameter is is %lf\n", diameter(r));
    printf("Circumference is is %lf\n", circumference(r));
    printf("Area is %lf", area(r));
    return 0 ;
}

double diameter(int r){
   return r/2;
}

double circumference(int r){
   return 2*3.1416*r;
}


double area(int r)
{
   return 3.1416* r*r;
}

