#include <iostream>
#include <stdlib.h>

//forward declaration for the functions
void returnMenu();
double depositMenu(double balance);
double withdrawMenu(double balance);


int main(){
    int switchSelection = 0;
    double balance = 0;

    while (1){
        std::cout << "This is a bank ATM\n" << "---------------------\n" << "please make a choice: \n" << "1. Balance \n" << "2. Deposit \n" << "3. Withdraw \n" << "4. Exit\n" << "---------------------" << std::endl;
        std::cin >> switchSelection;
        switch (switchSelection){

        //balance
        case 1:
        std::cout << "the accounts balance is: " << balance << "\n";
        returnMenu();
        break;

        //deposit
        case 2:
        balance = depositMenu(balance);
        returnMenu();
        break;

        //withdraw
        case 3:
        balance = withdrawMenu(balance);
        returnMenu();
        break;

        case 4:
        /**this return 0 will break the while (1) loop, this is done this way to not make a new int
         * or bool variable for just the while loop **/

        return 0;
        break;

        default:
        std::cout << "invalid choice" << std::endl;
        returnMenu();
        }
    }
}

void returnMenu() { 
 /**this is the function used when ever the user has complited one of the options
which don't cause the program to end**/

    int contSelection = 0;
    std::cout << "Return to menu?\n" << "1. Menu\n" << "2. Exit" << std::endl;
    std::cin >> contSelection;
        switch (contSelection){
            case 1:
            break;
            case 2:
            //using exit() here instead of return 0 due to return 0 only returning back to the main()
            exit(0);
            break;
            default:
            std::cout << "invalid option, returning to menu" << std::endl;
            }
}

double depositMenu(double balance) {
    double depositBalance = 0;
    //this will give an opinion to add to the account's balance
    std::cout << "Please insert the amount of money you will be depositing: \n";
    std::cin >> depositBalance;
    std::cout << "\n";
     /**this is here to check for negative value given, if one is given it will automatically move
     * the user to the main menu **/
    if (depositBalance < 0){
            std::cout << "deposit amount is negative.\n";
            return balance;
    }
    else {
            return balance + depositBalance;
    }
}

double withdrawMenu(double balance) {
    double withdrawBalance = 0;
    //this will give an opinion to remove from the account's balance
    std::cout << "Insert the amount of money you will be withdrawing: \n";
    std::cin >> withdrawBalance;
    std::cout << "\n";
    if (withdrawBalance < 0){ 
         //this is here to check if the given value is negative and convert it back to a positive one.
        withdrawBalance = withdrawBalance * -1;
        return balance - withdrawBalance;
    }
    else {
         return balance - withdrawBalance;
    }
}