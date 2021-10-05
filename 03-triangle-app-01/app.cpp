#include <iostream>
#include "triangle.h"
using namespace std;

void test(Triangle t, const char * prefix="Test Triangle"){
    if (t.s1 <=0 || t.s2<=0 || t.s3 <= 0){
        cout << "Invalid triangle sides" << endl;
        return;
    }
    show(t,prefix);
    cout<<"area ="<<area(t)<<endl
        <<"perimeter="<<perimeter(t)<<endl<<endl;
}

int main(int argc, char const *argv[])
{
    cout<<"sizeof(Triangle)="<<sizeof(Triangle)<<endl;

    Triangle t1={6,4,5};
    test(t1,"t1");

    Triangle t2={1,1,1};
    test(t2,"t2");

    Triangle t3 = {3,0,5};
        test(t3,"t3");
    
    return 0;
}