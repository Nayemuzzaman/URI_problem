#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int i;
    scanf("%d",&i);

    for(int j=0;j<i;j++){
        int k;
        scanf("%d",&k);
        if(k%2==0&&k<0){
            cout<<"EVEN NEGATIVE"<<endl;
        }else if(k>0&&k%2==0){
            cout<<"EVEN POSITIVE"<<endl;
        }else if(k<=0&&k%2==-1){
            cout<<"ODD NEGATIVE"<<endl;
        }else if(k>=0&&k%2==1){
            cout<<"ODD POSITIVE"<<endl;
        }else if(k==0){
            cout<<"NULL"<<endl;
        }
    }
    return 0;

}
