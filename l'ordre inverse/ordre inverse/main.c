#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100];
    int n,i,j,T;
    int n1;
    printf("ordre inverse\n");
    printf("#########################");
    printf("enter la tail du tableau\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("entrer le %d eme nombre",i+1);
        scanf("%d",&t[i]);
    }

          n1= n/2;

        for(i=0;i<n1;i++){
                T=t[i];
                t[i]=t[n-i];
                t[n-i]=T;
            }



    for(i=0;i<n;i++){
        printf(" le %d eme nombre EST %d \n",i+1,t[i]);

    }

    return 0;
}
