#include <iostream>

using namespace std;

int main()
{
    const int num_columns = 5;
    int columns[num_columns] = {0};
    int max_row = 0;
    for (int counter = 0; counter < num_columns; ++counter) {
        cout <<"Enter the number of stars in the " << counter+1 << " column." << endl;
        cin >> columns[counter];
        if (columns[counter] > max_row)
        {
            max_row = columns[counter];
        }
    }

    for (int row = 0; row < max_row; ++row){
        for (int column = 0; column < num_columns; ++column){
            if (columns[column] > row) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
