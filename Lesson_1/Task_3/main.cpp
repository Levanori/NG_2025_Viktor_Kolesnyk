#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number of colums to create a pattern: ";
    cin >> num;
    for (int row = 1; row < num; ++row) {
        for (int col = 0; col < num; ++col) {

            int top = row;
            int left = col;
            int down = num-row;
            int right = num-col;
            int start = top;
            bool draw_stars = false;

            if (left+1 < start) {
                start = left;
            }
            if (down < start) {
                start = down;
            }
            if (right < start) {
                start = right;
            }

            if (start % 2 == 1) {
                if (row == start && col > start-2 && col < num-start+1)
                    draw_stars = true; // top side
                else if (col == num-start && row > start && row < num-start)
                    draw_stars = true; // right side
                else if (row == num-start && col > start && col < num-start+1)
                    draw_stars = true; // down side
                else if (col == start && row > start && row < num-start+1)
                    draw_stars = true; // left side
            }
            if(draw_stars) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

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
        cout << endl;
    }

    return 0;
}


