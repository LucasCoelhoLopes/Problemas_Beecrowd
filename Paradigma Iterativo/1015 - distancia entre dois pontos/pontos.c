#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf\n", &x1, &y1, &x2, &y2);

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.4lf\n", distancia);

    return 0;
}



