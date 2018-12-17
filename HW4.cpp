#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;


int search(vector<char>a, int* b, int location, int max);
int main(int argc, char** argv) {
	vector <char> input;
	ifstream stream1("hw4.txt");
	char a;

	while (!stream1.eof())
	{
		stream1 >> a;
		input.push_back(a);
		cout << a << endl;
	}

	sort(input.begin(), input.end());
	input.erase(input.begin());
	int wanted = 0;
	cout << "Enter Int to look for" << endl;
	cin >> wanted;

	cout << "The Sorted Input  IS  : " << endl;
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << endl;
	}



	 search(input, &wanted, 0, input.size());
	int ex;
	cin >> ex;

}

int search(vector<char>a, int* b, int location, int max) {
	int inp = *b ;
	bool first_half = false;
	int answer = 0;
	cout << "Array is : " << endl;

	for (int i = location; i <max ; i++) {
		cout << a[i] << endl;
	}
	if (  (location == max) || ( (max - location == 1) && a[max-1] != inp )) {
		cout << "This input cannot be found" << endl;
		return -1;
	}


	if (a[ location + ((max - location) / 2)] - '0' < inp) {
		first_half = true;
		cout << "User Inp is Larger than " << a[location + ((max - location) / 2)] << endl;
		location = location +( (max - location) / 2);

		cout << "Max : " << max << endl;
		cout << "Loc : " << location << endl;

		search(a, b, location, max);


	}
	if (a[location + ((max - location) / 2)] - '0' > inp) {
		if (first_half == true) {
			cout << "User Inp is Smaller than " << a[location + ((max - location) / 2)] << endl;
			max = location + ((max - location) / 2);

			cout << "Max : " << max << endl;
			cout << "Loc : " << location << endl;

			search(a, b, location, max);

		}
	}

	if (a[location + ((max - location) / 2)] - '0' == inp) {

		cout << "Max : " << max << endl;
		cout << "Loc : " << location << endl;
		answer = location + ((max - location) / 2);
		cout << "The input was found in the array at this location :: " << answer  << endl;
		return 1;
	}
	if (a[(max - location) / 2] - '0' > inp) {
		if (first_half == false) {
			cout << "User Inp is smaller than " << a[(max - location) / 2] << endl;
			max = max / 2;
			cout << "Max : " << max << endl;
			cout << "Loc : " << location << endl;
			search(a, b, location, max);
		}

	}

	if (a[(max - location) / 2] - '0' == inp) {
		cout << "Max : " << max << endl;
		cout << "Loc : " << location << endl;
		answer = (max - location) / 2;
		cout << "The input was found in the array at this location   :: " << answer << endl;
		return 1;
	}


}
