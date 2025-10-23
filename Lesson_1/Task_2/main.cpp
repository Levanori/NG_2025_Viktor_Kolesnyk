#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num_1, num_2 = 0; char action = 0;
    cout << "Enter the first number: " << endl;
    cin >> num_1;
    cout << "Enter the action you want to do: +, -, *, /, ^, sqrt(enter s)" << endl;
    cin >> action;
    if (action == 's') {
        cout << "The result of square root is: " << sqrt(num_1) << endl;
        return 0;
    }
    else {
        cout << "Enter the second number: " << endl;
        cin >> num_2;
        switch (action) {
        case '+':
            cout << "The result of addition is: " << num_1+num_2 << endl;
            break;
        case '-':
            cout << "The result of the subtraction is: " << num_1-num_2 << endl;
            break;
        case '*':
            cout << "The result of the multiplication is: " << num_1*num_2 << endl;
            break;
        case '/':
            if (num_2 == 0) {
                cout << "You can't divide by 0!" << endl;
            }
            else {
                cout << "The result of division is: " << num_1/num_2 << endl;
            }
            break;
        case '^':
            cout << "The result of raising a number to a power is: " << pow(num_1, num_2) << endl;
            break;
        default:
            cout << "Something wrong!" << endl;
            break;
        }
    }
    return 0;
}
