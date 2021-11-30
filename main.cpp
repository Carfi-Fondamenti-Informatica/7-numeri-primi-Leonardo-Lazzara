#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n==1){
        cout << "numero non primo" << endl;
    } else if (numeri_primi(n, n/2)){
        cout << "numero primo" << endl;
    }else{
        cout << "numero non primo" << endl;
    }
    return 0;
}
