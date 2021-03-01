#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> v1d;
int main(){
    //v2d sieve(10, v1d(10,0));
    v1d v(100, 1);
    v[0] = 0; v[1] = 0;
    for (int i = 2; i < 10; i++){
        for (int j = 2, n; j <= 100/i;j++){
            n = i * j;
            v[n] = 0;
        }
    }
    for (int i = 0; i < 100; i++){
        if (v[i] == 1) cout << i << " ";
    }
    return 0;
}