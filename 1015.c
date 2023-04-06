#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,distance,Z;
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    distance = (pow(x2 - x1),2) + pow(y2 - y1),2);

    Z= sqrt(distance);
    printf(".4lf\n",distance);
    return 0;




}
