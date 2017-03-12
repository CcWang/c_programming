#include <stdio.h>

void jolly(void){

	printf("For he\'s a jolly good fellow!\n");
}
void deny(void){
	printf("Which nobody can deny!\n");
}

int main(void){
	int count = 1;
	for(count =1; count <=3; ++count){
		jolly();
	}
	deny();
	return 0;
}