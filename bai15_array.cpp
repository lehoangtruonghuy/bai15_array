// bai15_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
  // create an array of strings
	string cars[5] = { "volvo", "BMW", "Ford", "Mazda", "Tesla" };

	// loop through strings
	for (int i = 0; i < 5; i++){
		cout << cars[i] << "\n";
	}
	return 0;
}

