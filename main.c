#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL)); // seed with current time

    int numer_of_players = 0;
    printf("Welcome to master YATZY! LEts Play!");
    printf("Enter number of players (2-6): \n >");
    if (scanf("%d", &numer_of_players) != 1)
    {
        printf("OMG, how hard can it be to enter a correct valeu!?\n");

    }
    if (numer_of_players < 2 || numer_of_players > 6)
    {
        printf("We said 2-6 players? WTF are you doing??");
        return 1;
    }
    printf("We have %d number of players", numer_of_players);

    
    char players[6][20] = {0}; 
    for (int player = 1; player <= numer_of_players; player++)
    {
        printf("Enter player %d name\n", player);
        scanf("%19s", players[player]);
        printf("Add player %19s \n", players[player]);

    }
    int score_board[6][15] ;
    // initsialiserar scorboard med -1 för att berätta att den inte är använd ännu
    // if -1, score är inte använd ännu
    for (int player = 0 ; player < 6; player++)
    {
        for (int score = 0; score < 15; score++)
        {
            score_board[player][score] = -1; 
        }
    }
    



    return 0;
}