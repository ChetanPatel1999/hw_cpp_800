//wap to generate student resultcard.
#include<iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    public:
    void setstudent(string s,int a,float b)
    {
        name=s;
        rno=a;
        per=b;
    }
    void resultcard()
    {
        cout<<"student result card ........"<<endl;
        cout<<"student name : "<<name<<endl;
        cout<<"student rno : "<<rno<<endl;
        cout<<"student per : "<<per<<endl;
        if(per>=33)
        {
            cout<<"student pass"<<endl;
        }
        else{
            cout<<"student fail"<<endl;
        }
        cout<<"_________________________________________________"<<endl;
    }

};
int main()
{
    student s1,s2,s3,s4;
    s1.setstudent("kuber",101,75.78);
    s2.setstudent("vijay",102,89.77);
    s3.setstudent("chetan",103,23.88);
    s4.setstudent("vinu",104,33);
    s1.resultcard();
    s2.resultcard();
    s3.resultcard();
    s4.resultcard();
    return 0;
}