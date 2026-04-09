//factorial concept
#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "ENTER NUMBER: ";
    cin >> n;

    int factorial = 1;   // start 1 se hota hai

    for(int i = 1; i <= n; i++){
        factorial = factorial * i;   // multiply
    }

    cout << "factorial = " << factorial << endl;
    return 0;
}
