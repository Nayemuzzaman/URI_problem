#include<iostream>
#include<stdio.h>
#include <iomanip>

/**
* Problem No: URI Online Judge Problem 1094
* Solution in C++ language
* Author: Nayemuzzaman
**/



using namespace std;

int main(){
    int n,v;
    char ch;
    int res=0,c=0,r=0,s=0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>v;
        cin>>ch;

        res +=v;

        if(ch == 'C') c += v;
        if(ch == 'S') s += v;
        if(ch == 'R') r += v;

    }
    cout<<"Total: "<<res<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<c<<endl;
    cout<<"Total de ratos: "<<r<<endl;
    cout<<"Total de sapos: "<<s<<endl;


    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<((float)c/(float)res)*100.00<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de ratos: "<<((float)r/(float)res)*100.00<<" %"<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de sapos: "<<((float)s/(float)res)*100.00<<" %"<<endl;


    return 0;
}
