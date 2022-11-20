#include<iostream>
#include<queue>
using namespace std;
//string1
int main()
{
    string s1="kar";

    string s2="an";

    cout<<"s1 ->"<<s1<<endl;

    cout<<"s2 ->"<<s2<<endl;

    s1.append(s2);

    cout<<"s1- >"<<s1<<endl;

    cout<<"s1+ s2 ->"<<s1+s2<<endl;

    cout<<"s1[2] ->"<<s1[2]<<endl;

    cout<<"s1.clear() ->"<<s1<<endl;

    cout<<"s2.compare(s1) ->"<<s2.compare(s1)<<endl;

    if(s1.compare(s2)==0)
    {
        cout<<"string are equal "<<endl;
    }


    return 0;
}