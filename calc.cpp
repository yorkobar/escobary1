#include <iostream>
using namespace std;
int main()
{
  int num1;
  int num2;
  int sum;
  int o;

  cout << "what would you like to do? \n";
  cout << "press 1 for addition\n";
  cout << "press 2 for subtraction\n";
  cout << "press 3 for multiplication\n";
  cout << "press 4 for division\n";
  cin >> o;

  cout << "please enter a number \n";
  cin >> num1;
  cout << "pleas enter second number\n";
  cin >> num2;

  if (o==1)
  {
    sum = num1 + num2;
    cout << "the sum of the two numbers is" << sum << endl;
  }
  else if (o==2)
  {
    sum = num1 - num2;
    cout << "the difference of the two numbers is" << sum << endl;
  }
  else if (o==3)
  {
    sum = num1 * num2;
    cout << "the product of the two numbers is" << sum << endl;
  }
  else if (num2==0 && o==4)
  {
    sum = num1 + num2;
    cout << "can not divide by zero\n";
  }
  else if (num2!=0 && o==4)
  {
    sum = num1 / num2;
    cout << "the quotient of the two numbers is" << sum << endl;
  }
return 0;
}
