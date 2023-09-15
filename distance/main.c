#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int X1,X2,Y1,Y2,d;
    int x,y;
    printf("programe de calcule de distance entre deux point\n");

    printf("enter les  coordonnées X du 1er point\n");
    scanf("%d",&X1);
    printf("enter les  coordonnées Y du 1er point\n");
    scanf("%d",&Y1);
    printf("enter les  coordonnées X du 2er point\n");
    scanf("%d",&X2);
    printf("enter les  coordonnées X du 2er point\n");
    scanf("%d",&Y2);
    x=X1-X2;
    y=Y1-Y2;
    d=x*x+y*y;
    d=sqrt(d);
    printf("la distance d=%d",d);

    return 0;
}
