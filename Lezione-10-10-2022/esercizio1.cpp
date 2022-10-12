#include<iostream>
using namespace std;

int main()
{
    int a, b;
    
    cout<<"Inserisci un valore intero: ";
    cin>>a;
    cout<<"Inserisci un valore intero: ";
    cin>>b;

    cout<<a<<"/"<<b<<" = "<<a/b<<" con resto "<<a % b<<endl;

    return 0;
}