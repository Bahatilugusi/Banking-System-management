#include <iostream>
#include <string>
using namespace std;

void display();
void account();
void simBanking();

int main()
{

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
}