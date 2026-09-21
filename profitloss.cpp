#include <iostream>
using namespace std;
int main(){
    cout<<"enter selling price";
    float sp;
    cin>>sp;
    cout<<"enter cost price";
    float cp;
    cin>>cp;
    if(sp==cp)cout<<"no profit no loss";
    else if (sp>cp)
    {
        cout<<"profit of"<<sp-cp;
        cout<<endl;
    }
    else{
        cout<<"loss of"<<cp-sp<<endl;
        
    }
}