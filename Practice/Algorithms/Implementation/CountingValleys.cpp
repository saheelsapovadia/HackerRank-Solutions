#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{

    int n;
    char s;
    cin>>n;

    int level=0,flag=0,m=0,v=0;

    for(int i=0; i<n; i++)
    {

        cin>>s;
        if(s=='U')
        {
            level++;
        }
        else if(s=='D')
        {
            level--;
        }
        else
            cout<<"invalid";

        if(level>0)
        {
            flag=1;
        }
        if(level<0)
        {
            flag=-1;
        }

        if(level==0)
        {
            if(flag==1)
            {
                m++;
            }
            else if(flag==-1)
            {
                v++;
            }
        }


    }
    cout<<v;
}
