/*Chess Board*/
#include <cstring>
using namespace std;

class Position{
    private:
        char letter;/*ABCDEFGH*/
        int number;/*12345678*/
    public:
        Position(){/*for example : H8, A2*/
            letter='A';
            number=1;
        }
        
        Position(char a, int n){/*for example : H8, A2*/
            letter=a;
            number=n;
        }
        Position & operator =(Position a){
            letter = a.getLetter();
            number = a.getNumber();
        }
        string printPosition(){
            string a="00";
            a[0] = letter;
            a[1]=(char)(number+(int)'0');
            return a;
        }
        char getLetter(){
            return letter;
        }
        int getNumber(){
            return number;
        }
        
        
        
};

class Board{
    private:
        int board[9][9];
        Position pos;
    public:
        Board(){
            memset(board,0,sizeof(board));
        }
        Board(Position a){
            memset(board,0,sizeof(board));
            pos=a;
        }
        Position getPosition(){
            return pos;
        }
        bool checkPosition(Position a){
            if ( a.getLetter()>'H' || a.getLetter()<'A' || a.getNumber()>8 || a.getNumber()<1) return false;
            if (board[(int)a.getLetter()-(int)'A'+1][a.getNumber()]>0) return false;
            return true;
        }
        
        
};









        
