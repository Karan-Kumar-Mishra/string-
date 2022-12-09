#include<iostream>
#include<algorithm>
#include<string>
#include<limits>
using namespace std;
//find word with frequency in string
int main()
{
    string s="kfhlsfdfkfhdfhf";
    char temp;
    int fre[26];
    for(int i=0; i<26; i++)
        fre[i]=0;
    for(int i=0; i<s.size(); i++)
    {
        temp=s[i];
        for(int j=i+1; j<s.size(); j++)
        {
            if(temp==s[j])
            {
                fre[j]++;
            }
        }
    }
    int mx=INT_MIN;
    for(int i=0; i<26; i++)
    {
        mx=max(fre[i],mx);
    }
    for(int i=0; i<26; i++)
    {
        if(mx==fre[i])
        {
            cout<<s[i]<<" "<<(fre[i]+1)<<endl;
            break;
        }
    }

    return 0;
}