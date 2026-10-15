#include <iostream>
using namespace std;
int main(){
    int n;
    char nnn='&';
    cin >> n;
    for (int i=n; i>0; i--){
        for (int j=1; j<=(n-i);j++){
            cout << ' ';
        }
        
        for (int j=1; j<=i; j++){
            cout << nnn;
        }
        cout << endl;
    }


    return 0;
}
