.#include <stdio.h>
#include <stdlib.h> // for exit

int main(){

	int ch;
	FILE * fp;
	char fname[50];		//to hold the file name

	printf("Enter the name of the file: \n");
	scanf("%s", fname);
	fp = fopen(fname,"r");	//open file for reading
	if(fp == NULL){
		printf("Failed to open file. Bye\n");
		exit(1);		// quit program
	}
	// getc(fp) gets a character from the open file
	while((ch = getc(fp)) !=EOF)
		putchar(ch);
	fclose(fp);

	return 0;
}