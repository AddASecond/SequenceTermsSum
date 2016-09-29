#include <stdio.h>

int main() {
	float x = 2, y = 1, z = 0, sum = 0;
	int n, max;
	printf("Sequence is 2/1,3/2,5/3,8/5...\n");
	printf("Please input how many times you want to input:\n");
	scanf_s("%d", &n);
	while (n>0) {
		printf("Please input how many terms you want to sum:\n");
		scanf_s("%d", &max);
		x = 2, y = 1, z = 0, sum = 0;
		for (int i = 1; i < max + 1; i++) {
			sum = sum + x / y;
			z = x + y; y = x; x = z;
		}
		printf("Sum: %.4f\n", sum);
		n--;
	}
}
