#include <stdio.h>
// 0부터 100까지의 숫자 중에서 소숟ㄹ 만의 합을 구하는 프로그램을 작성한다.
int main() {
	int sum = 0;

	for (int i = 2; i <= 100; i++) {
		int count = 0;
		for (int j = 1; j <= i; j++)
			if (i % j == 0)
				count++;

	}



	return 0;
}