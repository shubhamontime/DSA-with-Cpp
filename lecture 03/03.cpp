//odd sum(1 to 10)
#include <iostream>
using namespace std;

int main(){
  int n = 10;
  int oddsum = 0;

  for (int i = 0; i <= n; i++){
    if(i % 2 != 0){
      oddsum = oddsum + i;
    }
  }
  
  cout << "ODDSUM = "<< oddsum << endl;
    return 0;
}
