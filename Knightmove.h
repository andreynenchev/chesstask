

class Knight{
    private:
        Position pos;
    public:
        Knight(Position start_position){
            pos=start_position;
        }
        Position GoUpRight(){/*1*/
            return Position((char)((int)pos.getLetter()+1),pos.getNumber()+2);
        }
        Position GoRightUp(){/*2*/
            return Position((char)((int)pos.getLetter()+2),pos.getNumber()+1);
        }
        Position GoRightDown(){/*3*/
            return Position((char)((int)pos.getLetter()+2),pos.getNumber()-1);
        }
        Position GoDownRight(){/*4*/
            return Position((char)((int)pos.getLetter()+1),pos.getNumber()-2);
        }
        Position GoDownLeft(){/*5*/
            return Position((char)((int)pos.getLetter()-1),pos.getNumber()-2);
        }
        Position GoLeftDown(){/*6*/
            return Position((char)((int)pos.getLetter()-2),pos.getNumber()-1);
        }
        Position GoLeftUp(){/*7*/
            return Position((char)((int)pos.getLetter()-2),pos.getNumber()+1);
        }
        Position GoUpLeft(){/*8*/
            return Position((char)((int)pos.getLetter()-1),pos.getNumber()+2);
        }
        void changePosition(Position a){
            pos = a;
        }
        Position getPosition(){
            return pos;
        }

};
int GetNext(Board b, Knight k);
void KnightTraverse(Board& b, Knight& k);

void KnightTraverse(Board& b, Knight& k){
    
    
    GetNext(b,k);


}


int GetNext(Board b, Knight k){
    Position old=k.getPosition();
    /*DEBUGING*/
    if (b.Next() > 63){
        b.printBoard();
        cout << "\n";
        //system ("pause");
    }
    if (b.Next() < 64){
        if (b.checkPosition(k.GoUpRight())) {
            
            b.changePosition(k.GoUpRight());
            k.changePosition(k.GoUpRight());
            if (GetNext(b,k) < 64){
                b.rollBackPosition(old);
                k.changePosition(old);
            }
            else return 64;
            
        }
        if (b.checkPosition(k.GoRightUp())) {
            b.changePosition(k.GoRightUp());
            k.changePosition(k.GoRightUp());
            if (GetNext(b,k) < 64){
                b.rollBackPosition(old);
                k.changePosition(old);
            }
            else return 64;
        }
        if (b.checkPosition(k.GoRightDown())) {
            b.changePosition(k.GoRightDown());
            k.changePosition(k.GoRightDown());
            if (GetNext(b,k) < 64){
                b.rollBackPosition(old);
                k.changePosition(old);
            }
            else return 64;
        }
        if (b.checkPosition(k.GoDownRight())) {
            b.changePosition(k.GoDownRight());
            k.changePosition(k.GoDownRight());
            if (GetNext(b,k) < 64){
                b.rollBackPosition(old);
                k.changePosition(old);
            }
            else return 64;
        }
        if (b.checkPosition(k.GoDownLeft())) {
            b.changePosition(k.GoDownLeft());
            k.changePosition(k.GoDownLeft());
            if (GetNext(b,k) < 64){
                b.rollBackPosition(old);
                k.changePosition(old);
            }
            else return 64;
        }
        if (b.checkPosition(k.GoLeftDown())) {
            b.changePosition(k.GoLeftDown());
            k.changePosition(k.GoLeftDown());
            if (GetNext(b,k) < 64){
                b.rollBackPosition(old);
                k.changePosition(old);
            }
            else return 64;
        }
        if (b.checkPosition(k.GoLeftUp())) {
            b.changePosition(k.GoLeftUp());
            k.changePosition(k.GoLeftUp());
            if (GetNext(b,k) < 64){
                b.rollBackPosition(old);
                k.changePosition(old);
            }
            else return 64;
        }
        if (b.checkPosition(k.GoUpLeft())) {
            b.changePosition(k.GoUpLeft());
            k.changePosition(k.GoUpLeft());
            if (GetNext(b,k) < 64){
                b.rollBackPosition(old);
                k.changePosition(old);
            }
            else return 64;
        }
    }
    return b.Next();
    
    
}


















