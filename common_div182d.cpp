// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     int n1=s1.length(),n2=s2.length(),t;
//     if(n1>n2){
//         string temp;
//         temp=s1;
//         s1=s2;
//         s2=temp;
//         t=n1;
//         n1=n2;
//         n2=t;
//     }
//     int j=0;
//     for(int i=1;i<n1;i++){
//         if(s1[j]==s1[i]){
//             ++j;
//         }else{
//             j=0;
//             if(s1[j]==s1[i]){
//                 ++j;
//             }
//         }
//     }
//     int x=n1-j,c;
//     if(j%x==0)
//         c=j/x+1;
//     else{
//         c=1;
//         x=n1;
//     }
//     // cout<<j<<" "<<x<<" "<<c;
//     map<string,bool> m;
//     string sx=s1.substr(0,x),sf="";
//     sf+=sx;
//     m[s1]=true;
//     for(int y=1;y<=c/2;y++){
//         if(c%y==0)
//             m[sf]=true;
//         sf+=sx;
//         // cout<<sf<<" ";
//     }
//     // for(auto it=m.begin();it!=m.end();it++){
//     //     cout<<it->first<<" ";
//     // }
//     j=0;
//     for(int i=1;i<n2;i++){
//         if(s2[j]==s2[i]){
//             ++j;
//         }else{
//             j=0;
//             if(s2[j]==s2[i]){
//                 ++j;
//             }
//         }
//     }
//     x=n2-j;
//     if(j%x==0)
//         c=j/x+1;
//     else{
//         c=1;
//         x=n2;
//     }
//     // cout<<j<<" "<<x<<" "<<c;
//     int res=0;
//     int nt=x;
//     sf="";
//     sx=s2.substr(0,x);
//     sf+=sx;
//     for(int y=1;nt<=n1 && y<=c/2;y++){
//         if(c%y==0 && m.find(sf)!=m.end())
//             res+=1;
//         sf+=sx;
//         nt+=x;
//         // cout<<sf<<"1 ";
//     }
//     if(s1==s2)
//         res+=1;
//     cout<<res;
// }
#include <bits/stdc++.h>
using namespace std;
int issub(string s11,string t,string s){
    while(t.length()<=s.length()){
        if(t==s)
            return 1;
        t+=s11;
    }
    return 0;
}
int main()
{
    string s1,s2,temp;
    cin>>s1>>s2;

    int n=s1.length();
    int m=s2.length();

    if(m>n){
        temp=s2;
        s2=s1;
        s1=temp;
        n=n+m;
        m=n-m;
        n=n-m;
    }
    for(int k=0;k<m;k++){
        if(s1[k]!=s2[k]){
            cout<<0;
            return 0;
        }
    }
    vector<int> v;
    for(int i=1;(i*2)<=m;i++){
        if(n%i==0 && m%i==0)
            v.push_back(i);
    }
    if(n%m==0)
        v.push_back(m);
    int count=0;
    for(int i=0;i<v.size();i++){
        if(issub(s2.substr(0,v[i]),s2.substr(0,v[i]),s1) && issub(s2.substr(0,v[i]),s2.substr(0,v[i]),s2))
            count++;
    }
    cout<<count;
    return 0;
}
