#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n = 10000000;
    float array[n];
    for(int i = 0; i < n; i++){
        array[i] = sin(i);
    }
    float sum = 0;
    for (auto i : array){
        sum += i;
    }
    cout << sum;
    return 0;
}
