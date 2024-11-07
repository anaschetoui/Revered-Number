#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber()
{
	int N;
	do
	{
		cout << "Please enter a number: ";
		cin >> N;
	} while (N < 0);

	return N;
}

void ReversedNumber(int N)
{
	int Reminder = 0;
	int N2 = 0;
	while (N > 0)
	{

		Reminder = N % 10;
		N = N / 10;
		to_string(N2 = N2 * 10 + Reminder);

		
	};
	cout <<N2;
}




int main()
{
	ReversedNumber(ReadPositiveNumber());

	return 0;
}