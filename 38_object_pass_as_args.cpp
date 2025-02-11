#include <iostream>
using namespace std;
class student
{
    int rno;
    int marks;

public:
    void setdata(int a, int b)
    {
        rno = a;
        marks = b;
    }
    void display()
    {
        cout << "student detail....." << endl;
        cout << "rno : " << rno << endl;
        cout << "marks : " << marks << endl;
    }
    void average2(student obj)
    {
        float av;
        av = (marks + obj.marks) / 2.0;
        cout << "average of " << rno << " and " << obj.rno << " = " << av << endl;
    }
    void average3(student obj1, student obj2)
    {
        float av;
        av = (marks + obj1.marks + obj2.marks) / 3.0;
        cout << "average of " << rno << " and " << obj1.rno << " and " << obj2.rno << " = " << av << endl;
    }
    void greater_marks(student obj)
    {
        if (marks > obj.marks)
        {
            cout << "student " << rno << " have greater marks" << endl;
        }
        else
        {
            cout << "student " << obj.rno << " have greater marks" << endl;
        }
    }
};
int main()
{
    student s1, s2, s3;
    s1.setdata(101, 90);
    s2.setdata(102, 70);
    s3.setdata(103, 34);
    s1.display();
    s2.display();
    s3.display();
    s1.average2(s2);
    s1.average2(s3);
    s2.average2(s3);
    s1.average3(s2, s3);
    s1.greater_marks(s2);
    return 0;
}