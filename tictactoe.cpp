//#include <iostream>
//#include <string>
#include "ttt.h"

//using namespace std;
/*class Player{
public:
    char c;
    Player(char ch){
        c=ch;
    }
    void move(Game g);
};
class AIPlayer:Player{
    AIPlayer(){
        Player('X');
    }
    void move(Game g){
        Game n = *g;
        for(int i = 0; i<n.board.size; i++){
            for(int j = 0; j<n.board[0].size; j++){
                if(n.board[i][j]!='-'){
                    n.board[i][j]='X';
                    if(n.winner()=="X"){
                        g.board[i][j]='X';
                        return;
                    }
                    else{
                        n.board[i][j]='-';
                    }
                }
            }
        }
        for(int i = 0; i<n.board.size; i++){
            for(int j = 0; j<n.board[0].size; j++){
                if(n.board[i][j]!='-'){
                    n.board[i][j]='O';
                    if(n.winner()=="O"){
                        g.board[i][j]='X';
                        return;
                    }
                    else{
                        n.board[i][j]='-';
                    }
                }
            }
        }
        for(int i = 0; i<g.board.size; i++){
            for(int j = 0; j<g.board[0].size; j++){
                if(g.board[i][j]=='-'){
                    g.board[i][j]='X';
                    return;
                }
            }
        }
    }
};
class UserPlayer:Player{
    UserPlayer(){
        Player('O');
    }
    void move(Game g){
        int row, col;
        cout<<"Enter a row (lowest is 0, highest is 2): ";
        cin>>row;
        cout<<endl<<"Enter a column (lowest is 0, highest is 2): ";
        cin>>col;
        cout<<endl;
        board[row][col]=c;
    }
};
class Game{
public:
    char board[][];
    AIPlayer c;
    UserPlayer u;
    Game(){
        board[3][3];
        for(int i = 0; i<board.size; i++){
            for(int j = 0; j<board[0].size; j++){
                board[i][j]='-';
            }
        }
        c = AIPlahyer();
        u = UserPlayer();
    }

    Game(Game g){
        board = *g.board;
        c = AIPlahyer();
        u = UserPlayer();
    }

    char winner(){
        for(int r=0; r<board.size; r++){
            if(board[r][0]==board[r][1]&&board[r][1]==board[r][2]&&board[r][0]!='-'){
                return board[r][0];
            }
        }
        for(int c=0; c<board[0].size; c++){
            if(board[0][c]==board[1][c]&&board[1][c]==board[2][c]&&board[0][c]!='-'){
                return board[r][0];
            }
        }
        if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!='-'){
            return board[0][0];
        }
        if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[2][0]!='-'){
            return board[2][0];
        }
        return '-';
    }

    void move(int x){
        if(x%2==1){
            u.move(board);
        }
        else{
            c.move(board)
        }
        for(int i=0; i<board.size; i++){
            for(int j = 0; j<board[0].size; j++){
                cout<<board[i][j]<<"\t";
            }
            cout<<endl;
        }
        if(winner!='-'&&x<10){
            x++;
            move(x);
        }
    }
};*/

int main(){
    Game g = Game();
    g.move(0);
    return 0;
}
