// multilavel inheritance example
#include <iostream>
using namespace std;
class student
{
    int rno;
    string name;

public:
    void set_roll_name(int a, string s)
    {
        rno = a;
        name = s;
    }
    void disp_roll_name()
    {
        cout << "name of student :" << name << endl;
        cout << "rno of student :" << rno << endl;
    }
};
class marks : public student
{
public:
    int hindi;
    int english;
    void set_marks(int a, int b)
    {
        hindi = a;
        english = b;
    }
    void disp_marks()
    {
        cout << "Hindi :" << hindi << endl;
        cout << "english :" << english << endl;
    }
};
class result : public marks
{
    float per;

public:
    void total_result()
    {
        per = (hindi + english) / 2.0;
        cout << "percentage : " << per << endl;
    }
};
int main()
{
    result s1;
    s1.set_roll_name(101,"ram");
    s1.set_marks(50,45);
    s1.disp_roll_name();
    s1.disp_marks();
    s1.total_result();
    return 0;
}