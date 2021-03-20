#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand (time(NULL));
    int v1;
    v1 = rand() % 100;



    string playerName, startOption, option1;
    int playerHP = 100, bossHP = 175;
    int hpLost = 5, damageGiven = 5, hpHealed = 10;
    bool bossDead = false, playerDead = false;
    bool bossDecision = true; ///false == heal --- true == attack
    cout << v1 << endl;
    cout << "Enter your name to continue: ";
    cin >> playerName;
    cout << "Welcome to game, " << playerName << "!" << endl;
    while(true)
    {
        cout << "Type 'START' to start the game, and 'TUTORIAL' to start the tutorial!" << endl;
        cin >> startOption;
        if (startOption == "START")
        {
            cout << endl << endl;
            cout << "Boss: You will never defeat me!" << endl << endl;
            while(bossDead == false && playerDead == false)
            {
                ///boss decides
                if(bossDecision == true)
                {
                    cout << "Boss attacked you!" << endl << "You lost " << hpLost << "HP!" << endl;
                    playerHP -= hpLost;
                    cout << "You now have " << playerHP << "HP!" << endl;
                }
                else
                {
                    cout << "Boss healed!" << endl;
                }
                cout << "Attack or heal?" << endl;
                cin >> option1;
                if(option1 == "ATTACK")
                {
                    cout << "You attacked boss." << endl;
                    cout << "You gave " << damageGiven << " damage to boss.";
                }
                else if(option1 == "HEAL")
                {
                    cout << "You drank a potion and it gave you " << hpHealed << "HP." << endl;
                }
            }

        }
        else if(startOption == "TUTORIAL")
        {
            cout << "Hello " << playerName << "!" << endl;
            cout << "I will teach you the basics of game!" << endl << endl;
            cout << "In boss game, you will fight a boss. He can attack you, or heal himself." << endl;
        }
        else
        {
            cout << "Invalid command." << endl;
            cout << "Type 'START' to start the game, and 'TUTORIAL' to start the tutorial!" << endl;
            cin >> startOption;
        }
    }


    return 0;
}
