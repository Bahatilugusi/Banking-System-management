#include <iostream>
#include <string>
using namespace std;

void display();
void account();
void simBanking();

int main()
{
    display();
    return 0;
}
void display()
{
  system("cls");
  double balance = 0;
  double cash;
  int choice;

   do
  {
    cout << "\n\t  Welcome To Bank Account Mnagement System";
    cout << "\n\t******************************************";
    cout << "\n1. Open New Accout";
    cout << "\n2. Check Balance";
    cout << "\n3. Deposite Cash.";
    cout << "\n4. Withdraw Cash.";
    cout << "\n5. Sim Banking.";
    cout << "\n6. Exit.!";
    cout << "\n\tPlease select your choice: ";
    cin >> choice;

switch (choice)
    {
    case 1:
      account();
      break;
    case 2:
      cout << "\n\t\tYour initial balance is $" << balance;
      break;

    case 3:
      cout << "\nEnter amount of Money to Depose: ";
      cin >> cash;
      balance += cash;
      cout << "\n\t Your new Balance is $" << balance;
      break;

    case 4:
      cout << "\nEnter amount of Money to Withdraw: ";
      cin >> cash;
      if (balance >= cash)
      {
        balance -= cash;
        cout << "\n\tYour new balance is $" << balance;
      }
      else
      {
        cout << "\nYou do not have enough Balance";
      }
      break;

    case 5:
      simBanking();
      break;
    }
  } while (choice != 6);
}
