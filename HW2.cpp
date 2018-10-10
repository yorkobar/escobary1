#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void display(vector<int> &v)
{
  for(int i = 0; i<v.size(); i++)
  {
    cout << v[i];
  }
  cout << "\n" << endl;
}
int main()
{
  vector<int> num1; //(14,9); //[99999999999999]
  vector<int> num2; //(14,9); //[99999999999999]
  vector<int> result; // sum of vectors num1 and num2
  int carry;
  int n1,n2; //size holders
  string input1, input2; // user inputs
  int sum;
  cout << "please enter the first number\n";
  cin >> input1;
  for (int i = 0; i<input1.size();i++ )
  {
    string str1 = input1.substr(i,1);
    // cout << str1 << endl;
    int n = stoi(str1);
    num1.push_back(n);
  }
  cout << "please enter the second number\n";
  cin >> input2;
  for (int i = 0; i<input2.size();i++ )
  {
    string str2 = input2.substr(i,1);
    // cout << str2 << endl;
    int n = stoi(str2);
    num2.push_back(n);
  }
  // making sure that the the first vector is bigger in size than the second
  if (num1.size() < num2.size())
  {
    swap(num1,num2);
  }
  // calculating the size of the vectors
  n1 = num1.size();
  n2 = num2.size();
  // reversing both vectors
  reverse(num1.begin(),num1.end());
  reverse(num2.begin(),num2.end());
  // adding element by element
  carry = 0;
  for (int i = 0; i<n1; i++)
  {
    sum = ((num1[i]) + (num2[i]) + carry);
    result.push_back(sum%10);
    // calculating carry
    carry = sum/10;
  }
  // addition of the left over numbers of the bigger vector
  for (int i = n1; i<n2; i++)
  {
    sum = ((num2[i])+carry);
    result.push_back(sum%10);
    carry = sum/10;
  }
  // addition of the carry if the vectors are of the same size
  if (carry)
  {
    result.push_back(carry);
  }
  // reversing the result so that it displays in the correct order
  reverse(result.begin(),result.end());
  // displaying results
  cout << "size of num1: " << n1 << endl;
  cout << "size of num2: " << n2 << endl;
  // display(num1);
  // display(num2);
  cout << "the sum of the two numbers is: "<< endl;
  display(result);
return 0;
}
