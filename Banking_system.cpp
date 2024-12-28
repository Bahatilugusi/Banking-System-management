#include <iostream>
#include <string>
using namespace std;

void display();
void account();
void simBanking();

struct Account
{
  double balance = 0;
  string jina;
  string password;
  int id;
};

int main()
{
  system("cls");
  display();
  return 0;
}
void display()
{
  system("cls");
  Account a;
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
      cout << "\n\t\tYour initial balance is $" << a.balance;
      break;

    case 3:
      cout << "\nEnter amount of Money to Depose: ";
      cin >> cash;
      a.balance += cash;
      cout << "\n\t Your new Balance is $" << a.balance;
      break;

    case 4:
      cout << "\nEnter amount of Money to Withdraw: ";
      cin >> cash;
      if (a.balance >= cash)
      {
        a.balance -= cash;
        cout << "\n\tYour new balance is $" << a.balance;
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

void simBanking()
{
  system("cls");
m:
  int choice;
  double amount;
  cout << "\n\n\t-------SIMBANKING--------\n";
  cout << "\n1. EirtelMoney";
  cout << "\n2. HaloPesa";
  cout << "\n3. TigoPesa";
  cout << "\n4. AzamPesa";
  cout << "\n5. Back to Main Menu";
  cout << "\n\tPlease select your choice: ";
  cin >> choice;

  switch (choice)
  {
  case 1:
    cout << "Enter Amout of Money You want to transfer: ";
    cin >> amount;
    cout << "\nTransaction of $" << amount << " to EirtelMoney is succefully.\n\n";
    break;

  case 2:
    cout << "Enter Amout of Money You want to transfer: ";
    cin >> amount;
    cout << "\nTransaction of $" << amount << " to HaloPesa is succefully.\n\n";
    break;

  case 3:
    cout << "Enter Amout of Money You want to transfer: ";
    cin >> amount;
    cout << "\nTransaction of $" << amount << " to GigoPesa is succefully.\n\n";
    break;

  case 4:
    cout << "Enter Amout of Money You want to transfer: ";
    cin >> amount;
    cout << "\nTransaction of $" << amount << " to AzamPesa is succefully.\n\n";
    break;

  case 5:
    display();
    break;

  default:
    cout << "\n\tInvalid choice!, please chouse from the Menue\n\n";
    break;
  }
  goto m;
}

void account()
{
x:
  Account a;
  system("cls");

  char choice;

  cout << "\n\t\t-----CREATE NEW ACCOUNT------\n";

  cin.ignore();
  cout << "\n Enter your name: ";
  getline(cin, a.jina);
  cout << "\nEnter your ID: ";
  cin >> a.id;
  cout << "\nEnter your Password: ";
  cin >> a.password;

  cout << a.jina << "\n\n\tyou have succeful create your account. Place \"Y\" to go to Menu: ";
  cin >> choice;
  if (choice = 'y')
  {
    display();
  }
  else
  {
    cout << "\n\n\tIvalid choice.";
  }

  goto x;
}
