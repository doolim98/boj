#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long f(int n){
    if(n==0)
        return 0;
    return 3*n*n-3*n+1;
}

int main(){
    int n;
    int x=1;
    cin>>n;
    while(!(f(x-1)<n&&n<=f(x))){
        x++;
    }
    cout<<x<<endl;
    return 0;
}
