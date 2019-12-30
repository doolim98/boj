#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a,b,v;
    cin>>a>>b>>v;
    if(v==a){
        cout<<1<<endl;
    }
    else{
        cout<<(2*(v-a)-1)/(2*(a-b))+1+1<<endl;
    }
    return 0;
}
