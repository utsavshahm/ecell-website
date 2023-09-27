#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    int ans=1;
	    bool check=false;
	    for(int i=2;i<n;i++){
            int cnt=0;
	       
	        int c1 = s[i-2]-'0';
	        int c2= s[i-1] - '0';
	        int c3 = s[i] - '0';
	        
	        
	        if(c1 | c2 == c3){
	            cout<<"Happy"<<endl;
	            cnt++;
	        }
	        
	        if(c1 & c2 == c3){
	            cout<<"hello"<<endl;
	            cnt++;
	        }
	        
	        if(c1 ^ c2 == c3){
	            cout<<"bye"<<endl;
	            cnt++;
	        }

	        
	        if(cnt==0){
	            check=true;
	            break;
	        }
	        else{
	            ans*=cnt;
	        }
	        
	        
	    }
	    
	    if(check){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
