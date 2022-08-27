#include <iostream>

int main(){
    double balance = 0;
    int selection = 0;
    int exitStatus = 1;

    while (exitStatus == 1){
        std::cout << "This is a bank\n" << "---------------------\n" << "please make a choice: \n" << "1. Balance \n" << "2. Deposit \n" << "3. Withdraw \n" << "4. Exit" << "---------------------\n" << std::endl;
       //the exitstatus below is for ending the loop, will move it to exit option after it's the time for that.
        exitStatus = 0;
    }
}