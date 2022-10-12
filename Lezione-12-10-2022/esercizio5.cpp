#include<iostream>
using namespace std;

int main () 
{

    int a, b;

    cout<<"Inserisci i due numeri: ";
    cin>>a>>b;

    cout<<"Il massimo tra "<<a<<" e "<<b<<" è: ";

    if (a<b){
        cout<<b<<endl;
    }
    else if (a==b){
        cout<<"I due numeri sono uguali"<<endl;
    }
    else {
        cout<<a<<endl;
    }

    return 0;
}