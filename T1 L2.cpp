#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	//OPEN
	ofstream fout("numbers.txt");

	//CHECK

	if (!fout) 
	{
		cout << "File not found.";
		return 1;
	}

	//Taking input

	int arr[5];
	cout << "Enter numbers: ";

	for (int i = 0;i < 5;i++) 
	{
		cin >> arr[i];
	}

	//WRITE

	for (int i = 0;i < 5;i++)
	{
		fout << arr[i] << endl;
	}
	//CLOSE

	fout.close();

	cout << "Numbers saved.";


	system("pause");
	return 0;
}