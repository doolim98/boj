#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string input;
    bool is_first_word=true;
    int result=0;
    getline(cin,input);
    for(char c:input){
        if(c!=' '&&is_first_word){
            is_first_word=false;
            result++;
        }
        else if(c==' ')
            is_first_word=true;
    }
    cout<<result<<endl;
    return 0;
}
