#include <stdio.h>

#define BOOL int

typedef long long quantity;

typedef int Bool;

int main(void) {
	//char ch = 'A';
	//short s = 1;
	//int i = 10;
	//long l = 100L;
	//long long ll = 1000LL;

	//float f = 3.14f;
	//double d = 2.67;

	//int i = -1;
	//unsigned int u = 100;
	//if (i < u) {
	//	printf("i is less than u\n");
	//} else {
	//	printf("i is greater than u\n");
	//}

	
	// 1.���㸡������С������
	//double d = 3.14, fraction;
	//fraction = d - (int)d;
	
	// 2. �����϶��ᷢ����ת������ߴ���Ŀɶ��ԡ�
	//float f = 3.14;
	//// ...
	//int i = (int)f;

	// 3. ������ת�����и���ȷ�ؿ��ơ�
	//int dividend = 4, divisor = 3;
	//double quotient;
	//quotient = (double)dividend / divisor;

	// 4. ���Ա������
	//long long millisPerDay = 24 * 60 * 60 * 1000;
	//long long nanosPerDay = (long long)24 * 60 * 60 * 1000 * 1000 * 1000;
	//printf("%lld\n", nanosPerDay / millisPerDay);


	int i = 3;

	// int arr[i];
	int arr[sizeof(i)];

	return 0;
}