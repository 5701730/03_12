#include <stdio.h>
// 0���� 100������ ���� �߿��� �Ҽ��� ���� ���� ���ϴ� ���α׷��� �ۼ��Ѵ�.
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
	

	printf("��:%d", sum);


	return 0;
}