#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
int remove_s(char s[]);

int main(){
    char line[MAXLINE];
    int i,j;

    while(getlines(line, MAXLINE) >0){
        printf("%s", line );
        if((i=remove_s(line)) > 0){
            printf("%s", line );
        }
    }
    return 0;
}

int getlines(char s[], int lim){
    int c,i,j;
    j = 0;

    for(i=0;(c=getchar())!=EOF && c!='\n';++i){
        if(i < lim-2){
            s[j] = c;
            ++j;
        }
        if( c == '\n'){
            s[j] = c;
            ++i;
            ++j;
        }
        s[j]='\0';
        return i;
    }
    return i;
}

int remove_s(char s[]){
    int i;

    i = 0;

    while (s[i] !='\n'){
        ++i;
    }
    --i;
    while (i>=0 &&( s[i] ==' ' || s[i] == '\t')){
        --i;
    }
    if(i>=0){
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}