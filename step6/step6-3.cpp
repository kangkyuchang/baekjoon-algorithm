#include<stdio.h>

int main() {
	int count;
	scanf("%d", &count);
	int starAmount = 1;
	int increase = 2;
	const int maxAmount = (count * 2) - 1;
	for (int i = 0; i < maxAmount; i++) {
		for (int j = 0; j < ((maxAmount/2)-(starAmount/2)); j++) 
			printf("%c", ' ');
		for (int j = 0; j < starAmount; j++) 
			printf("%c", '*');
		printf("\n");
		if (starAmount >= maxAmount)
			increase *= -1;
		starAmount += increase;
	}
	return 0;
}