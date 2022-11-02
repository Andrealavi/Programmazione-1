#include <iostream>
using namespace std;

int main () 
{
    int scelta, numAnelli = 0, posizioneAnelloRame1 = -1, posizioneAnelloRame2 = -1;

    do {

        cout<<"1 \t Inserisci anello R o F"<<endl;
        cout<<"2 \t Elimina anello"<<endl;
        cout<<"3 \t Stampa catena anelli"<<endl;
        cout<<"4 \t Termina programma"<<endl;

        cout<<"\nScegliere che tipo di operazione eseguire: ";
        cin>>scelta;

        switch (scelta)
        {
        case 1:
            {
                int posizione, tipoAnello;

                cout<<"Inserire il tipo di anello che si desidera inserire (1 Ferro, 2 Rame): ";
                cin>>tipoAnello;

                cout<<"Digitare la posizione in cui va inserito l'anello nella catena: ";
                cin>>posizione;

                if (posizione < 0 || posizione > numAnelli + 1 || (tipoAnello == 2 && (posizioneAnelloRame1 != -1 && posizioneAnelloRame2 != -1))) {
                    cout<<"Non è possibile aggiungere l'anello"<<endl;
                    break;
                }

                numAnelli++;
                if (tipoAnello == 2 && (posizioneAnelloRame1 == -1 || posizioneAnelloRame2 == -1)) {
                    if (posizioneAnelloRame1 == -1) {
                        posizioneAnelloRame1 = posizione;
                    }
                    else if (posizioneAnelloRame1 != -1 && posizioneAnelloRame1 >= posizione) {
                        posizioneAnelloRame2 = posizione;
                        posizioneAnelloRame1++;
                    }
                    else if (posizioneAnelloRame1 != -1 && posizioneAnelloRame1 <= posizione){
                        posizioneAnelloRame2 = posizione;
                    }
                }

                cout<<posizioneAnelloRame1<<" ";
                cout<<posizioneAnelloRame2;

                if (tipoAnello == 1 && posizione <= posizioneAnelloRame1 && posizione <= posizioneAnelloRame2){
                    posizioneAnelloRame1++;
                    posizioneAnelloRame2++;
                }
                if (tipoAnello == 1 && posizione <= posizioneAnelloRame1 && posizione > posizioneAnelloRame2){
                    posizioneAnelloRame1++;
                }
                if (tipoAnello == 1 && posizione <= posizioneAnelloRame2 && posizione > posizioneAnelloRame1){
                    posizioneAnelloRame2++;
                }
                cout<<"\n"<<endl;

                break;
            }
        case 2:
            {
                int posizione;

                cout<<"Digitare la posizione in cui va eliminato l'anello nella catena: ";
                cin>>posizione;

                if (posizione < 0 || posizione > numAnelli) {
                    cout<<"Non è possibile rimuovere l'anello alla posizione selezionata"<<endl;
                    break;
                }

                if (posizione == posizioneAnelloRame1){
                    posizioneAnelloRame1 = -1;
                }
                else if (posizione == posizioneAnelloRame2){
                    posizioneAnelloRame2 = -1;
                }

                numAnelli--;

                cout<<"\n"<<endl;
                break;
            }
        case 3:
            {
                for (int i = 1; i <= numAnelli; i++){
                    if (i == posizioneAnelloRame1 || i == posizioneAnelloRame2){
                        cout<<"R";
                    }
                    else{
                        cout<<"F";
                    }
                }
                cout<<"\n"<<endl;

                break;
            }
        default:
            break;
        }

    } while (scelta != 4);

    return 0; 
}