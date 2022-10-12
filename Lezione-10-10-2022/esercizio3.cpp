#include <iostream>
using namespace std;

int main()
{
    int i, j, temp;

    cout<<"Inserisci il primo numero: ";
    cin>>i;
    cout<<"Inserisci il primo numero: ";
    cin>>j;

    cout<<i<<" "<<j<<endl;

    temp = i;
    i = j;
    j = temp;

    cout<<i<<" "<<j<<endl;

    return 0;
}