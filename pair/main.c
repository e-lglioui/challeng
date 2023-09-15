#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("pair ou impair\n");
    printf("enter le nomber");
    scanf("%d",&n);
    m=n%2;
    if(m==0){
        printf("le nombre est pair");
    }
    else{
        printf("le nombre est impaire");
    }



    return 0;
}
