#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int a,b;
    cin>>n;
    b=(2*n)%5;
    a=(n-3*b)/5;
    if(a<0){
        cout<<-1<<endl;
    }
    else{
        cout<<a+b<<endl;
    }
    return 0;
}
