#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    const int SEC = 30;
    const int START_SECOND = time(0);

    int secondPassed = time(0) - START_SECOND;

    while (secondPassed < SEC) {
        secondPassed = time(0) - START_SECOND;
        cout<<"\r"<<secondPassed<<flush;
        
        system("sleep 1");
    }

    cout<<endl;


    return 0;
}