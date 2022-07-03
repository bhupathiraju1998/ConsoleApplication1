// C++ program to demonstrate the use
// of return 0 and return 1 inside
// user-defined function
#include <iostream>
using namespace std;

// Utility function returning 1 or
// 0 based on given age
int checkAdultUtil(int age)
{
	if (age >= 18)
		return 1;
	else
		return 0;
}

// Function to check for age
void checkAdult(int age)
{
	// Checking on the basis
	// of given age
	if (checkAdultUtil(age))
		cout << "You are an adult\n";
	else
		cout << "You are not an adult\n";
}

// Driver Code
int main()
{
	// Given age
	int age = 25;

	// Function Call
	checkAdult(age);

	return 0;
}
