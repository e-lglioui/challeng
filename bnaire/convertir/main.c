#include <stdio.h>
#include <stdlib.h>
void octal(int d){
   if(d==0){
    printf("0");
   }
   else{
    octal(d/8);
    printf("%d",d%8);
   }

}
void exadecimal(int d){
   if(d==0){
    printf("0");
   }
   else{
   exadecimal(d/16);
   printf("%d",d%16);
   }

}


int main()
{
    int d;
    printf("programme pour convertir un nombre  en octal \n ");
    printf("##########################################\n \n");
    printf("saisir le nombre  \n");
    scanf("%d",&d);
    octal(d);
    printf("\n \n");
    exadecimal(d);
    return 0;
}
