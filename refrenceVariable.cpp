#include<iostream>
using namespace std;

int main()
{
        // Refrence variable is an alternate name (alias) of already existing variable
        int a = 10;
        int &b = a;

        cout<<&a<<endl;
        cout<<&b<<endl;
        // a & b refer same location in memory 
    return 0;
}