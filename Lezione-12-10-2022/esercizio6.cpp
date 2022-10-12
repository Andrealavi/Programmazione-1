#include<iostream>
using namespace std;

int main () 
{

    const int A = 0, B = 100;

    int x;

    cout<<"Inserisci un numero: ";
    cin>>x;

    if (!(A < x && B > x)){
        cout<<"Il numero non è compreso tra "<<A<<" e "<<B<<endl;
    }
    else {
        cout<<"Il numero  è compreso tra "<<A<<" e "<<B<<endl;
    }

    return 0;
}