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
        int next;
    public:
        Board(){
            memset(board,0,sizeof(board));
            next=1;
            board[1][1]=next;
            pos = Position ('A', 1);
        }
        Board(Position a){
            memset(board,0,sizeof(board));
            next=1;
            pos=a;
            board[(int)pos.getLetter()-(int)'A'+1][pos.getNumber()]=next;
        }
        Position getPosition(){
            return pos;
        }
        bool checkPosition(Position a){
            if ( a.getLetter()>'H' || a.getLetter()<'A' || a.getNumber()>8 || a.getNumber()<1) return false;
            if (board[(int)a.getLetter()-(int)'A'+1][a.getNumber()]>0) return false;
            return true;
        }
        void changePosition(Position a){
            next++;
            board[(int)a.getLetter()-(int)'A'+1][a.getNumber()]=board[(int)pos.getLetter()-(int)'A'+1][pos.getNumber()]+1;
            pos = a;
        }
        void rollBackPosition(Position a){
            board[(int)pos.getLetter()-(int)'A'+1][pos.getNumber()]=0;
            pos = a;
            next--;
        }
        void printBoard(){
            for (int i = 8; i >=1; i--){
                for (int j=1; j<=8; j++){
                    cout << setw(2) << board[j][i]<< " ";
                }
                cout << "\n";
            }
        }
        int Next(){
            return next;
        }
        
        
        
};









        
