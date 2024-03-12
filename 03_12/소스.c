#include <stdio.h>
// 0부터 100까지의 숫자 중에서 소숟ㄹ 만의 합을 구하는 프로그램을 작성한다.
int main() {
	int sum = 0;
	int num = 0;
	for (int num = 2; num <= 100; num++) {
		int count = 0;
		for (int i = 1; i <= num; i++)
			if (num % i == 0)
				count++;
		if (count == 2)
			sum += num;
		
	}
	

	printf("합:%d", sum);


	return 0;
}