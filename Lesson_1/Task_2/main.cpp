#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*float num_1, num_2, result = 0; char action = 0;
    cout << "Enter the first number: " << endl;
    cin >> num_1;
    cout << "Enter the action you want to do: +, -, *, /, ^, sqrt(enter s)" << endl;
    cin >> action;

    if (action == 's') {
        operation_name = "square root";
        result = sqrt(num_1);
    }
    else {
        cout << "Enter the second number: " << endl;
        cin >> num_2;
        switch (action) {
        case '+':
            operation_name = "addition";
            result = num_1+num_2;
            break;
        case '-':
            operation_name = "subtraction";
            result = num_1-num_2;
            break;
        case '*':
            operation_name = "multiplication";
            result = num_1*num_2;
            break;
        case '/':
            if (num_2 == 0) {
                cout << "You can't divide by 0!" << endl;
                problem = true;
            }
            else {
                operation_name = "division";
                result = num_1/num_2;
            }
            break;
        case '^':
            operation_name = "raising a number to a power";
            result = pow(num_1, num_2);
            break;
        default:
            cout << "Something wrong!" << endl;
            problem = true;
            break;
        }
    }
    if (!problem) {
        cout << "The result of " << operation_name << " is: " << result << endl;
    } */

    float num_1, num_2 = 0; char action = 0;
    cout << "Enter the first number: " << endl;
    cin >> num_1;
    cout << "Enter the action you want to do: +, -, *, /, ^, sqrt(enter s)" << endl;
    cin >> action;

    if (action == 's') {
        cout << "Square root = " << sqrt(num_1)  << endl;
    }
    else {
        cout << "Enter the second number: " << endl;
        cin >> num_2;
        switch (action) {
        case '+':
            cout << "Addition = " << num_1+num_2  << endl;
            break;
        case '-':
            cout << "Subtraction = " << num_1-num_2  << endl;
            break;
        case '*':
            cout << "Multiplication = " << num_1*num_2  << endl;
            break;
        case '/':
            if (num_2 == 0) {
                cout << "You can't divide by 0!" << endl;
            }
            else {
                cout << "Division = " << num_1/num_2  << endl;
            }
            break;
        case '^':
            cout << "Raising a number to a power = " << pow(num_1, num_2)  << endl;
            break;
        default:
            cout << "Something wrong!" << endl;
            break;
        }
    }
    return 0;
}
