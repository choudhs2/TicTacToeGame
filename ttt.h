#ifndef TTT_H_INCLUDED
#define TTT_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Game{
public:
    char board[3][3];
    Game(){
        board[3][3];
        for(int i = 0; i<board.size; i++){
            for(int j = 0; j<board[0].size; j++){
                board[i][j]='-';
            }
        }
    }

    Game(char g[3][3]){
        board = *g;
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
            int row, col;
            cout<<"Enter a row (lowest is 0, highest is 2): ";
            cin>>row;
            cout<<endl<<"Enter a column (lowest is 0, highest is 2): ";
            cin>>col;
            cout<<endl;
            board[row][col]='O';
        }
        else{
            Game n = Game(*board);
        for(int i = 0; i<n.board.size; i++){
            for(int j = 0; j<n.board[0].size; j++){
                if(n.board[i][j]!='-'){
                    n.board[i][j]='X';
                    if(n.winner()=="X"){
                        board[i][j]='X';
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
                    if(n.winner()=='O'){
                        board[i][j]='X';
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
                if(board[i][j]=='-'){
                    board[i][j]='X';
                    return;
                }
            }
        }
    }
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
};

class AIPlayer{
public:
    char c;
    AIPlayer(){
        c='X';
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
class UserPlayer{
public:
    char c;
    UserPlayer(){
        c='O';
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


#endif // TTT_H_INCLUDED
