#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,chuvi;
    cin>>a>>b>>c;
    chuvi = (a +b +c)/2;
    if(chuvi > a && chuvi > b && chuvi > c) cout<<fixed<<setprecision(2)<<sqrt(chuvi*(chuvi-a)*(chuvi-b)*(chuvi-c));
    else cout <<"invalid";
}

