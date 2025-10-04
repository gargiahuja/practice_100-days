#include<iostream>
using namespace std;
class student
{
    protected:
    int rollnumber;
    public:
    void set_rollnumber(int);
    int get_rollnumber();
};
void student::set_rollnumber(int a)
{
    rollnumber=a;
}
int student::get_rollnumber()
{
    cout<<"rollnumber of the student is "<<rollnumber<<endl;
}
class exam:public student
{
    protected:
    int maths;
    int physics;
    public:
    void setmarks(int m1,int m2)
    {
        maths=m1;
        physics=m2;
    }
    void getmarks()
    {
        cout<<"your marks in maths are "<<maths<<endl;
        cout<<"your marks in physics are "<<physics<<endl;
    }
};
class result:public exam
{
    int percentage;
    //percentage=(maths+physics)/2;
    public:
    void display()
    {
        get_rollnumber();
        getmarks();
        cout<<"your percentage is "<<(maths+physics)/2<<"%\n";
    }
};
int main()
{
    result gargi,vidhi,khushish;
    gargi.set_rollnumber(1);
    gargi.setmarks(58,94);
    gargi.display();
    return 0;
}