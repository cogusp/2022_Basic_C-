#include <iostream>
using namespace std;

void Account(void);
void Deposit(void);
void Withdrawal(void);
void Information(void);
void Menu(void);



int main(void)
{
	Menu();

	return 0;
}

void Menu(void)
{
	int choice = 0;
	float R = true;

	while (R)
	{
		cout << "-----Menu-----" << endl;
		cout << "1. ���°���" << endl;
		cout << "2. �� ��" << endl;
		cout << "3. �� ��" << endl;
		cout << "4. �������� ��ü ���" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << "���� : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			Account();
			break;
		case 2:
			Deposit();
			break;
		case 3:
			Withdrawal();
			break;
		case 4:
			Information();
			break;
		case 5:
			cout << "-----���α׷��� �����մϴ�.-----" << endl;
			R = false;
			break;
		}
	}
}

void Account(void)
{
	cout << "\n[���°���]" << endl;
	cout << "����ID : ";
	cout << "�̸� : ";
	cout << "�Աݾ� : ";
}

void Deposit(void)
{
	cout << "\n[�Ա�]" << endl;
	cout << "����ID : ";
	cout << "�Աݾ� : ";
}

void Withdrawal(void)
{
	cout << "\n[���]" << endl;
	cout << "����ID : ";
	cout << "��ݾ� : ";
}

void Information(void)
{
	cout << "\n����ID : ";
	cout << "�� �� : ";
	cout << "�� �� : ";
}