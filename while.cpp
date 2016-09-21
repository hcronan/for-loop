#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count;
	cout << "How many numbers do you want to enter? \n";
	cin >> count;
	int total = 0;
	
	for ( int x = 0; x < count; ++x){
		cout << "Enter the next number: \n";
		int next_number;
		cin >> next_number;
		total = total + next_number;
		}
		cout << total/count;

}


