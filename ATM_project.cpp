#include <iostream>
#include <stdlib.h>

//forward declaration for userMoney function
double userMoney(double balance);

int main(){
    double balance = 100;
    int switchSelection = 0;
    double depositBalance = 0;

    while (1){
        std::cout << "This is a bank ATM\n" << "---------------------\n" << "please make a choice: \n" << "1. Balance \n" << "2. Deposit \n" << "3. Withdraw \n" << "4. Exit\n" << "---------------------" << std::endl;
        std::cin >> switchSelection;
        switch (switchSelection){
        case 1:
        userMoney(balance);
        break;
        case 2:
        //this will give an opinion to add to the account's balance
        std::cout << "Please insert the amount of money you will be depositing: \n";
        std::cin >> depositBalance;
        std::cout << "\n";
        if (depositBalance < 0){
            std::cout << "deposit amount is negative. \nReturning to menu.\n";
        }
        else {
        balance = balance + depositBalance;
        }
        break;
        case 3:
        //this will give an opinion to remove from the account's balance
        std::cout << "withdraw" << std::endl;
        break;
        case 4:
        return 0;
        break;
        default:
        std::cout << "invalid choice" << std::endl;
        }
    }
}
double userMoney(double balance) {
    int contSelection = 0;
    //this will display the balance of the account
    std::cout << "the accounts balance is: " << balance << "\nReturn to menu?\n" << "1. Menu\n" << "2. Exit" << std::endl;
    std::cin >> contSelection;
        switch (contSelection){
            case 1:
            return balance;
            break;
            case 2:
            //using exit here because using return 0; doesn't end the program early.
            exit(0);
            break;
            default:
            std::cout << "invalid option, returning to menu" << std::endl;
            return balance;
            }
}