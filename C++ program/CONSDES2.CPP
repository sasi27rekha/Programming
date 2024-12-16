#include<iostream.h>
#include<conio.h>
class Student
{
private:
int regno,mark;
public:
Student()
{
cout<<"Default Constructor Calling"<<endl;
}
Student(int r,int m)
{
cout<<"Parameter Constructor Calling"<<endl;
regno=r;
mark= m;
}
Student(Student&c)
{
cout<<"Copy Constructor Calling"<<endl;
regno=c.regno;
mark=c.mark;
}
void dis()
{
cout<<"Reg no:"<<regno<<endl;
cout<<"Mark:"<<mark<<endl;
}
~Student()
{
cout<<"Destructor Calling"<<endl;
}
};
void main()
{
clrscr();
Student d;
Student p(101,400);
Student co(p);
co.dis();
getch();
}