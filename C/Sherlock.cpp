#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> v1d;
bool check(v1d v, int size){
    int sum_left = 0, sum_right = 0;
    for (int u = 0; u < size; u++){
        for (int i = 0; i < u; i++){
            sum_left += v[i];
        }
        for (int j = u; j <size; j++)
            sum_right += v[j];
        if (sum_left == sum_right) return true;
        sum_right = 0;
        sum_left = 0;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    while (n--){
        int size, num;
        cin >> size;
        v1d v;
        while(size--){
            cin >> num;
            v.push_back(num);
        }
        if (check(v, v.size())){
            cout << "YES" << endl;
        }else cout << " NO" << endl;
    }
    return 0;
}