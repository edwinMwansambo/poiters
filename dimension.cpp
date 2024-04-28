#include <iostream>
using namespace std;
int main() {
    int rows, cols;

    
    cout << "Enter the number of rows maximum 3: ";
    cin >> rows;

    if (rows > 3) {
        cout << "Error: Maximum number of rows allowed is 3." << endl;
        return 1;
    }

    cout << "Enter the number of columns maximum 3: ";
    cin >> cols;

    
    if (cols > 3) {
        cout << "Error: Maximum number of columns allowed is 3." << endl;
        return 1;
    }

    // Dynamically allocate a 2D 
    double **array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }


    

    cout << "Enter the values for each element of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element at [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Values of each element of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}