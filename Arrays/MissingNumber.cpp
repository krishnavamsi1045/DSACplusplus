#include <iostream>
#include <vector>

using namespace std;

//better solutins

void missing(vector<int> v){
    int size = v.size();
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=v[i];
    }
    int total = ((size)*(size+1))/2;
    int ans = total-sum;
    cout<<ans<<" ";
    cout<<" ";

}

int main(){

    vector<int> v ;
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
   
vector<int > comp;
for(int i=0;i<=v.size();i++){
    comp.push_back(i);
}

 for(int i=0;i<v.size()+1;i++){
        cout<<comp.at(i)<<" ";
    }
    cout<<endl;

    for(int i=0;i<comp.size();i++){
        bool flag = false;
        for(int j=0;j<comp.size();j++){
            if(comp[i]==v[j]){
                flag =true;
                break;
            }

        }
        if(flag==false){
            cout<<comp[i];
        }
    }

    missing(v);


}