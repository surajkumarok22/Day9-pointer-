#include<iostream>
using namespace std;

int main()
{

       int a =32;
       int *ptr = &a;

       char ch = 'A';
       char &cho = ch;

       cout<<cho<<endl;

       cho += a;
           cout<<cho<<endl;
       *ptr += ch;

       cout<<a<<", "<<ch<<endl;
        
    return 0;
}