#include <iostream>
using namespace std;
class dog
{
  string name;  // data member
  string color; // data member
  int age;      // data member
  string bread; // data member
public:
  void setdog(string s1, string s2, int a, string s3)
  {
    name = s1;
    color = s2;
    age = a;
    bread = s3;
  }
  void display() 
  {
    cout << "dog info ..." << endl;
    cout << "dog name : " << name << endl;
    cout << "dog color : " << color << endl;
    cout << "dog age : " << age << endl;
    cout << "dog bread : " << bread << endl;
    cout << "______________________________________" << endl;
  }
};
int main()
{
  dog d1, d2, d3;
  d1.setdog("wifi", "white", 12, "lebra");
  d2.setdog("tommy", "red", 10, "lebra");
  d3.setdog("vinu", "black", 18, "booldog");
  d1.display();
  d2.display();
  d3.display();
  return 0;
}