#include<iostream>
using namespace std;

float volume(float);  
float volume(float,float)   ;
float volume(float,float,float)   ;

float volume(float r)
{
    return (4/3*3.14*r*r*r);
};
float volume(float r1,float l)
{
    return (3.14*r1*r1*l);
};
float volume(float l1,float b,float h)
{
    return(l1*b*h);
};
inline int square(int num)
{
    return num*num;
};
inline int cube(int num)
{
    return num*num*num;
};
class student 
{
    protected:
    int roll_number;
    public:
    void get_number(int a)
    {
        roll_number=a;
    };

    void put_number(void)
    {
        cout<<"Roll No:"<<roll_number<<"\n";
    };
};


class test : virtual public student 
{
    protected : 
    float part1;float part2;
    public:
    void get_marks(float x,float y)
    {
        part1=x;
        part2=y;
    };
    void put_marks(void)
    {
        cout<<"Marks Obtained :"<<"\n"
            <<"Part 1 = "<<part1<<"\n"
            <<"Part 2 = "<<part2<<"\n";
    };
};
class sports : public virtual student
{
    protected:
    float score;
    public:
    void get_score(float s)
    {
        score=s;
    };
    void put_score(void)
    {
        cout<<"Sports wt :"<<score<<"\n\n";
    };
};
class result : public test,public sports 
{
    float total;
    public:
    void display(void);
};
void result :: display(void)
{
    total=part1+part2+score;
    put_number();
    put_marks();
    put_score();
    cout<<"Total Score :"<<total<<"\n";
}

class Base
{
    public:
    void display()
    {
        cout<<"\n Display base :";
    };
    virtual void show()
    {
        cout<<"\n show base";
    };
};
class Derived :public Base
{
    public:
    void display()
    {
        cout<<"\n Display derived ";
    };
    void show()
    {
        cout<<"\n show derived";
    }
};
int main()
{
    float sphere=volume(2.9932);
    float cylinder=volume(4.56,8.92);
    float cuboid=volume(3.43,5.89,9.87);

    cout<<"volume of sphere is :\n"<<sphere<<endl;
    cout<<"volume of cylinder is : \n"<<cylinder<<endl;
    cout<<"volume of cuboid is :\n"<<cuboid<<endl;


    result student_1;
    student_1.get_number(678);
    student_1.get_marks(30.5,25.5);
    student_1.get_score(7.0);
    student_1.display();

    cout<<"\n\n\n\n";
    cout<<"inline function"<<endl;
    int num;
    cout<<"input a number\n";
    cin>>num;
    cout<<"square of the number is "<<square(num)<<endl;
    cout<<"cube of the number is "<<cube(num)<<endl;
    cout<<"\n\n\n\n\n"<<endl;
    cout<<"manipulation of pointers\n"<<endl;

    int a=10;
    int *ptr;
    ptr=&a;
    cout<<"the value of a is :"<<*ptr<<endl;
    *ptr=*ptr+a;
    cout<<"the revised value of a is"<<a;

    cout<<"\n\n\n\n"<<endl;
    cout<<"concept of virtual functions \n\n\n";
    Base B;
    Derived D;
    Base *bptr;
    cout<<"\n bptr points to base \n";
    bptr=&B;
    bptr->display();
    bptr->show();

    cout<<"\n\n bptr points to derived\n";
    bptr=&D;
    bptr->display();
    bptr->show();

    cout<<"\n\n\n"<<endl;
    cout<<"pattern printing"<<endl;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"\t";
        };
        cout<<"\n";
    };

    return 0;
}
