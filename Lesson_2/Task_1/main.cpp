#include <iostream>

using namespace std;

int main()
{
    const int accounts_num = 10;
    float account[accounts_num] = {0};
    int chose, num_acc = 0;
    float money_operation, all_money = 0;
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
                cout << "Added " << money_operation << " to the account " << num_acc << endl;
                break;
            case '-':
                if (account[num_acc-1] >= money_operation){
                    account[num_acc-1] -= money_operation;
                    cout << "Withdraw " << money_operation << " from the account " << num_acc << endl;
                }
                else {
                    cout << "You can't take more than you have!" << endl;
                }
                break;
            default:
                cout << "You can enter only + or -!" << endl;
                break;
            }
            break;
        case 2:
            all_money = 0;
            for (int counter = 0; counter < accounts_num; ++counter) {
                all_money += account[counter];
                cout << "Account " << counter+1 << ": " << account[counter] << endl;
            }
            cout << "Total: " << all_money << endl;
            break;
        case 3:
            cout << "Closing the program" << endl;
            break;
        default:
            cout << "Something wrong!" << endl;
            break;
        }
    } while (chose !=3);

    return 0;
}
