#include <stdio.h>
int a;
int b;

void doubled();

int main(){
    extern int a;
    extern int b;
    a=10;
    b=20;
    printf("%d, %d\n",a,b );
    doubled();
    printf("after double: %d, %d\n",a,b );

}

void doubled(){
    extern int a;
    extern int b;
    printf("in double %d, %d\n",a,b );
    a= a*2;
    b= b*2;
    printf("after *2: %d, %d\n",a,b );

}