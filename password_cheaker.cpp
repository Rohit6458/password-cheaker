#include<iostream>
#include<string>
using namespace std;
int main()
{
    bool a=true;
    bool b=true;
    bool c=true;
    int sum=0;
    bool d=false;
    string s="h123";
    for(int i=0;i<s.length();i++)
    {
        if(sum==3)
        {
            d=true;
            break;
        }
        if(s[i]>='A' && s[i]<='Z' && a==true)
        {
            sum ++;
            a=false;
        }
        else if('a'<=s[i] && s[i]<='z' && b==true)
        {
            sum ++;
            b=false;
        }
        else if('0'<=s[i] && s[i]<='9' && c==true)
        {
            sum ++;
            c=false;
        }
    }
    if(d)
    {
         cout<<"Yes valid";
    }
    else{
         cout<<"Not Valid";
    }
}