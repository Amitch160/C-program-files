#include<stdio.h>

int main(){
     char *c ="Amit\0";
     const int a =50;
     
    printf("Hello World!\n");
    printf("%d",'1');
    printf("\n%c",97);
    printf("\n%d",sizeof(c));
    return 0;
}