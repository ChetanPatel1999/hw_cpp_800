// wap to generate student resultcard.
#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    static int totalpass;
    static int totalfail;
    static int totalstd;
    static string c_teacher;

public:
    void setstudent(string s, int a, float b)
    {
        name = s;
        rno = a;
        per = b;
        totalstd++;
    }
    void resultcard()
    {
        cout << "student result card ........" << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
        if (per >= 33)
        {
            cout << "student pass" << endl;
            totalpass++;
        }
        else
        {
            cout << "student fail" << endl;
            totalfail++;
        }
        cout << "_________________________________________________" << endl;
    }
    static void totalresult()
    {
        cout << "totalpass : " << totalpass << endl;
        cout << "totalfail : " << totalfail << endl;
        cout << "______________________________________" << endl;
    }
    static void totalstd_disp()
    {
        cout << "total student : " << totalstd << endl;
    }
    static void disp_class_teacher()
    {
        cout << "class teacher name : " << c_teacher << endl;
        cout << "____________________________________________" << endl;
    }
};
int student::totalpass = 0;
int student::totalfail = 0;
int student::totalstd = 0;
string student::c_teacher = "mohit sharma";
int main()
{
    student s1, s2, s3, s4;
    student::disp_class_teacher();
    s1.setstudent("kuber", 101, 75.78);
    s2.setstudent("vijay", 102, 89.77);
    s3.setstudent("chetan", 103, 23.88);
    s4.setstudent("vinu", 104, 33);
    s1.resultcard();
    s2.resultcard();
    s3.resultcard();
    s4.resultcard();
    student::totalresult();
    student::totalstd_disp();
    return 0;
}