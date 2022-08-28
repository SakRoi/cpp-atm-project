#include <iostream>
#include <stdlib.h>

//forward declaration for returnMenu function
void returnMenu();

int main(){
    int switchSelection = 0;
    double balance = 0;
    double depositBalance = 0;
    double withdrawBalance = 0;

    while (1){
        std::cout << "This is a bank ATM\n" << "---------------------\n" << "please make a choice: \n" << "1. Balance \n" << "2. Deposit \n" << "3. Withdraw \n" << "4. Exit\n" << "---------------------" << std::endl;
        std::cin >> switchSelection;
        switch (switchSelection){

        //balance
        case 1:
        std::cout << "the accounts balance is: " << balance;
        returnMenu();
        break;

        //deposit
        case 2:
        //this will give an opinion to add to the account's balance
        std::cout << "Please insert the amount of money you will be depositing: \n";
        std::cin >> depositBalance;
        std::cout << "\n";
        /**this is here to check for negative value given, if one is given it will automatically move
         * the user to the main menu **/
        if (depositBalance < 0){
            std::cout << "deposit amount is negative. \nReturning to menu.\n";
        }
        else {
        balance = balance + depositBalance;
        }
        break;

        //withdraw
        case 3:
        //this will give an opinion to remove from the account's balance
        std::cout << "Insert the amount of money you will be withdrawing: \n";
        std::cin >> withdrawBalance;
        std::cout << "\n";
        if (withdrawBalance < 0){ 
            //this is here to check if the given value is negative and convert it back to a positive one.
            withdrawBalance = withdrawBalance * -1;
            balance = balance - withdrawBalance;
        }
        else {
        balance = balance - withdrawBalance;
        }
        break;

        case 4:
        return 0;
        break;

        default:
        std::cout << "invalid choice" << std::endl;
        }
    }
}
void returnMenu() {
    int contSelection = 0;
    //this will display the balance of the account
    std::cout << "\nReturn to menu?\n" << "1. Menu\n" << "2. Exit" << std::endl;
    std::cin >> contSelection;
        switch (contSelection){
            case 1:
            break;
            case 2:
            //using exit here because using return 0; doesn't end the program early.
            exit(0);
            break;
            default:
            std::cout << "invalid option, returning to menu" << std::endl;
            }
}
