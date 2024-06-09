#include <iostream>
using namespace std;
#include <deque>

int main(){
    deque<int> d;
    d.push_back(20);
    d.push_front(10);

    cout<<d.front();
    cout<<d.back();
    
}