/*
Troy Smith
IT-312-J4007
2022.04.10
6-2 Debugging Assignment: Method Overloading
*/

/*ERROR Resolutions
1. There is no header file named "stdafx.h".  Remove this
2. This library is not needed.  Remove it.
3. Mismatch of variable type here.  Variable c is float, while a is int.  Should be variable b instead.
4. Again incorrect variables referenced here.  They should be c and d instead of a and b.
5. Missing sum return statement here.
*/

// Overloading.cpp : This code contains five errors before it will work as desired.  Find those errors, 
// document a description of the errors and their fix, and fix them.  Try using the debugger to 
// step through the program to find the bugs.  As you step through, take notice of the information
// you can see.  
//

// 1. There is no header file named "stdafx.h".  Remove this
//#include "stdafx.h"

// 2. This library is not needed.  Remove it.
//#include <cstdlib>
#include <iostream>
#include<cstdlib>

using namespace std;

int add(int, int);
double add(double, double);

int main()
	{
	int a, b, x;
	double c, d, y;

	cout << "Enter two integers\n";
	cin >> a >> b;

	// 3. Mismatch of variable type here.  Variable c is float, while a is int.  Should be variable b instead.
	x = add(a, b);
	cout << "Sum of integers: " << x << endl;

	cout << "Enter two doubles\n";
	cin >> c >> d;
	// 4. Again incorrect variables referenced here.  They should be c and d instead of a and b. 
	y = add(c, d);
	cout << "Sum of doubles: " << y << endl;
	return 0;
	}
	int add(int a, int b) {
		int sum;
		sum = a + b;
		// 5. Missing sum return statement here.
		return sum;
	}
	double add(double a, double b) {
		double sum;
		sum = a + b;
	return sum;
}
