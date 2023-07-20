#include<stdio.h>
#include <stdbool.h>

int main() {
	int sum,input,avg,count;
	sum,input,avg = 0;
	count = -1;
	do {
		count++;
		sum += input;
		printf("Enter number : ");
		scanf("%d",&input);
	}while (input > 0);
	if (count == 0) {
		count++;
	}
	printf("Summation : %d\n",sum);
	printf("Average : %.6f",sum*1.0/count);
	return 0;
}


