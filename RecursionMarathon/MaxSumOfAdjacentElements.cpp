#include <iostream>
using namespace std;


int maxAmout(int arr[],int idx){
    if(idx >=5){
        return 0;
    }

    int option1 = arr[0]+maxAmout(arr,idx+2);
    int option2 = maxAmout(arr,idx+1);

    return max(option1,option2);
}

int main(){
    int arr[] = {2,7,9,3,1};
    
    cout<<maxAmout(arr,0)<<endl;
}