#include <stdio.h>
// 0���� 100������ ���� �߿��� �Ҽ��� ���� ���� ���ϴ� ���α׷��� �ۼ��Ѵ�.
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