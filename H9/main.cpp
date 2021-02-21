#include <iostream>
#include"headeri.h"

using namespace std;


int main()
{
    struct Peli p1;
    p1.koti = 5;
    p1.vieras = 4;
    if(p1.koti > p1.vieras){
        cout << "Koti joukkue voitti " << p1.koti << "-" << p1.vieras;
      }
    else if(p1.koti < p1.vieras){
        cout << "Vieras joukkue voitti " << p1.vieras << "-" << p1.koti;
      }
    else{
        cout << "Tuli tasapeli " << p1.koti << "-" << p1.vieras;
      }
    return 0;
}
