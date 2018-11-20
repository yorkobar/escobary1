// designing a bubble sorter
#include<iostream>
#include<vector>
#include<stdio.h>
#include<string>
using namespace std;
void swap(int * x, int * y)// code by address
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
void display(vector<int> set, int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << set[i];
  }
  cout << "\n" << endl;
}
void bubbleSort( vector<int> set, int n)
{
  bool swapped;
  int i, j;
  for (int i = 0; i < n-1; i++)
  {
    swapped = false;
    for (int j = 0; j<(n-i-1); j++);
      {
        if (set[j]>set[j+1])
          {
            swap(&set[j],&set[j+1]);
            swapped = true;
          }
      }
      if (swapped == false)
        {
          break;
        }
    }
  }
int main(int argc, char* argv[])
{
  vector<int> set;
  for(int i = 1; i<argc; i++)
    {
      cout << argv[i] << endl;
    }
  for (int i = 1; i<argc; i++ )
    {
      string str1 = argv[i];
      int num = stoi(str1);
      set.push_back(num);
    }
  cout << "set size: " << set.size() << endl;
  cout << "number of bits per int: "<< sizeof(set[0]) << endl;
  int n = (sizeof(set)/ sizeof(set[0]));
  cout << "n value: " << n << endl;
  cout << "size of set: " << sizeof(set) << endl;
  cout << "sorted array" << endl;
  bubbleSort(set,n);
  display(set,n);
  return 0;
}
  // int input[11];
  // int x = 0, output;
  // ifstream textfile;
  // textfile.open("numbers.txt");
  // // checking to see if the file opens
  // if (textfile.fail())
  // {
  //   cerr << "Error opening file." << endl;
  //   exit(1);
  // }
  // while(! textfile.eof())
  // {
  //   textfile >> input[x];
  //   cout << input[x] << endl;
  //     if (input[x]<input[x+1])
  //     {
  //       swap(input[x],input[x+1]);
  //       output++;
  //     }
  //   x++;
  // }
  // textfile.close();
  // cout << output << endl;
