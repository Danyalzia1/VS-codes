#include <iostream>
#include <conio.h>

using namespace std;

void main() {

	int array[3][3] = {12,221,442,83,47,53,65,799,218};
	int i, j;
	for (i = 0; i <= 3; i++) {

		for (j = 0; j <= 3; j++) {
			cout << "array[" << i << "][" << j << "]"<<endl;
			cout << array[i][j]<<endl;

		}

	}
	_getch();
}