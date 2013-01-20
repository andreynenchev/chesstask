

class King{
    private:
        Position pos;
    public:
        King(Position start_position){
            pos=start_position;
        }
        Position GoUp(){/*1*/
            return Position((char)((int)pos.getLetter()),pos.getNumber()+1);
        }
        Position GoUpRight(){/*2*/
            return Position((char)((int)pos.getLetter()+1),pos.getNumber()+1);
        }
        Position GoRight(){/*3*/
            return Position((char)((int)pos.getLetter()+1),pos.getNumber());
        }
        Position GoDownRight(){/*4*/
            return Position((char)((int)pos.getLetter()+1),pos.getNumber()-1);
        }
        Position GoDown(){/*5*/
            return Position((char)((int)pos.getLetter()),pos.getNumber()-1);
        }
        Position GoDownLeft(){/*6*/
            return Position((char)((int)pos.getLetter()-1),pos.getNumber()-1);
        }
        Position GoLeft(){/*7*/
            return Position((char)((int)pos.getLetter()-1),pos.getNumber());
        }
        Position GoUpLeft(){/*8*/
            return Position((char)((int)pos.getLetter()-1),pos.getNumber()+1);
        }

};
