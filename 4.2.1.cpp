#include <iostream>
using namespace std;
class animal
{
public:
void eat()
{
cout<<"Animal eats"<<endl;
}
};
class dog:public animal
{
public:
void eat()
{
cout<<"dog eats"<<endl;
}
};
int main()
{
animal a;
dog d;
a.eat();
d.eat();
return 0;
}
