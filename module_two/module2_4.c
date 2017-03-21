#include <stdio.h>
#include <string.h>
#define SHIPPING 2.75
int main(void){
	float tot_shp_cost;
	int box_cnt,x;
	printf("Please enter the number of boxes: ");
	scanf("%d", &box_cnt);
	tot_shp_cost = SHIPPING * box_cnt;
	printf("Total shipping cost is: %.2f\n", tot_shp_cost);
	x=strlen("test string");
	printf("%d\n", x);
	printf("%0d",x);
	return 0;
}