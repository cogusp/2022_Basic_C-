#include <iostream>

int main(void)
{
	// scanf
	int val1;
	std::cout << "ù ��° ���� �Է� : ";
	std::cin >> val1;

	int val2;
	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> val2;

	int result1 = val1 + val2;
	std::cout << "���� ��� : " << result1 << std::endl;

	double val3;
	std::cout << "ù ��° �Ǽ� �Է� : ";
	std::cin >> val3;

	double val4;
	std::cout << "�� ��° �Ǽ� �Է� : ";
	std::cin >> val4;

	double result2 = val3 + val4;
	std::cout << "���� ��� : " << result2 << std::endl;

	return 0;
}