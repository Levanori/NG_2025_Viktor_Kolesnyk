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

    if (action != 's') {
        cout << "Enter the second number: " << endl;
        cin >> num_2;
    }

    cout << "Result: ";

    switch (action) {
    case '+':
        cout << num_1+num_2  << endl;
        break;
    case '-':
        cout << num_1-num_2  << endl;
        break;
    case '*':
        cout << num_1*num_2  << endl;
        break;
    case '/':
        if (num_2 == 0) {
            cout << "You can't divide by 0!" << endl;
        }
        else {
            cout << num_1/num_2  << endl;
        }
        break;
    case '^':
        cout << pow(num_1, num_2)  << endl;
        break;
    case 's':
        cout << sqrt(num_1)  << endl;
        break;
    default:
        cout << "Something wrong!" << endl;
        break;
    }
    return 0;
}
