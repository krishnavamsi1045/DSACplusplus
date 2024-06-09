#include <iostream>

using namespace std;


bool ispalindrome(string &word,int i,int j){

    if(i>=j){
        return true;
    }
    

   
        if(word[i]!=word[j]){
            return false;
        }
      
     return  ispalindrome(word,i+1,j-1);

}
int main(){
    string word = "ababa";
    cout<<"this is answer"<<endl;
    cout<<ispalindrome(word,0,4);


}