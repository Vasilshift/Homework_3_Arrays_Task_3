#include <iostream>
#include <ctime>
#include <random>
#include <time.h>
using namespace std;

int main() {

	srand(time(NULL));

	const int n = 5;

	int array[n];
	int i, k = 0;
	
	// Enter array

	for (i = 0; i < n; i++) {

		//array[i] = rand() % n;

		cin >> array[i];
		//cout << array[i] << " ";
	}

	// ----------- Sum of negative elements ----------------------------

	for (i = 0; i < n; i++) {

		if (array[i] < 0) { 
			k = k + array[i]; 
		}
	}
	
	cout << endl;
	cout << "Sum of negative elements = " << k << endl;

	// ------------ End of sum of negative elements ---------------------------


	//----------- Calculate multiplication of elements from MIN to MAX------------------

		//first step find min and max element
	
	int max = array[0];
	int min = array[0];
	
	for (i = 0; i < n; i++) {

		if (array[i] > max) {

			max = array[i];
		}

		if (array[i] < min) {

			min = array[i];
		}

	}
		
	cout << " " << endl;
	cout << "max= " << max << endl;
	cout << "min= " << min << endl;

		//multiplication of elements

	int mult = 1;
	
	for (int i = 0; i < n; i++) {

		mult = mult * array[i];

	}
	
	cout << endl;
	cout << "Multiplication of elements from MIN to MAX = " << mult << endl;

	//-------------- End multiplication of negative elements ------------------
	
	//----------- Multiplication of elements with even numbers ----------------

	int g = 1;
	i = 0;

	for (i = 0; i < n; i++) {

		if ((array[i] % 2) == 0) {

			g = g * array[i];

		}

	}

	cout << "Multiplication of elements with even numbers = " << g << endl;

	//----------- END multiplication of elements with even numbers ----------------

	//---------- Sum elements between first and last negative element -------------

	int q1, q2;

	for (i = 0; i < n; i++) {

		if (array[i] < 0) {
			break;
		}

	}

	q1 = array[i];  // first negative element
	int n1 = i;  // n1 - position of first negative element

	cout << "First negative element in array = " << q1 << endl;
	
	i = 0;

	for (i = 0; i < n; i++) {

		if (array[i] < 0) {

			q2 = array[i]; // last negative element
		}

	}

	int n2 = i; //  r - position of last negative element
	int sum = 0;

	cout << "Last negative element in array = " << q2 << endl;
	
	for (i = n1; i < n2; i++) {

		sum = sum + array[i];
	}

	cout << "Sum elements between first and last negative element: " << sum << endl;





	//---------- END Sum elements between first and last negative element -------------

	system("pause");
	return 0;
}