/*
���ڸ� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷��� �ۼ��� ����.
���� �� ����ڰ� 5�� �Է��Ѵٸ� �����ܿ��� 5���� ����ؾ� �Ѵ�.
*/

#include <iostream>

int main(void)
{
	int num;

	std::cout << "���ڸ� �Է��ϼ���: ";
	std::cin >> num;

	for (int i = 1; i < 10; i++)
		std::cout << num << " * " << i << " = " << num * i << std::endl;

	return 0;
}