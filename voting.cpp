#include <iostream>
using namespace std;

int main()
{
    int age;
    char name;
    cout<<"Enter the age of the person :";
    cin>>age;
    cout<<"Enter the name of the person:";
    cin>>name;
    if(age>=18)
    {
        cout<<"the person is eligible";
    }
    else
    {
        cout<<"the person is not eligible";
    }
return 0;
}
