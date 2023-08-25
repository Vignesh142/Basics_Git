#include<bits/stdc++.h>
using namespace std;
char a[26];
string solve(){
    map<char,char> m;
    char x;
    for(int i=0;i<26;i++){
        cin>>x;
        a[i]=x;
    }
    set<string> m1;
    string s,s1;
    int n,f=0;
    cin>>n;
    while(n--){
        cin>>s;
        s1="";
        for(char d:s)
            s1+= a[d-'A'];
        // cout<<s<<" "<<s1<<" ";
        if(m1.find(s1)==m1.end())
            m1.insert(s1);
        else{
            f=1;
        }
    }
    return f?"YES":"NO";

}
int main(){
    int t,i=1;
    cin>>t;
    while(t--){
        cout<<"Case #"<<i<<": ";
        cout<<solve()<<endl;
        i++;
    }
}