#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long int n = 10000000;
    double sum = 0;
    double *array = (double*)malloc(n*sizeof(double));
#pragma acc kernel
    for(int i = 0; i < n; i++){
        array[i] = sin((double)i);
    }

#pragma acc kernel
    for (int i = 0; i < n; i++){
        sum += i;
    }


    cout << sum;
    return 0;
}
