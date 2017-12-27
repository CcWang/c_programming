#include <stdio.h>
int main(){
    float c,f;
    int lowest, highest, step;
    lowest = 0;
    highest = 100;
    step =1;
    c = lowest;
    printf("Celsius Fahr\n");
    while(c<=highest){
        f = 9.0/5.0*c+32.0;
        printf("%6.1f  %3.0f \n", c,f );
        ++c;
    }
}