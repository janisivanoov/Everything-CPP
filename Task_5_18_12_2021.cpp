#include <iostream>

using namespace std;

int reversDigits(int num);

int main()
{
	int num;
	cout << "Enter a number to reverse:" << endl;
	cin >> num;
	cout << "Reverse of no. is " << reversDigits(num);
	getchar();
	return 0;
}

int reversDigits(int num)
{
	int rev_num = 0;
	while (num > 0) {
		rev_num = rev_num * 10 + num % 10;
		num = num / 10;
	}
	return rev_num;
}