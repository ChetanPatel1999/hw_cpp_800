#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void set_emp(int a, float b)
    {
        id = a;
        sal = b;
    }
    void display()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};
class prgm : public emp
{
    string lang;
    string project;

public:
    void set_prgm(string s1, string s2)
    {
        lang = s1;
        project = s2;
    }
    void disp_prgm()
    {
        cout << "langauge : " << lang << endl;
        cout << "project : " << project << endl;
    }
};
int main()
{
    emp e1;
    e1.set_emp(101, 3000.50);
    e1.display();
    cout << "-----------------------------------" << endl;
    prgm p1, p2, p3;
    p1.set_emp(102, 40000);
    p1.set_prgm("java", "e-comerce");
    p1.display();
    p1.disp_prgm();
    return 0;
}