#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int first_number=0;
    int secound_number=1;
    int current;
    if(n==1){    
    }
    if(n==2){    
    }
    for(int i=3; i<=n;i++){
        current=first_number + secound_number;
        first_number=secound_number;
        secound_number=current;
    }
    cout<<current<<endl;
    
    return 0;
}
