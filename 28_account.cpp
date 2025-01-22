#include <iostream>
using namespace std;
class account
{
    string holder_name;
    string account_no;
    int belence;
    static int total_belence;
    static int total_account;
    static string bank_name;

public:
    void create_account(string s1, string s2, int b)
    {
        holder_name = s1;
        account_no = s2;
        belence = b;
        total_belence = total_belence + belence;
        total_account++;
    }
    void account_display()
    {
        cout << "account info : " << endl;
        cout << "holder name : " << holder_name << endl;
        cout << "account number  : " << account_no << endl;
        cout << "belence  : " << belence << endl;
    }
    static void total_belence_display()
    {
        cout << "total bank belence : " << total_belence << endl;
    }
    static void total_account_display()
    {
        cout << "total account in bank : " << total_account << endl;
    }
    static void bank_name_display()
    {
        cout << "banke name : " << bank_name << endl;
    }
    void credit(int ammount)
    {
        belence = belence + ammount;
        total_belence = total_belence + ammount;
        cout << "credit " << ammount << " ammount in " << holder_name << " account succesfully" << endl;
    }
    void debite(int ammount)
    {
        if (ammount > belence)
        {
            cout << "not sufficient bank belence of " << holder_name << endl;
        }
        else
        {
            belence = belence - ammount;
            total_belence = total_belence - ammount;
            cout << "debite " << ammount << " ammount in " << holder_name << " account succesfully" << endl;
            cout << "remaining belenece : " << belence << endl;
        }
    }
};
int account::total_belence = 0;
int account::total_account = 0;
string account::bank_name = "SBI";
int main()
{
    account ac1, ac2, ac3;
    ac1.create_account("kuber", "1212", 5000);
    ac2.create_account("lakshya", "1213", 2000);
    ac3.create_account("vijay", "1214", 10000);
    account::bank_name_display();
    cout << "_____________________________________" << endl;
    ac1.account_display();
    cout << "_____________________________________" << endl;
    ac2.account_display();
    cout << "_____________________________________" << endl;
    ac3.account_display();
    cout << "______________________________________" << endl;
    account::total_belence_display();
    cout << "______________________________________" << endl;
    account::total_account_display();
    cout << "_____________________________________" << endl;
    ac2.debite(1000);
    cout << "_____________________________________" << endl;
    ac1.credit(500);
    cout << "_____________________________________" << endl;
    account::bank_name_display();
    cout << "_____________________________________" << endl;
    ac1.account_display();
    cout << "_____________________________________" << endl;
    ac2.account_display();
    cout << "_____________________________________" << endl;
    ac3.account_display();
    cout << "______________________________________" << endl;
    account::total_belence_display();
    cout << "______________________________________" << endl;
    account::total_account_display();
    return 0;
}