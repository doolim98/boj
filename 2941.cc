#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string input;
    int cl=0;
    vector<string> ca={"c=","c-","dz=","d-","lj","nj","s=","z="};
    cin>>input;
    for(int i=0;i<input.length();i++){
        cl++;
        for(string s:ca){
            if(input.substr(i,s.length())==s){
                i+=s.length()-1;
            }
        }
    }
    cout<<cl;
    return 0;
}
