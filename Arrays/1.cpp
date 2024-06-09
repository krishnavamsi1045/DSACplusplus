#include <iostream>
using namespace std;
#include <vector>

//    int a = 88;
//    cout<<a<<endl;
//    int& b= a;
//    cout<<b<<endl;

//    cout<<&b<<endl;

//    cout<<&a<<endl;

// int arr[] = {1,2,3,4,5};

// int brr[5] = {2,3,4,5,5};
// int crr[5] = {2,3};

void name(string &name){
    name= name+"krishnavamsi";
}


int main(){
string names = "sambavi";
cout<<&names;
cout<<names<<endl;

char name[100];
name[0] ='v';
cout<<name[0]<<endl;


}

