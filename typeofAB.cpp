#include<iostream>
using namespace std;

int main()
{

       float* a,b;
       // we can modify it
      // float *a,b;  both lines are same 

    //    here type of a is float pointer and b is float variable

    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
      
        // can we initilalize a pointer with value 0;
        // yes
        int *ptr = 0;

        cout<<ptr<<endl;
    return 0;
}