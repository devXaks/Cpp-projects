#include <iostream>
using namespace std;

int main() 
{

  int row =1;
  int column =1;
  int num ;
  cin>>num;
  while(row<=num){
    column = 1;  
    while(column<=row){
      cout<<row-column+1<<" ";
      column++;
    }
    row++;
    cout<<endl;
  }
      
  return 0;
}