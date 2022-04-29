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
		cout << "1. 계좌개설" << endl;
		cout << "2. 입 금" << endl;
		cout << "3. 출 금" << endl;
		cout << "4. 계좌정보 전체 출력" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << "선택 : ";
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
			cout << "-----프로그램을 종료합니다.-----" << endl;
			R = false;
			break;
		}
	}
}

void Account(void)
{
	cout << "\n[계좌개설]" << endl;
	cout << "계좌ID : ";
	cout << "이름 : ";
	cout << "입금액 : ";
}

void Deposit(void)
{
	cout << "\n[입금]" << endl;
	cout << "계좌ID : ";
	cout << "입금액 : ";
}

void Withdrawal(void)
{
	cout << "\n[출금]" << endl;
	cout << "계좌ID : ";
	cout << "출금액 : ";
}

void Information(void)
{
	cout << "\n계좌ID : ";
	cout << "이 름 : ";
	cout << "잔 액 : ";
}