#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int hpHealedp, playerHp, hpHealedb, bossHp,

int healPlayer(int playerHp)
{
    srand (time(NULL));
    int hpHealedp = rand() % (50 - 35 + 1) + 35;
    playerHp = playerHp + hpHealedp;
    return playerHp;
}
int healBoss(int bossHp)
{
    srand (time(NULL));
    int hpHealedb = rand() % (55 - 35 + 1) + 35;
    bossHp = bossHp + hpHealedb;
    return bossHp;
}
int damageToBoss(int bossHp)
{

}
int damageToPlayer(int playerHp)
{

}
bossDecision()
