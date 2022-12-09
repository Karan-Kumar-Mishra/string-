#include<iostream>
#include<algorithm>
using namespace std;
//string 2 
int main()
{
    string  s1="abc";
    cout<<"s1-> "<<s1<<endl;
    s1.clear();
    cout<<"s1.clear()-> "<<s1<<endl;
    if(s1.empty())
    {
        cout<<"string is empty"<<endl;
    }
    string s2="nincompoop";
    cout<<"s2-> "<<s2<<endl;
    s2.erase(3,3);
    cout<<"s2.erase(3,3)-> "<<s2<<endl;
    cout<<s2.find("com")<<endl;
    s2.insert(2,"lol");
    cout<<"after insert ->"<<s2<<endl;
    cout<<"s2.size()-> "<<s2.size()<<endl;
    cout<<"s2.lenght()-> "<<s2.length()<<endl;
    string s3="karan kumar mishar";
    for(int i=0; i<s3.length(); i++)
        cout<<s3[i]<<endl;
    string s4=s3.substr(12,6);
    cout<<"s3.substr(12,6)-> "<<s4<<endl;
    string s5="786";
    int x=stoi(s5);
    cout<<"x=stoi(s5)-> "<<x+2<<endl;
    int x2=786;
    cout<<"to_string(x2)-> "<<to_string(x2)+"2"<<endl;
    return 0;
}