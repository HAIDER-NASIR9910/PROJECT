
#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, 
                   {'4', '5', '6'}, 
                   {'7', '8', '9'}};

void drawBoard() {
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

void playerMove(char player) {
    int pos;
    cout << "Player " << player << ", enter your position (1-9): ";
    cin >> pos;

    int row = (pos - 1) / 3;
    int col = (pos - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
    } else {
        cout << "Position already occupied. Try again." << endl;
        playerMove(player);
    }
}

bool checkWin(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char player = 'X';
    int turns = 0;

    while (turns < 9) {
        drawBoard();
        playerMove(player);

        if (checkWin(player)) {
            drawBoard();
            cout << "Player " << player << " wins!" << endl;
            return 0;
        }

        if (checkDraw()) {
            drawBoard();
            cout << "It's a draw!" << endl;
            return 0;
        }

        player = (player == 'X') ? 'O' : 'X';
        turns++;
    }

    return 0;
}

