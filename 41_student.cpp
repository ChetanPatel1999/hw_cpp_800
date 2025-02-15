#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    string mob;

public:
    void set_std(string s1, int a, string s2)
    {
        name = s1;
        rno = a;
        mob = s2;
    }
    void std_disp()
    {
        cout << "student info : " << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student mobile no: " << mob << endl;
    }
};

class mathstd : public student
{
    int math;
    int pysics;
    int chemestry;

public:
    void setmath_marks(int a, int b, int c)
    {
        math = a;
        pysics = b;
        chemestry = c;
    }
    void mathmarks_disp()
    {
        cout << "math stream marks :" << endl;
        cout << "math : " << math << endl;
        cout << "pysics : " << pysics << endl;
        cout << "chemestry : " << chemestry << endl;
    }
};
class comstd : public student
{
    int account;
    int ip;
    int bussiness;

public:
    void set_commarks(int a, int b, int c)
    {
        account = a;
        ip = b;
        bussiness = c;
    }
    void commarks_disp()
    {
        cout << "com stream marks :" << endl;
        cout << "account : " << account << endl;
        cout << "ip : " << ip << endl;
        cout << "bussiness : " << bussiness << endl;
    }
};
int main()
{
    mathstd s1;
    s1.set_std("ram", 101, "2628568228");
    s1.setmath_marks(56, 78, 90);
    s1.std_disp();
    s1.mathmarks_disp();
    cout << "___________________________________" << endl;
    comstd s2;
    s2.set_std("shyam", 102, "43723495732");
    s2.set_commarks(44, 66, 88);
    s2.std_disp();
    s2.commarks_disp();
    return 0;
}