#include <stdio.h>
int main(){
    float f, c;
    int lower, highest, step;
    lower = 0;
    highest = 300;
    step =20;
    f = lower;
    printf("Fahr Celsius\n");
    while(f <=300){
        c = 5.0/9.0*(f-32);
        printf("%3.0f  %6.1f \n",c,f );
        f = f+step;
    }

}