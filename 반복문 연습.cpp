#include <stdio.h>

int main(void) {
	
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}


	for (int i = 2; i < 10; i++) {
		printf("%d x 1 = %d\n", i, i*1);
		printf("%d x 2 = %d\n", i, i*2);
		printf("%d x 3 = %d\n", i, i*3);
		printf("%d x 4 = %d\n", i, i*4);
		printf("%d x 5 = %d\n", i, i*5);
		printf("%d x 6 = %d\n", i, i*6);
		printf("%d x 7 = %d\n", i, i*7);
		printf("%d x 8 = %d\n", i, i*8);
		printf("%d x 9 = %d\n", i, i*9);
	}

	printf("2 x 1 = 2\n");
	printf("2 x 2 = 4\n");
	printf("2 x 3 = 6\n");
	printf("2 x 4 = 8\n");
	printf("2 x 5 = 10\n");
	printf("2 x 6 = 12\n");
	printf("2 x 7 = 14\n");
	printf("2 x 8 = 16\n");
	printf("2 x 9 = 18\n");

	printf("3 x 1 = 3\n");
	printf("3 x 2 = 6\n");
	printf("3 x 3 = 9\n");
	printf("3 x 4 = 12\n");
	printf("3 x 5 = 15\n");
	printf("3 x 6 = 18\n");
	printf("3 x 7 = 21\n");
	printf("3 x 8 = 24\n");
	printf("3 x 9 = 27\n");

	printf("4 x 1 = 4\n");
	printf("4 x 2 = 8\n");
	printf("4 x 3 = 12\n");
	printf("4 x 4 = 16\n");
	printf("4 x 5 = 20\n");
	printf("4 x 6 = 24\n");
	printf("4 x 7 = 28\n");
	printf("4 x 8 = 32\n");
	printf("4 x 9 = 36\n");

	return 0;
}