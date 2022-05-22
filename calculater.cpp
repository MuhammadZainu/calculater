
#include <iostream>
using namespace std;


int main()
{

   float n1,n2;
	cout<<"input a 2 number";
    cin>>n1>>n2;

char p;
cout<<"type a opretaer"<<endl;
cin>>p;
switch (p)
{
case '+':
    cout<<n1+n2<<endl;
    break;
case '-':
    cout<<n1-n2<<endl;
    break;
case '*':
    cout<<n1*n2<<endl;
    break;
case '/':
    cout<<n1/n2<<endl;
    break;

default:
cout<<"type more opretaer"<<endl;
    break;
}

return 0;
}

