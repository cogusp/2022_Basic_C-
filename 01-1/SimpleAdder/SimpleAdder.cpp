#include <iostream>

int main(void)
{
	// scanf
	int val1;
	std::cout << "첫 번째 숫자 입력 : ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int result1 = val1 + val2;
	std::cout << "덧셈 결과 : " << result1 << std::endl;

	double val3;
	std::cout << "첫 번째 실수 입력 : ";
	std::cin >> val3;

	double val4;
	std::cout << "두 번째 실수 입력 : ";
	std::cin >> val4;

	double result2 = val3 + val4;
	std::cout << "덧셈 결과 : " << result2 << std::endl;

	return 0;
}