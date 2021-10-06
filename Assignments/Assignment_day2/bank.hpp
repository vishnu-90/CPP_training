#pragma once
#include <string>
using namespace std;
class customer {

    
    string first_name;
    string last_name;
    int account_number;
    double balance;
    double interest_rate;
    string password;
    
    bool authenticate_user (const string & user_input) const {
        return user_input == password;
    }

    // Validate the input for the deposit amount.
    bool validate_input(const double & amount) const {
        return amount > 0;
    }

    // Validate the input for the withdrawl amount.
    bool validate_input(const double & amount, const double & balance) const {
        return amount > 0 && amount < balance;
    }

    bool change_first_name (const string &s) {
        this->first_name = s;
        return true;
    }

    bool validate_interest_rate(const int &i) {
        return (i > 0 && i < 10);
    }

    void get_customer_details ();
    void set_defaults();
    void greet_customer();
    int get_interest_rate();
    
    

    public:
        int deposit (double amount);
    
        double withdraw(double amount, const string user_given_password);
    
        int credit_interest();
    
        void show_account_details (string user_given_password);

        void change_name();
        bool change_password(const string old_password, const string new_password);

        customer ()  {
        get_customer_details();
        set_defaults();
        greet_customer();
        
        }
        bool change_interest_rate();


};

