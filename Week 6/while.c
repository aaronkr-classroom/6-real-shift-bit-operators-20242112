// while.c
#include <stdio.h>

int main(void) {
	//for문 배웠을때 sum = sum+num 했지만
	//while문 배울 때 sum = sum * num 할게요.
	int sum1 = 0; // 첫 시도
	int sum2 = 1; // 두 번째 시도
	int sum3 = 53; // 세 번째 시도
	
	int count = 1;

	while (count <= 50) {
		printf("num(%d) * count(%d) = ", sum3, count);
		sum3 = sum3 * count;
		printf("%d\n", sum3);

		count++;
	}
	printf("\nTotal: count = %d, sum = %d", count, sum3);

	getch();

	return 0;
}