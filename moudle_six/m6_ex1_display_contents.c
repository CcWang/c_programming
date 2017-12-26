/************************************************
 * filename: m6_ex1_display_contents.c
 * Exercise: Module 6, Exercise 1
 * Name: Chongchong Wang
 * Date Created: March 29, 2017
 *
 * Description: This program sequentially displays on screen 
 * the contents of all of the files listed in the command line. 
 * Use argc to control a loop.
 **************************************************/
#include <stdio.h>
#include <stdlib.h> 	//exit() prototype

int main(int argc, char  *argv[])
{
	/* code */
	// place to store each character as read
	int ch;
	// to read all the files listed in the command line
	int count;
	//'file pointer'
	FILE *fp;

	//check if gaven any file names
	if(argc < 2){
		printf("Please pass any value\n");
		exit(EXIT_FAILURE);
	}
	// using for loop to read all the content from the files listed in the command line
	for(count = 1; count < argc; count++){
		// check if the file can be read
		if((fp = fopen(argv[count], "r")) !=NULL){
			//print content in argvv[count] name file
			ch=getc(fp);
			while(ch !=EOF){
				putchar(ch);
				ch = getc(fp);
			}
			printf("\n");
		}else{
			// tell user which file cannot be read
			printf("Can't open %s\n", argv[count] );
			exit(EXIT_FAILURE);
		}
	}

	return 0;
}