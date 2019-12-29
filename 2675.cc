#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int cn;
    cin>>cn;
    while(cn--){
        int r;
        string str;
        string result;
        cin>>r;
        cin>>str;
        for(char c:str){
            for(int i=0;i<r;i++)
                result+=c;
        }
        cout << result<<endl;
    }
    return 0;
}
