#include <iostream>
#include <array>
using namespace std;

class TTTGame {
    public:
        int g[3][3];
    TTTGame() {
        for (int i = 0; i < 3); i++) {
            for (int j = 0; j < 3; j++) {
                g[i][j] = 0;
            }
        }
    }
    TTTGame(int xg[3][3]) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                g[i][j] = xg[i][j];
            }
        }
    }
};
bool isSameRow(int row[]) {
    return row[0] == row[1] && row[0] == row[2];
}
bool isSameCol(TTTGame x, int col) {
    return x.g[0][col] == x.g[1][col] && x.g[0][col] == x.g[2][col];
}

bool isSameDiag(TTTGame x){
    return (x.g[0][0]==x.g[1][1]&&x.g[0][0]==x.g[2][2])||(x.g[0][2]==x.g[1][1]&&x.g[0][0]==x.g[2][0]);
}
int main() {
    TTTGame iht();
}
