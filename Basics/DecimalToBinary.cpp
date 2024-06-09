#include <iostream>
#include <cmath>

using namespace std;


int binaryToDecimal(int num){
    int i=0;
    int ans =0;
    while(num!=0){
        int bit = num%10;
        ans = ans+ pow(2,i++)*bit;
        num= num/10;

    }
    return ans;

}


int main(){
    int number =10;
    int ans= 0;
    int i=0;
    while(number!=0){
        int bit = number%2;
        ans= bit*pow(10,i++)+ans;
       
        number = number/2;
    }
    cout<<ans<<endl;
    cout<<binaryToDecimal(1010);
   

}



