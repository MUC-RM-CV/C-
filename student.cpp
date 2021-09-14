#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    void set_data(string name,int ID, char sex,int age);
    void display();

    private:
    string m_name;
    int m_ID;
    char m_sex;
    int m_age;
};
 void student::set_data(string name,int ID,char sex,int age)
{
    m_name=name;
    m_ID=ID;
    m_sex=sex;
    m_age=age;
}
void student::display()
{
    cout<<m_name<<endl;
    cout<<m_ID<<endl;
    cout<<m_sex<<endl;
    cout<<m_age<<endl;
}
int main()
{
    student s1;
    s1.set_data("yang",20011494,'m',19);
    s1.display();
    return 0;
}