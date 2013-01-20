

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

};
