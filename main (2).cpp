#include <iostream>
#include <cstdlib> // Obbligatoria per rand()


using namespace std;

int main(void) {
    srand(time(0)); 
    int x;
    int tabella[32][32];
   
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            // Genera un numero tra 0 e 99 e lo salva in x
            x = rand() % 100; 
            
            if (x > 70) {
                tabella[i][j] = 1; 
            } else {
                tabella[i][j] = 0; 
            }
        }
    }
   
    // Stampa la tabella
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            cout << tabella[i][j] << " "; // Aggiunto uno spazio per leggere meglio
        }
        cout << endl;
    }

    return 0;
}



