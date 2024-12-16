#include<iostream.h>
#include<conio.h>
class New
{
private:
int a,b;
public:
New(int a,int b)
{
cout<<"Constructor is called"<<endl;
cout<<"A Value:"<<a<<endl;
cout<<"B Value:"<<b;
}
~New()
{
cout<<"Destructor is called"<<endl;
cout<<"Value of A:"<<a<<endl;
cout<<"Value of B:"<<b;
}
};
void main()
{
New obj(30,40);
getch();
}