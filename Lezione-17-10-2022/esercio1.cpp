#include <iostream>
using namespace std;

int main () 
{
    int lunghezzaFilm;
    const int hourInSecond = 3600;
    const int firstServerBandWidth = 200;
    const int firstServerBandWidthAferHour = 50;
    const int secondServerBandWidth = 100;

    cout<<"Inserisci la lunghezza del film: ";
    cin>>lunghezzaFilm;

    if (lunghezzaFilm / firstServerBandWidth < hourInSecond){
        cout<<"Il server selezionato è il numero 1 e il tempo stimato è di: ";
        cout<<((lunghezzaFilm/firstServerBandWidth)/60)<<" minuti e "<<((lunghezzaFilm/firstServerBandWidth)%60)<<" secondi"<<endl;
    }
    else if (((lunghezzaFilm / firstServerBandWidth) + ((lunghezzaFilm - (firstServerBandWidth*hourInSecond))/firstServerBandWidthAferHour)) > (lunghezzaFilm/secondServerBandWidth)){
        cout<<"Il server selezionato è il numero 1 e il tempo stimato è di: ";
        cout<<((((lunghezzaFilm / firstServerBandWidth) + ((lunghezzaFilm - (firstServerBandWidth*hourInSecond))/firstServerBandWidthAferHour)))/60)<<" minuti e "<<((((lunghezzaFilm / firstServerBandWidth) + ((lunghezzaFilm - (firstServerBandWidth*hourInSecond))/firstServerBandWidthAferHour)))%60)<<" secondi"<<endl;
    }
    else {
        cout<<"Il server selezionato è il numero 2 e il tempo stimato è di: ";
        cout<<((lunghezzaFilm/secondServerBandWidth)/60)<<" minuti e "<<((lunghezzaFilm/secondServerBandWidth)%60)<<" secondi"<<endl;
    }

    return 0;
}