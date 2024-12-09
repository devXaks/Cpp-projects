#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.get();

    string s[100];

    bool compare(string a,string b){
        return a.length()>b.length()
    }
    
    for(int i = 0;i<n;i++){
        getline(cin,s[i],compare);
    }
    sort(s,s+n);
    for(int j = 0;j<n;j++){
        cout<<s[j]<<endl;
    }


    return 0;
}