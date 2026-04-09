//odd sum by while loop(1 to 10)
#include <iostream>
using namespace std;

int main(){
  int n = 10;
  int oddsum = 0;

  int i = 0;   // initialization

  while(i <= n){   // condition
    if(i % 2 != 0){
      oddsum = oddsum + i;
    }
    i++;   // increment (bahut important)
  }

  cout << "ODDSUM = " << oddsum << endl;
  return 0;
}
