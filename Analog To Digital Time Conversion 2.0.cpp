#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s;
    string str;
    cout<<"Enter Your Analog Time(hh mm ss AM/PM): ";
    cin>>h>>m>>s>>str;
    if(h>12||h<1||m>59||s>59)
    {cout<<"Invalid Value Entered\n"<<endl;}
    else
    {
        if(str=="AM")
        {
            if(h==12)
            {h=0;}
        }
        else if(str=="PM")
        {
            if(h!=12)
            {h=h+12;}
        }
        else
        {cout<<"Invalid Information Entered\n"<<endl;}
        cout<<"Your Converted Digital Time Is: ";
        if(h<10)
        {
            cout<<"0"<<h;
            if(m<10)
            {
                cout<<":0"<<m;
                if(s<10)
                {cout<<":0"<<s<<endl;}
                else
                {cout<<":"<<s<<endl;}
            }
            else
            {
                cout<<":"<<m;
                if(s<10)
                {cout<<":0"<<s<<endl;}
                else
                {cout<<":"<<s<<endl;}
            }
        }
        else
        {
            cout<<h;
            if(m<10)
            {
                cout<<":0"<<m;
                if(s<10)
                {cout<<":0"<<s<<endl;}
                else
                {cout<<":"<<s<<endl;}
            }
            else
            {
                cout<<":"<<m;
                if(s<10)
                {cout<<":0"<<s<<endl;}
                else
                {cout<<":"<<s<<endl;}
            }
        }
    }
    return 0;
}

