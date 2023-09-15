#include <stdio.h>
#include <stdlib.h>


int main()
{
    int tel[14];
    char nom[100];
    char prenom[100];
    char sex[100];
    printf("donnee personnel\n");
    printf("||||||||||||||||||||||||||||||\n");
    printf("enter le nom\n");
    scanf("%c",&nom);
    printf("enter prenom\n");
    scanf("%c",&prenom);
     printf("enter sex\n");
    scanf("%c",&sex);

     printf("enter n tele\n");
    scanf("%c",&tel);
    printf("hi je sui %c %c je sius %c mon n tele est %d ",nom,prenom,sex,tel);
    return 0;
}
