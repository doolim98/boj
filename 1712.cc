#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a,b,c;
    int bep;
    cin>>a>>b>>c;
    if(b>=c)
        bep=-1;
    else{
        bep=a/(c-b)+1;
    }
    cout<<bep<<endl;
    return 0;
}
