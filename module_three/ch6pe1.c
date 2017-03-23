#include <stdio.h>
int main(void){
	char letters[26];
	int index,i ;
	for(index=0,i=97;index<26;i++,index++){
		letters[index]=i;
		printf("%c | ",letters[index] );
	}
	//printf("%c\n",num );
}