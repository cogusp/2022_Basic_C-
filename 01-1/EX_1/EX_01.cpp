/*
����ڷκ��� �� 5���� ������ �Է� �޾Ƽ�, �� ���� ����ϴ� ���α׷��� �ۼ��� ����.
��, ���α׷��� ������ ������ ���� �̷����� �Ѵ�.

1��° ���� �Է�: 1
...
5��° ���� �Է�: 5
�հ�: 15
*/

#include <iostream>

int main(void)
{
	int num, result = 0;

	for (int i = 1; i < 6; i++)
	{
		std::cout << i << "��° ���� �Է�: ";
		std::cin >> num;

		result += num;
	}

	std::cout << "�հ�: " << result;

	return 0;
}