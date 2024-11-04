#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout << "Enter your grade." << endl;
	cin >> grade;

	if (100 >= grade && grade>= 85)
		cout << "Takdir" << endl;
	else if (85 > grade && grade>= 70)
		cout << "Tesekkur" << endl;
	else if (70 > grade && grade>= 50)
		cout << "Gecer" << endl;
	else if (0 < grade && grade< 50)
		cout << "Sinifta Kaldi" << endl;
	else
		cout << "Please enter a grade between 0 and 100."; 

}
	