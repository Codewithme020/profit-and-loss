#include<iostream>
using namespace std;
int main(){
    int a ,b ,c;
    cout<<"enter 3 number to find greatest of them"<<endl;
    cin>>a;
    cout<<"emter 2nd number "<<endl;
    cin>>b;
    cout<<"enter thread number "<<endl;
    cin>>c;
    if(a>=b){
        if(a>=c){
            cout<<a<<"is greatest";
        }
        else{
            cout<<c<<" is greater";
        }
    }
    else{
        if(b>=c){
            cout<<b <<"is gratest";
        }
        else cout<<c <<"is greatest";
    }
}