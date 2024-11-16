#include <iostream>
using namespace std;

// First
/*
template <typename T>
void maxNum(T arr[], T size) {
	for (int i = 0; i < size; i++) {
		arr[i] = 1 + rand() % (1 - 100);
		cout << arr[i] << " ";
	}
	cout << endl;
	T maxVal = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > maxVal) {
			maxVal = arr[i];
		}
	}
	cout << "Max Number: " << maxVal << endl;
}


int main() {
	srand(time(NULL));
	int const size = 10;
	int arr[size];
	cout << "Generated Massiv: ";
	maxNum(arr, size);
}


*/

// Second
/*
template <typename T>
void maxNum(T arr[][10], int size) {
    T maxVal = 0; 
    cout << "Generated: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = 1 + rand() % 100;
            cout << arr[i][j] << "\t";   
            if (arr[i][j] > maxVal) {     
                maxVal = arr[i][j];
            }
        }
        cout << endl;
    }
    cout << "Max number: " << maxVal << endl;
}

int main() {
    srand(time(0)); 
    const int size = 10;
    int arr[size][size]; 

    maxNum(arr, size); 
    return 0;
}
*/