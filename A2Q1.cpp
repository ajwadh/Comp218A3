// -----------------------------------------------------
// Assignment: 2
// Question: 1
// File name: A2Q1.cpp
// Written by: Ajwad Hossain
// For Comp 218 Section EC/Fall 2019
// -----------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main()

{
	//Title
	cout << "***********************************************\n"
		<< "       Welcome to Calculator Program!\n"
		<< "***********************************************\n\n\n";
	while (1)

	{
		cout << "Please enter an expression without any spaces (enter exit to quit): ";

		string string; cin >> string;
		if (string == "exit") { break; } int ind = -1;
		char op;
		for (int i = 0; i < string.size(); i++)

		{
		//Search and store the operation value
			if (string[i] == '*' || string[i] == '+' || string[i] == '-' || string[i] == '/')
			{
				ind = i; op = string[i]; break;
			}
		}

		//find first operation value
		int value1 = stoi(string.substr(0, ind + 1)); 

		//find second operation value
		int value2 = stoi(string.substr(ind + 1, string.length() - ind + 1));

		{
		//Check the operation symbol
		//Depending on its result, do the correct operation
			if (op == '+') {							
				cout << value1 + value2 << endl;
			}
			else if (op == '-') {
				cout << value1 - value2 << endl;
			}
			else if (op == '/') {
				cout << value1 / value2 << endl;
			}
			else if (op == '*') {
				cout << value1 * value2 << endl;
			}
		//Farewell message
		} cout << "Thank you for using my calculator! Welcome to come back!\n";

	}
}