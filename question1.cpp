#include<iostream>
using namespace std;

int main()
{

       int x;
       int *ptr; // wild pointer uninitilized pointer
       x = 7;
       ptr = &x;
       cout<<*ptr<<endl;//7 here * is not pointer * is deference operator
       cout<<ptr<<endl; // 0x61ff08
        
    return 0;
}