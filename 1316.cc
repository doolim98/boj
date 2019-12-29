#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int cn=0;
    int mn;
    cin>>cn;
    mn=cn;
    while(cn--){
        vector<bool> is_used('z'-'a'+1,false);
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(!is_used[str[i]-'a']){
                is_used[str[i]-'a']=true;
                while(str[i]==str[i+1]){
                    i++;
                }
            }
            else{
                mn--;
                break;
            }
        }
    }
    cout<<mn<<endl;
    return 0;
}
