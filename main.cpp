#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long int n = 10000000;
    float *array = (float*)malloc(n*sizeof(float));
    for(int i = 0; i < n; i++){
        array[i] = sin(i);
    }
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum += i;
    }
    cout << sum;
    return 0;
}
