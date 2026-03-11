#include <iostream>
using namespace std;
int main(void) {
    srand(time(0));
   
    int tabella[32][32];
   
    for (int i = 0; i < 32; i ++) {
        for (int j = 0; j < 32; j ++) {
            tabella[i][j] = rand () % 2;;
        }
    }
   
    for (int i = 0; i < 32; i ++) {
        for (int j = 0; j < 32; j ++) {
            cout << tabella[i][j];
        }
       
        cout << endl;
    }
 
    return 0;
}