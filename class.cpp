#include <iostream>
#include <string>
using namespace std;
class teacher{
    private:
    int salary;
    public:
  string name;
  string dept;
  string subject;
     
   void changedept(string newdept){
       dept=newdept;
   }
   void setsalary(int s){
       salary=s;
   }
};
int main()
{
teacher t1;
getline(cin,t1.name);
getline(cin,t1.dept);
getline(cin,t1.subject);
int s;
cout<<"Enter the salary of teacher: ";
cin>>s;
t1.setsalary(s);
cout<<t1.name<<" "<<t1.dept<<" "<<t1.subject;

    return 0;
}