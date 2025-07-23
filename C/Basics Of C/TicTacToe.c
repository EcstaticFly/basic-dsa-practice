#include <stdio.h>
#include <stdbool.h>

// Function to print the Tic-Tac-Toe board
void printBoard(char board[3][3]) {
    printf("-------------\n");
    for (int i = 0; i < 3; i++) {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("-------------\n");
    }
}

// Function to check if the game is over
bool isGameOver(char board[3][3]) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {
            return true;
        }
    }
    
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return true;
    }

    // Check for a tie
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false; // There is an empty cell, the game is not over
            }
        }
    }
    
    // If no winner and no empty cells, it's a tie
    return true;
}

// Function to make a move
bool makeMove(char board[3][3], int row, int col, char player) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = player;
        return true;
    } else {
        return false;
    }
}

int main() {
    char board[3][3] = { { ' ', ' ', ' ' },
                        { ' ', ' ', ' ' },
                        { ' ', ' ', ' ' } };
    char currentPlayer = 'X';
    int row, col;

    printf("Welcome to Tic-Tac-Toe!\n");

    while (!isGameOver(board)) {
        printBoard(board);

        printf("Player %c's turn. Enter row and column (0-2): ", currentPlayer);
        scanf("%d %d", &row, &col);

        if (makeMove(board, row, col, currentPlayer)) {
            if (currentPlayer == 'X') {
                currentPlayer = 'O';
            } else {
                currentPlayer = 'X';
            }
        } else {
            printf("Invalid move. Try again.\n");
        }
    }

    printBoard(board);
    
    if (isGameOver(board)) {
        printf("Game over!\n");
        char winner = (currentPlayer == 'X') ? 'O' : 'X';
        printf("Player %c wins!\n", winner);
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}

