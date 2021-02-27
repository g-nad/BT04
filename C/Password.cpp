#include <iostream>
using namespace std;
bool check(string pass, int size){
    for (int i = 0, j = pass.size()-1; i < j; i++,j--){
        if (pass[i] != pass[j]) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    while (n--){
        string pass;
        cin >> pass;
        if (check(pass, pass.size())) {
            cout << pass.size() <<endl << pass[pass.size()/2+1];
        }
    }
    return 0;
}