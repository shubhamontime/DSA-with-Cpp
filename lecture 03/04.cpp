//even sum from(1 to 10)
#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int evensum = 0;
     
    for(int i=0; i<=n; i++){
        if(i%2 == 0){
        evensum = evensum + i;
    }
 }
  cout << "Even sum = " << evensum << endl;
 return 0;

}
