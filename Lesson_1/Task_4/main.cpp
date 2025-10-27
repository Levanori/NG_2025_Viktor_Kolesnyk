#include <iostream>

using namespace std;

int main()
{
    int size, change_object = 0;
    cout << "Enter the size of the square and triangle: ";
    cin >> size;
    for (int row = 0; row < size*2; ++row){

        if (row < size) {
            change_object = size;
        }
        else {
            change_object = row-size+1;
        }

        if (row == size) {
            cout << endl;
        }
        for (int column = 0; column < change_object; ++column){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
