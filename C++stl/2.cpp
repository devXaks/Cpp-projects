#include <iostream>
#include <vector>


using namespace std; 

int main(){
    vector <int> v;    
    // cout<<v.capacity(); 

    //Not quite. v.size gives you the number of elements currently in the vector, while v.capacity tells you how much space has been allocated for the vector in memory. This means capacity is typically larger than or equal to size. Think of it as the number of people at a party vs. how much room you have to host them.
    v.push_back(1);
    // cout<<endl<<"Capaity is --> "<<v.capacity(); 
    v.push_back(2);
    // cout<<endl<<"Capaity is --> "<<v.capacity(); 
    v.push_back(3);
    // cout<<endl<<"Capaity is --> "<<v.capacity(); 
    // cout<<endl<<"Size is --> "<<v.size(); 
    // cout<<endl<<"front of v is --> "<<v.front();
    // cout<<endl<<"back of v is --> "<<v.back();

    for(int i:v){
        cout<<endl<<i<<" ";
    }


        v.erase(v.begin(),v.begin()+1);

        for(int j:v){
        cout<<endl<<j<<" ";
    }    
        




    return 0;

}