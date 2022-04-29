/*
Banking System Ver 0.1
작성자 : 윤성우
내 용 : OOP 단계별 프로젝트의 기본 틀 구성
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 30;

void ShowMenu(void);		// Print the Menu
void MakeAccount(void);		// Function for Opening an Account
void DepositMoney(void);	// Deposit
void WithdrawalMoney(void);	// Withdrawal
void ShowAllAccInfo(void);	// Balance Inquiry

enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct
{
	int accID;				// Account
	int balance;			// Balance
	char cusName[NAME_LEN];	// Customer Name
} Account;

Account accArr[100];	// Array for Saving Account
int accNum = 0;			// Number of Saved Accounts

int main(void)
{
	int choice;

	while (1)
	{
		ShowMenu();

		cout << "선택 : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawalMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	
	return 0;
}

void ShowMenu(void)
{
	cout << "-----MENU-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount(void)
{
	int id;
	int balance;
	char name[NAME_LEN];

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : ";	cin >> id;
	cout << "이  름 : ";	cin >> name;
	cout << "입금액 : ";	cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney(void)
{
	int money;
	int id;
	
	cout << "[입   금]" << endl;
	cout << "계좌ID : ";	cin >> id;
	cout << "입금액 : ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "입금완료" << endl << endl;
			return;
		}
	}

	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void WithdrawalMoney(void)
{
	int money;
	int id;

	cout << "[출   금]" << endl;
	cout << "계좌ID : ";	cin >> id;
	cout << "출금액 : ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}

			accArr[i].balance -= money;
			cout << "출금완료" << endl << endl;
			return;
		}
	}

	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "계좌ID : " << accArr[i].accID << endl;
		cout << "이  름 : " << accArr[i].cusName << endl;
		cout << "잔  액 : " << accArr[i].balance << endl << endl;
	}
}