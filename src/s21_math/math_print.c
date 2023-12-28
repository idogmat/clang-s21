#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double x = 1.0;
    double y = 1.0;
    
    printf("%d\n",abs(x));
    printf("%lf\n",floor(x));
    printf("%lf\n",fmod(x,y));
    printf("%lf\n",exp(x));
    printf("%lf\n",log(x));
    printf("%lf\n",sqrt(x));
    printf("%lf\n",pow(x,y));


    // printf("%d",fmod(x,y));
    // printf("%d",fmod(x,y));
    // gcc math_print.c -lm
    return 0;
}