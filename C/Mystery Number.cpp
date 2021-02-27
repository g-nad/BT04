#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> v1d;
int main(){
    int n, num;
    cin >> n;
    v1d a, b;

    for (int i = 0 ; i < n; i++)
    {
        cin >> num;
        a.push_back(num);
    }
    for (int i = 0 ; i < n+1; i++)
    {
        cin >> num;
        b.push_back(num);
    }
    sort(a.begin(), a.begin()+a.size());
    sort(b.begin(), b.begin()+b.size());
    int mys = b[b.size()-1];
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]){
            mys = b[i];
            break;
        }
    }
    cout << mys;
    return 0;
}
