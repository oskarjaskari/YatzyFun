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


    return 0;
}