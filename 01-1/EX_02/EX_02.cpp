/*
���α׷� ����ڷκ��� �̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է� �޾Ƽ�,
�Է� ���� �����͸� �״�� ����ϴ� ���α׷��� �ۼ��غ���.
*/

#include <iostream>

int main(void)
{
	char name[50];
	char num[50];

	std::cout << "�̸��� �Է��ϼ���: ";
	std::cin >> name;

	std::cout << "��ȭ��ȣ�� �Է��ϼ���: ";
	std::cin >> num;

	std::cout << "�̸�: " << name << std::endl;
	std::cout << "��ȭ��ȣ: " << num << std::endl;

	return 0;
}