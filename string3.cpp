#include<iostream>
#include<algorithm>
using namespace std;
//string 3
int main()
{
    string s1="jdkfshisduhsdlifj";
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]=s1[i]-32;
    }
    cout<<"uppercase : "<<s1<<endl;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
            s1[i]=s1[i]+32;
    }
    cout<<"lowercase : "<<s1<<endl;
    string s2="wieutyqwetguy";
    transform(s2.begin(),s2.end(),s2.begin(),::toupper);
    cout<<s2<<endl;
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<s2<<endl;
    string s3="76576576465";
    sort(s3.begin(),s3.end(), greater<int>());
    cout<<s3<<endl;

    return 0;
}