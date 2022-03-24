/*
다음 main 함수에서 필요로 하는 swap 함수를 오버로딩 해서 구현해보자.

[실행의 예]
30 20
Z A
5.555 1.111
*/

#include <iostream>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap(char *c, char *d)
{
	char temp = *c;
	*c = *d;
	*d = temp;
}

void swap(double *e, double *f)
{
	double temp = *e;
	*e = *f;
	*f = temp;
}

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
}