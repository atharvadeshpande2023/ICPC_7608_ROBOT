#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    int x=0,y=0,d=1,dist,xmax,ymax,n;
    cin>>xmax>>n;

    for(int i=0;i<n;i++)
    {
        cin>>str>>dist;
        if(str=="TURN" && dist==0)
        {
            if(d==4)
                d=1;
            else
                d++;
        }
        if(str=="TURN" && dist==1)
        {
            if(d==1)
                d=4;
            else
                d--;
        }

        if(str=="MOVE")
        {
            if(d==1)
                x=x+dist;
            else if(d==2)
                y=y+dist;
            else if(d==3)
                x=x-dist;
            else if(d==4)
                y=y-dist;
        }
        if(x<0 || y<0 || x>xmax || y>xmax)
        {
            cout<<"-1"<<endl;
            return 0;
        }

    }//ENDFOR

    cout<<x<<" "<<y<<endl;
}
