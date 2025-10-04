#include <iostream>
using namespace std;
class student
{
protected:
    int rollnumber;
    public:
    void set_rollnumber(int r)
    {
        rollnumber = r;
    }
    void get_rollnumber()
    {
        cout << "your rollnumber is " << rollnumber << endl;
    }
};
class test : virtual public student
{
protected:
    int maths;
    int physics;
    public:
    void setnumber(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void getnumber()
    {
        cout << "marks in maths are " << maths << endl;
        cout << "marks in physics are " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void setscore(int a)
    {
        score = a;
    }
    void getscore()
    {
        cout << "Your sports score is " << score << endl;
    }
};
class result : public sports, public test
{
    public:
    void percentage()
    {
        get_rollnumber();
        getnumber();
        getscore();
        cout << "your percentage is " << (maths + physics + score)/ 3 <<"%"<< endl;
    }

};
int main()
{
    result gargi;
    gargi.set_rollnumber(3);
    gargi.setnumber(88, 94);
    gargi.setscore(55);
    gargi.percentage();
    return 0;
}