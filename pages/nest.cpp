#include<bits/stdc++.h>
using namespace std;
int main(){

    string s="110";
    for(int i=2;i<3;i++){
        int c1 = s[i-2]-'0';
        int c2= s[i-1] - '0';
        int c3 = s[i] - '0';

        
        if(c1 | c2 == c3){
            cout<<"Happy"<<endl;
        }

    }

}