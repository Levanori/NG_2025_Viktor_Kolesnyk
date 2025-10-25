#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    float num_1, num_2, result = 0; char action = 0;
    bool problem = false; string operation_name = " ";
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
            operation_name = "the subtraction";
            result = num_1-num_2;
            break;
        case '*':
            operation_name = "the multiplication";
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
    }
    return 0;
}
