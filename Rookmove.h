

class Rook{
    private:
        Position pos;
    public:
        Rook(Position start_position){
            pos=start_position;
        }
        Position GoUp(int a){/*1*/
            return Position((char)((int)pos.getLetter()),pos.getNumber()+a);
        }
        Position GoRight(int a){/*3*/
            return Position((char)((int)pos.getLetter()+a),pos.getNumber());
        }
        Position GoDown(int a){/*5*/
            return Position((char)((int)pos.getLetter()),pos.getNumber()-a);
        }
        Position GoLeft(int a){/*7*/
            return Position((char)((int)pos.getLetter()-a),pos.getNumber());
        }
};
