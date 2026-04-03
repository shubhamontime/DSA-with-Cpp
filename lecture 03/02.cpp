//if-else uppercase lowercase
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter Character";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z'){
        cout << "Uppercase\n";
    }else{
        cout << "Lowercase\n";
    }
    return 0;
}
