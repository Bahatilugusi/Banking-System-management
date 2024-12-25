#include <iostream>
#include <string>
using namespace std;

void display();
void account();
void simBanking();

int main()
{
     system("cls");
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
  system("cls");

  string jina;
  string password;
  int id;
  char choice;

   cout << "\n\t\t-----CREATE NEW ACCOUNT------\n";

  cin.ignore();
  cout << "\n Enter your name: ";
  getline(cin, jina);
  cout << "\nEnter your ID: ";
  cin >> id;
  cout << "\nEnter your Password: ";
  cin >> password;

   cout << jina << "\n\n\tyou have succeful create your account. Place \"Y\" to go to Menu: ";
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
