#include "mbed.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    
    srand(time(NULL));              // Siemen satunnaisluvulle

    while (true) {                  // Loputon silmukka

        int a = rand() % 30 + 1;    // Satunnainen kok.luku 1-30 ( (0...29) + 1 ) 

        cout << a << endl;          // Luku sarjaportille

        wait_us(3000000);           // Odotetaan 3s
    }

    return 0;

}
