#include <stdio.h>
 
int main() {
 
    double x, y, z, media;
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    media = (x*2 + y*3 + z*5)/10;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}