//sum of number who divisible by 3(1 to 10)
#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int divisibleby3 = 0;


for(int i = 1;i <= n; i++){
    if(i%3 == 0){
        divisibleby3 +=i;
    }
}
cout <<"Divisible by 3 = " << divisibleby3 <<endl;
return 0;
}
