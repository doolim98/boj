#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string input;
    int result=0;
    cin>>input;
    for(char c:input){
        int index=0;
        if(c<='O'){
            index=(c-'A')/3+2;
        }
        else if('P'<=c&&c<='S'){
            index=7;
        }
        else if('T'<=c&&c<='V'){
            index=8;
        }
        else if('W'<=c){
            index=9;
        }
        result+=index+1;
    }
    cout<<result<<endl;
    return 0;
}
