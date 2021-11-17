#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }

    void display_rollnumber()
    {
        cout << "Your roll no is " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    int maths;
    int physics;
public:
    void set_marks(int m , int p)
    {
        maths = m;
        physics = p;
    }

    void display_marks()
    {
        cout<<"Your Maths marks are "<<maths<<endl;
        cout<<"Your Physics marks are "<<physics<<endl;    
    }
};

class Sports : virtual public Student 
{
    protected:
    int score;
    public:
    void set_sports(int s )
    {
        score = s;
    }

    void display_score()
    {
        cout<<"Your sports score is "<<score<<endl;
    }
};

class Result : public Test , public Sports
{
    private:
    int total;
    public:
    void display()
    {
        total = maths + physics + score;
        display_rollnumber();
        display_marks();
        display_score();
        cout<<"Your Total score is "<<total<<endl;

    }
};

int main()
{
    Result r;
    r.set_roll_number(42);
    r.set_marks(70 , 60);
    r.set_sports(8);
    r.display();

return 0;
}
