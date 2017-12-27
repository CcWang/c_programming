#include <stdio.h>
int main(){
    int c;
    int nb =0;
    int nt =0;
    int nl = 0;
    printf("number of blanks are %d,number of tabs are %d,number of newlines are %d\n", nb,nt,nl);

    while((c=getchar())!=EOF){
        if(c==' '){
            ++nb;
        }
        if(c == '\n'){
            ++nl;
        }
        if(c == '\t'){
            ++nt;
        }
    }
    printf("number of blanks are %d,number of tabs are %d,number of newlines are %d\n", nb,nt,nl);
}