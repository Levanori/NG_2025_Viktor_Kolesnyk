#include <iostream>

using namespace std;

int main()
{
    const int accounts_num = 10;
    float account[accounts_num] = {0};
    int chose, num_acc = 0;
    float money_operation = 0;
    do {
        cout <<"The menu for working with your account" << endl;
        cout <<"1. Add or withdraw money from an account" << endl;
        cout <<"2. Find out the money in all accounts" << endl;
        cout <<"3. Exit" << endl;
        cin >> chose;
        switch(chose)
        {
        case 1:
            char operation;
            cout << "Enter the number of your account:" << endl;
            cin >> num_acc;
            if (num_acc <= 0 || num_acc > 10) {
                cout << "Invalid account number!" << endl;
                break;
            }
            cout << "Enter how much money you want to add or withdraw" << endl;
            cin >> money_operation;
            cout << "Chose your operation(+,-)" << endl;
            cin >> operation;

            switch(operation)
            {
            case '+':
                account[num_acc-1] += money_operation;
                break;
            case '-':
                if (account[num_acc-1] >= money_operation) {
                    account[num_acc-1] -= money_operation;
                }
                else {
                    cout << "You don't have enough money!" << endl;
                }
                break;
            }
            break;
        case 2:
            float all_money = 0;
            for (int counter = 0; counter < accounts_num; ++counter) {
                all_money += account[counter];
                cout << "Account " << counter+1 << ": " << account[counter] << endl;
            }
            cout << "Total: " << all_money << endl;
            break;
        }
    } while (chose !=3);

    return 0;
}
