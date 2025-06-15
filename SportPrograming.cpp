#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Windows.h"

using namespace std;

void initializeBoard();
void printBoard();
bool checkWin(char player);
bool checkDraw();
void makePlayerMove();
void makeBotMove();
void switchPlayer();
void showMenu();
void playGame();

char board[3][3];
char currentPlayer = 'X';
bool vsBot = false;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));
    while (true) {
        showMenu();
        playGame();
        cout << "Грати ще раз? (1 - так, 0 - вихід): ";
        int again;
        cin >> again;
        if (again != 1)
            break;
    }

    return 0;
}

// Ініціалізація поля
void initializeBoard() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = ' ';
}

// Вивід поля
void printBoard() {
    cout << "\n";
    cout << "  0   1   2\n";
    for (int i = 0; i < 3; ++i) {
        cout << i << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << " ---+---+---\n";
    }
    cout << "\n";
}

// Перевірка на перемогу
bool checkWin(char player) {
    for (int i = 0; i < 3; ++i)
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;

    return false;
}

// Перевірка на нічию
bool checkDraw() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == ' ')
                return false;
    return true;
}

// Хід гравця
void makePlayerMove() {
    int row, col;

    while (true) {
        cout << "Гравець " << currentPlayer << ", введіть рядок і стовпець: ";
        cin >> row >> col;

        if (row < 0 || row > 2 || col < 0 || col > 2)
            cout << "Невірні координати. Спробуйте ще раз.\n";
        else if (board[row][col] != ' ')
            cout << "Клітинка зайнята. Спробуйте іншу.\n";
        else {
            board[row][col] = currentPlayer;
            break;
        }
    }
}

// Хід бота
void makeBotMove() {
    int row, col;

    cout << "Бот (O) робить хід...\n";
    while (true) {
        row = rand() % 3;
        col = rand() % 3;
        if (board[row][col] == ' ') {
            board[row][col] = 'O';
            break;
        }
    }
}

// Перемикання гравця
void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

// Меню гри
void showMenu() {
    int choice;

    cout << "=== Хрестики-Нолики ===\n";
    cout << "1. Гравець vs Гравець\n";
    cout << "2. Гравець vs Бот\n";
    cout << "3. Вихід\n";
    cout << "Виберіть режим гри: ";
    cin >> choice;

    switch (choice) {
    case 1:
        vsBot = false;
        break;
    case 2:
        vsBot = true;
        break;
    case 3:
        exit(0);
    default:
        cout << "Невірний вибір. Спробуйте ще раз.\n";
        showMenu();
    }
}

// Основна гра
void playGame() {
    initializeBoard();
    currentPlayer = 'X';

    while (true) {
        printBoard();

        if (vsBot && currentPlayer == 'O') {
            makeBotMove();
        }
        else {
            makePlayerMove();
        }

        if (checkWin(currentPlayer)) {
            printBoard();
            cout << "Гравець " << currentPlayer << " переміг!\n";
            break;
        }
        else if (checkDraw()) {
            printBoard();
            cout << "Нічия!\n";
            break;
        }

        switchPlayer();
    }
}
