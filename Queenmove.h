

class Queen{
    private:
        Position pos;
    public:
        Queen(Position start_position){
            pos=start_position;
        }
        Position GoUp(int a){/*1*/
            return Position((char)((int)pos.getLetter()),pos.getNumber()+a);
        }
        Position GoUpRight(int a){/*2*/
            return Position((char)((int)pos.getLetter()+a),pos.getNumber()+a);
        }
        Position GoRight(int a){/*3*/
            return Position((char)((int)pos.getLetter()+a),pos.getNumber());
        }
        Position GoDownRight(int a){/*4*/
            return Position((char)((int)pos.getLetter()+a),pos.getNumber()-a);
        }
        Position GoDown(int a){/*5*/
            return Position((char)((int)pos.getLetter()),pos.getNumber()-a);
        }
        Position GoDownLeft(int a){/*6*/
            return Position((char)((int)pos.getLetter()-a),pos.getNumber()-a);
        }
        Position GoLeft(int a){/*7*/
            return Position((char)((int)pos.getLetter()-a),pos.getNumber());
        }
        Position GoUpLeft(int a){/*8*/
            return Position((char)((int)pos.getLetter()-a),pos.getNumber()+a);
        }

};
