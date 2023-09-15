#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int c,r;
    printf("Circonférence d'un cercle\n");
    printf("###############################\n");
    printf("enter la rayon de cercle");
    scanf("%d",&r);
    c=2*M_PI*r;
    printf("Circonférence d'un cercle est %d",c);
    return 0;
}
