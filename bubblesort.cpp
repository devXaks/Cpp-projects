#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x;
    cin>>x;
    vector <int> v;
    while (x>0)
    {
        v.push_back(x);
        cin>>x;
        
    }
    cout<<"Initial Array : ";
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;
    int temp;
    for(int i = 0;i<v.size();i++){
        for(int j =0;j<v.size()-i-1;j++){
            if(v[j]<v[j+1]){
                temp = v[j+1];
                v[j+1] = v[j];
                v[j] = temp;
            }
        }
    }
    cout<<endl<<"Final Array : ";
    for(int a:v){
        cout<<a<<" ";
    }
    
}
