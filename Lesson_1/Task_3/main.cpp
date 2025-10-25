#include <iostream>

using namespace std;

int main()
{

    int size, spaces, stars = 0;
    cout << "Enter the number of triangle rows to create a rhombus: ";
    cin >> size;

    for (int row_romb = 0; row_romb < size*2-1; ++row_romb){
        if (row_romb < size) {
            spaces = size-row_romb-1;
            stars = row_romb*2+1;
        }
        else {
            spaces = row_romb-size+1;
            stars = (size*2-1-row_romb-1)*2+1;
        }
        for (int column_romb = 0; column_romb < spaces; ++column_romb){
            cout << " ";
        }
        for (int column_romb = 0; column_romb < stars; ++column_romb){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}


