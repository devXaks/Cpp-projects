#include <iostream>
#include <string>
using namespace std;

int main(){
    string(s1) = "Akshat";
    cout<<s1<<endl;

    char s2[] = {'a','k','s'};
    cout<<s2<<endl;
    string s3;
    cout<<s3<<endl;
    cout<<s3.empty()<<endl;
    s3.append("I am akshat");
    cout<<s3<<endl;
    string s4 = "Apple";
    string s5 = "Mango";
    cout<<s4.compare(s5)<<endl;
    return 0;

}