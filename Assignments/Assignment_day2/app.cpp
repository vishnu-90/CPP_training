#include "bank.hpp"

int main() {

    customer c1; 
    c1.show_account_details("randomly_generated_password");
    c1.deposit(100);
    
    c1.show_account_details("randomly_generated_password");
    c1.withdraw(50,"randomly_generated_password");
    c1.show_account_details("randomly_generated_password");
    c1.change_password("randomly_generated_password","new_user_generated_password");
    c1.deposit(200);
    c1.show_account_details("new_user_generated_password");

    return 0;
}
