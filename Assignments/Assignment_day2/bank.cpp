#include <iostream>

#include "bank.hpp"

int customer::deposit (double amount) {
    if (validate_input(amount)) {
        this->balance += amount;
            return 0;
    }
    return -1;
}

double customer::withdraw(double amount, const string user_given_password) {
    if (authenticate_user(user_given_password)) {
        if (validate_input(amount, this->balance)) {
            this->balance -= amount;
            return amount;
        }
    } 
    return -1;
}

int customer::credit_interest () {
    this->balance += (this->balance* this->interest_rate/1200);
    return 0;
}

void customer::show_account_details (string user_given_password) {
    if (authenticate_user(user_given_password)) {
        cout << "******************************************" << endl
             << "Customer name :" << this->first_name << " " << this->last_name << endl
             << "Account number :" << this->account_number << endl
             << "Balance :" << this->balance << endl
             << "Interest rate :" << this->interest_rate << endl
             << "******************************************" << endl;
    }
}

void customer::change_name() {
    //TODO: Validate that the input string does not contain numbers.
    string new_first_name;
    cout << "Enter the new first name" << endl;
    cin >> new_first_name;
    // TODO check that the new_first_name does not contain numbers.
    if(change_first_name(new_first_name)) 
    {
        cout << "Successfully changed the user name to " << new_first_name << endl;
    } else {
        cout << "Failed to change the username to" << new_first_name << endl;
    }
}

void customer::get_customer_details() {
    // TODO : validate the user name 
    string first_name, last_name;
    cout << "Enter the First Name" << endl;
    cin >> first_name;
    cout << "Enter the Last Name" << endl;
    cin >> last_name;
    this->first_name = first_name;
    this->last_name = last_name;

}

void customer::set_defaults () {
    this->password = "randomly_generated_password";
    this->balance = 0;
    this->interest_rate = 6.5;
    this->account_number = rand();
}

void customer::greet_customer(){
    cout << "Welcome " << this->first_name << " "<< this->last_name << " " << endl;
}

bool customer::change_password (const string old_password, const string new_password) {
    if(authenticate_user(old_password)) {
        this->password = new_password;
        //cout << " Successfully changed the password" << endl;
        return 0;
    } else {
        //cout << " Failed to change the password" << endl;
        return -1;
    }
    // TODO: Communicate the result of the password change to the user.
}

int get_interest_rate() {
    int i;
    cout << "Enter the new interest rate "<< endl;
    // TODO:Validate that this is numeric.
    cin >> i;
    return i;
    
}
bool customer::change_interest_rate() {
    int new_interest_rate=0;
    new_interest_rate = get_interest_rate();
    if(validate_interest_rate(new_interest_rate)) {
        this->interest_rate -= (new_interest_rate/100) *this->interest_rate;
    }

    }