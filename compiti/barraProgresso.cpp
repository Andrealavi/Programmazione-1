#include <iostream>
using namespace std;

int main ()
{

    int perc, barLength, percInBar;

    cout<<"Inserire la percentuale e la lunghezza della barra: ";
    cin>>perc>>barLength;

    if (barLength > 60) {
        barLength = 60;
    }

    percInBar = (perc * barLength) / 100;

    cout<<" ";

    for (int i = 0; i<barLength; i++){
        cout<<"-";
    }

    cout<<" \n|";

    for (int i = 0; i<barLength; i++){
        if (i <= percInBar - 1){
            cout<<"X";
        }
        else{
            cout<<" ";
        }
    }

    cout<<"|\n ";

    for (int i = 0; i<barLength; i++){
        cout<<"-";
    }

    cout<<endl;

    return 0;
}