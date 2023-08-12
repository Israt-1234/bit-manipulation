#include<bits/stdc++.h>
#define ll long long
using namespace std;
void printbinary(int num)
{
    for(int i=10; i>=0; i--)
        cout<<((num>>i)&1);
    cout<<endl;
}

void printbinary1(int num)
{
    for(int i=10; i>=0; i--)
        cout<<((num>>i)&1);
    cout<<endl;
}
int main()
{
    cout<<INT_MAX<<endl;
    int a=(1LL<<31)-1;
    cout<<a<<endl;
    unsigned int b=(1ll<<32)-1;
    cout<<b<<endl;

    //even odd
    for(int i=0; i<8; i++)
    {
        printbinary(i);
        if(i&1!=0)
            cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;

    }

//    //devide
//    int n=5;
//    cout<<(n>>1)<<endl;
//    cout<<(n<<1)<<endl;
//
//    //upper case and lower case
//    for(char c='A'; c<='E'; c++)
//    {
//
//        cout<<c<<endl;
//        printbinary1(int (c));
//    }
//    for(char c='a'; c<='e'; c++)
//    {
//        cout<<c<<endl;
//        printbinary1(int (c));
//    }
    char N='A';
    char k=(N |(1<<5));
    cout<<k<<endl;
    cout<<char(a&(~(1<<5)))<<endl;
    cout<<char(1<<5)<<endl;
    cout<<char('C'|' ')<<endl;


//upper case to lower case convet;
    char B='B';
    char L =B| ' ';
    cout<<L<<endl;

    char d='D';
    char D=(d&'_');
    cout<<D<<endl;

    //power of 2;
    int n=4;
    if(n&(n-1)!=0){
        cout<<"not power"<<endl;
    }
    else
    {
        cout<<"Power of 2"<<endl;
    }

    //swap
    int m=2,w=3;
    m=m^w;
    w=w^m;
    m=m^w;
    cout<<m<<" "<<w<<endl;
}
