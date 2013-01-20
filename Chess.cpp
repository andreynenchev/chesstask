#include <iostream>
#include <iomanip>
#include "Chessboard.h"
#include "Knightmove.h"
#include "Kingmove.h"
#include "Queenmove.h"
#include "Rookmove.h"



int main(){
    
    /*Testing Functions of calsses*/
    
    Board b(Position('H',1)); // defaut position is A1
    Knight Kn(b.getPosition());
    King Ki(b.getPosition());
    Queen Q (b.getPosition());
    Rook R (b.getPosition());
    
    
    cout << b.getPosition().printPosition() << "\n";
    
    cout <<"horce - GoUpRight  "<< Kn.GoUpRight().printPosition()<< "\n";
    cout <<"king - GoUpRight "<< Ki.GoUpRight().printPosition()<< "\n";
    cout <<"queen - GoUpRight 4 "<< Q.GoUpRight(4).printPosition()<< "\n";
    cout <<"rook - GoRight 6 "<< R.GoRight(6).printPosition()<< "\n";
    

    KnightTraverse(b,Kn);
    
    
    system ("pause");
    return 0;
}
