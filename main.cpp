#include <iostream>
#include <cmath>
using namespace std;
double array[10000000];
int main() {

    float sum = 0;

#pragma acc kernels
    for(int i = 0; i < 10000000; i++){
        array[i] = sin((double)((i*2*M_PI)/10000000));
    }
#pragma acc kernels
    for (auto i : array){
        sum += i;
    }
    cout << sum;
    return 0;
}
