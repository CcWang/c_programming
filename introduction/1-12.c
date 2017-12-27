#include <stdio.h>
int main(){
    #define IN 1
    #define OUT 0
    int c,state;
    state = OUT;

    while((c=getchar())!=EOF){
        if(c ==' '){
            if(state == IN){
                putchar('\n');
                state = OUT;

            }
        }else if(state == OUT){
            state = IN;
            putchar(c);
        }else{
            putchar(c);
        }
        
    }
}