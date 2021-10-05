#include <iostream>
#include <math.h>

double comp_pwr(double val, double exp=2) {
    return pow(val,exp);
}

void dude (int a, int b, int c=10) {
    std::cout << a <<" "<<b<<" "<<c;
}
int main () {
    //std::cout << "with 2 and 3: " << comp_pwr(2,3)<<std::endl;
    //std::cout << "with just 2: " << comp_pwr(2)<< std::endl;
    std::cout << "calling dude\n";
    dude(1,2,3);
    return 0;

}