#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char x1 = '1', x2 = '2', x3 = '3', x4 = '4', x5 = '5', x6 = '6', x7 = '7', x8 = '8', x9 = '9';
    char x, a;
    int t = 1;

    while (t) {
        printf("Do you want to play with a friend or computer?\nEnter 's' for single-player or 'd' for double-player: ");
        scanf(" %c", &a);
        
        if (a == 's') { 
            while (1) {
                srand(time(NULL));

                for (int i = 1; i <= 9; i++) {
                    printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n", x1, x2, x3, x4, x5, x6, x7, x8, x9);

                    if (i % 2 != 0) { 
                        printf("Enter your move: ");
                        scanf(" %c", &x);
                        if (x == 'Q') return 0;

                        if (x == '1' && x1 == '1') x1 = 'X';
                        else if (x == '2' && x2 == '2') x2 = 'X';
                        else if (x == '3' && x3 == '3') x3 = 'X';
                        else if (x == '4' && x4 == '4') x4 = 'X';
                        else if (x == '5' && x5 == '5') x5 = 'X';
                        else if (x == '6' && x6 == '6') x6 = 'X';
                        else if (x == '7' && x7 == '7') x7 = 'X';
                        else if (x == '8' && x8 == '8') x8 = 'X';
                        else if (x == '9' && x9 == '9') x9 = 'X';
                        else {
                            printf("This position is already occupied:\nTry again\n");
                            i--;
                            continue;
                        }
                    } else { 
                        int y = 0;

                        
                        if ((x1 == 'O' && x2 == 'O' && x3 == '3') || (x1 == 'X' && x2 == 'X' && x3 == '3')) y = 3;
                        else if ((x1 == 'O' && x3 == 'O' && x2 == '2') || (x1 == 'X' && x3 == 'X' && x2 == '2')) y = 2;
                        else if ((x2 == 'O' && x3 == 'O' && x1 == '1') || (x2 == 'X' && x3 == 'X' && x1 == '1')) y = 1;

                        else if ((x4 == 'O' && x5 == 'O' && x6 == '6') || (x4 == 'X' && x5 == 'X' && x6 == '6')) y = 6;
                        else if ((x4 == 'O' && x6 == 'O' && x5 == '5') || (x4 == 'X' && x6 == 'X' && x5 == '5')) y = 5;
                        else if ((x5 == 'O' && x6 == 'O' && x4 == '4') || (x5 == 'X' && x6 == 'X' && x4 == '4')) y = 4;

                        else if ((x7 == 'O' && x8 == 'O' && x9 == '9') || (x7 == 'X' && x8 == 'X' && x9 == '9')) y = 9;
                        else if ((x7 == 'O' && x9 == 'O' && x8 == '8') || (x7 == 'X' && x9 == 'X' && x8 == '8')) y = 8;
                        else if ((x8 == 'O' && x9 == 'O' && x7 == '7') || (x8 == 'X' && x9 == 'X' && x7 == '7')) y = 7;
                        
                        else if ((x1 == 'O' && x4 == 'O' && x7 == '7') || (x1 == 'X' && x4 == 'X' && x7 == '7')) y = 7;
                        else if ((x1 == 'O' && x7 == 'O' && x4 == '4') || (x1 == 'X' && x7 == 'X' && x4 == '4')) y = 4;
                        else if ((x4 == 'O' && x7 == 'O' && x1 == '1') || (x4 == 'X' && x7 == 'X' && x1 == '1')) y = 1;

                        else if ((x2 == 'O' && x5 == 'O' && x8 == '8') || (x2 == 'X' && x5 == 'X' && x8 == '8')) y = 8;
                        else if ((x2 == 'O' && x8 == 'O' && x5 == '5') || (x2 == 'X' && x8 == 'X' && x5 == '5')) y = 5;
                        else if ((x5 == 'O' && x8 == 'O' && x2 == '2') || (x5 == 'X' && x8 == 'X' && x2 == '2')) y = 2;

                        else if ((x3 == 'O' && x6 == 'O' && x9 == '9') || (x3 == 'X' && x6 == 'X' && x9 == '9')) y = 9;
                        else if ((x3 == 'O' && x9 == 'O' && x6 == '6') || (x3 == 'X' && x9 == 'X' && x6 == '6')) y = 6;
                        else if ((x6 == 'O' && x9 == 'O' && x3 == '3') || (x6 == 'X' && x9 == 'X' && x3 == '3')) y = 3;

                        else if ((x1 == 'O' && x5 == 'O' && x9 == '9') || (x1 == 'X' && x5 == 'X' && x9 == '9')) y = 9;
                        else if ((x1 == 'O' && x9 == 'O' && x5 == '5') || (x1 == 'X' && x9 == 'X' && x5 == '5')) y = 5;
                        else if ((x5 == 'O' && x9 == 'O' && x1 == '1') || (x5 == 'X' && x9 == 'X' && x1 == '1')) y = 1;

                        else if ((x3 == 'O' && x5 == 'O' && x7 == '7') || (x3 == 'X' && x5 == 'X' && x7 == '7')) y = 7;
                        else if ((x3 == 'O' && x7 == 'O' && x5 == '5') || (x3 == 'X' && x7 == 'X' && x5 == '5')) y = 5;
                        else if ((x5 == 'O' && x7 == 'O' && x3 == '3') || (x5 == 'X' && x7 == 'X' && x3 == '3')) y = 3;

                        if (y == 0) {
                            do {
                                y = 1 + rand() % 9;
                            } while ((y == 1 && x1 != '1') || (y == 2 && x2 != '2') || (y == 3 && x3 != '3') ||
                                     (y == 4 && x4 != '4') || (y == 5 && x5 != '5') || (y == 6 && x6 != '6') ||
                                     (y == 7 && x7 != '7') || (y == 8 && x8 != '8') || (y == 9 && x9 != '9'));
                        }

                        if (y == 1) x1 = 'O';
                        else if (y == 2) x2 = 'O';
                        else if (y == 3) x3 = 'O';
                        else if (y == 4) x4 = 'O';
                        else if (y == 5) x5 = 'O';
                        else if (y == 6) x6 = 'O';
                        else if (y == 7) x7 = 'O';
                        else if (y == 8) x8 = 'O';
                        else if (y == 9) x9 = 'O';
                        printf("Computer played: %d\n", y);

                    }

                   
                    if ((x1 == x2 && x2 == x3) || (x4 == x5 && x5 == x6) || (x7 == x8 && x8 == x9) ||
                        (x1 == x4 && x4 == x7) || (x2 == x5 && x5 == x8) || (x3 == x6 && x6 == x9) ||
                        (x1 == x5 && x5 == x9) || (x3 == x5 && x5 == x7)) {
                        printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n", x1, x2, x3, x4, x5, x6, x7, x8, x9);
                        if (i % 2 != 0) {
                            printf("Winner: You!\n");
                        } else {
                            printf("Winner: Computer!\n");
                        }
                        break;
                    }

                   
                    if (x1 != '1' && x2 != '2' && x3 != '3' && x4 != '4' && x5 != '5' && x6 != '6' &&
                        x7 != '7' && x8 != '8' && x9 != '9') {
                        printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n", x1, x2, x3, x4, x5, x6, x7, x8, x9);
                        printf("The match is a draw!\n");
                        break;
                    }
                }

            
                printf("Do you want to play again? (y/n): ");
                char r;
                scanf(" %c", &r);
                if (r == 'n' || r == 'N') {
                    t = 0;
                    break;
                }

              
                x1 = '1', x2 = '2', x3 = '3', x4 = '4', x5 = '5', x6 = '6', x7 = '7', x8 = '8', x9 = '9';
            }
        } else if (a == 'd') { 
            while (1) {
                for (int i = 1; i <= 9; i++) {
                    printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n", x1, x2, x3, x4, x5, x6, x7, x8, x9);

                    if (i % 2 != 0) { 
                        printf("Player 1, enter your move: ");
                        scanf(" %c", &x);
                        if (x == 'Q') return 0;

                        if (x == '1' && x1 == '1') x1 = 'X';
                        else if (x == '2' && x2 == '2') x2 = 'X';
                        else if (x == '3' && x3 == '3') x3 = 'X';
                        else if (x == '4' && x4 == '4') x4 = 'X';
                        else if (x == '5' && x5 == '5') x5 = 'X';
                        else if (x == '6' && x6 == '6') x6 = 'X';
                        else if (x == '7' && x7 == '7') x7 = 'X';
                        else if (x == '8' && x8 == '8') x8 = 'X';
                        else if (x == '9' && x9 == '9') x9 = 'X';
                        else {
                            printf("This position is already occupied:\nTry again\n");
                            i--;
                            continue;
                        }
                    } else { 
                        printf("Player 2, enter your move: ");
                        scanf(" %c", &x);
                        if (x == 'Q') return 0;

                        if (x == '1' && x1 == '1') x1 = 'O';
                        else if (x == '2' && x2 == '2') x2 = 'O';
                        else if (x == '3' && x3 == '3') x3 = 'O';
                        else if (x == '4' && x4 == '4') x4 = 'O';
                        else if (x == '5' && x5 == '5') x5 = 'O';
                        else if (x == '6' && x6 == '6') x6 = 'O';
                        else if (x == '7' && x7 == '7') x7 = 'O';
                        else if (x == '8' && x8 == '8') x8 = 'O';
                        else if (x == '9' && x9 == '9') x9 = 'O';
                        else {
                            printf("This position is already occupied:\nTry again\n");
                            i--;
                            continue;
                        }
                    }

                   
                    if ((x1 == x2 && x2 == x3) || (x4 == x5 && x5 == x6) || (x7 == x8 && x8 == x9) ||
                        (x1 == x4 && x4 == x7) || (x2 == x5 && x5 == x8) || (x3 == x6 && x6 == x9) ||
                        (x1 == x5 && x5 == x9) || (x3 == x5 && x5 == x7)) {
                        printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n", x1, x2, x3, x4, x5, x6, x7, x8, x9);
                        if (i % 2 != 0) {
                            printf("Player 1 wins!\n");
                        } else {
                            printf("Player 2 wins!\n");
                        }
                        break;
                    }

                  
                    if (x1 != '1' && x2 != '2' && x3 != '3' && x4 != '4' && x5 != '5' && x6 != '6' &&
                        x7 != '7' && x8 != '8' && x9 != '9') {
                        printf("\n %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n", x1, x2, x3, x4, x5, x6, x7, x8, x9);
                        printf("The match is a draw!\n");
                        break;
                    }
                }

            
                printf("Do you want to play again? (y/n): ");
                char r;
                scanf(" %c", &r);
                if (r== 'n' || r == 'N') {
                    t = 0;
                    break;
                }

              
                x1 = '1', x2 = '2', x3 = '3', x4 = '4', x5 = '5', x6 = '6', x7 = '7', x8 = '8', x9 = '9';
            }
        }
    }

    return 0;
}
