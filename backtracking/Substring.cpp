    #include <iostream>
    using namespace std;

    void print(string word,string ans,int idx){

        if(idx==word.length()){
            cout<<ans;
            return;
        }
        print(word,ans,idx+1);
        
        print(word,ans+word[idx],idx+1);

    }



    int main(){
        string word ="abc";
        string ans ="";
        print(word,ans,0);
    }