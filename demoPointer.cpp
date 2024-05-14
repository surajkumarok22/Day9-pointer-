#include<iostream>
using namespace std;

int main()
{

        int a = 10;
        int *ptr = &a;
        cout<<"*ptr =&a = "<<ptr<<endl;
        cout<<"*(&a) = "<<*(&a); // 0x61ff08
        
    return 0;
}