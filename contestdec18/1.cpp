#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	while(x--){
	    int seconds=0;
	    vector <int> v;
	    int y;
	    cin>>y;
        int flag2=0;
	    v.reserve(y);
	    for(int i = 0;i<y;i++){
	        int num;
	        cin>>num;
            v.push_back(num);
	        }

	   for(int j = 0;j<y-1;j++){
	    if(v[j]<v[j+1]){
	        v[j] = v[j+1];
            flag2 = 1;
            // cout<<flag2;
        
        // cout<<v[j]<<endl;
        }
        if((flag2 == 1)&&(j==y-2)){
           y=-1;
       	   flag2 = 0;
           seconds++;



        }
        else if(j==y-2){
            seconds++;
        }


    int flag = 0;
	    
	   for(int i = 0;i<y-1;i++){
        //    cout<<v[i]<<" ";

	       if(v[i]<v[i+1]){
	           flag = 1;

               break;
	       }
           
       }
  
	       if(flag == 0){
               seconds++;
	           cout<<seconds<<endl;
               break;
	       }


// cout<<endl;

}
}
return 0;

}