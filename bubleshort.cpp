#include <iostream>

void bubleShort(int myarray[], int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (myarray[j] > myarray[j + 1]) {
				temp = myarray[j];
				myarray[j] = myarray[j + 1];
				myarray[j + 1] = temp;
			}
		}
	}
}


void printArray(int myarray[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << myarray[i] << " ";
	}
	std::cout << "\n";
}


int main() {
	int myarray[6] = {5, 4, 3, 6, 2, 7};
	int n = sizeof(myarray) / sizeof(myarray[0]);

	bubleShort(myarray, n);
	printArray(myarray, n);

	return 0;
}
