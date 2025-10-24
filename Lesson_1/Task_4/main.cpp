#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Enter the size of the square and triangle: ";
    cin >> size;
    for (int row_square = 0; row_square < size; ++row_square){
        cout << "\n";
        for (int column_square = 0; column_square < size; ++column_square){
            cout << "*";
        }
    }

    cout << "\n";
    for (int row_triangle = 0; row_triangle < size; ++row_triangle){
        cout << "\n";
        for (int column_triangle = 0; column_triangle < row_triangle+1; ++column_triangle){
            cout << "*";
        }
    }
    cout << "\n";
    return 0;
}
