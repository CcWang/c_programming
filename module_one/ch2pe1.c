#include <stdio.h>
int main(int argc, char const *argv[])
{
	char first_name[]="Gustav";
	char last_name[]="Mahler";

	printf("%s %s \n", first_name, last_name);
	printf("%s\n%s\n",first_name,last_name );
	printf("%s", first_name);
	printf(" %s", last_name );
	return 0;
}