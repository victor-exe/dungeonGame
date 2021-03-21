#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>
#include <fstream>

using namespace std;

void clearScreen()
{
    ifstream fin ("dungeonGame.txt");
    char ascii;

    if (system("CLS")) system("clear");

    while(fin >> noskipws >> ascii)
    {
        cout << ascii;
    }

}

int main()
{
    /*srand (time(NULL));
    int v1;
    v1 = rand() % 100;*/


    char option;
    string playerName, startOption, option1;
    int playerHP = 100, bossHP = 175;
    int hpLost = 5, damageGiven = 5, hpHealed = 10;
    bool bossDead = false, playerDead = false;
    bool bossDecision = true; ///false == heal --- true == attack


    cout << "Enter your name to continue: ";
    cin >> playerName;

    clearScreen();

    while(true)
    {
        cout << endl << "Welcome, " << playerName << "!" << endl << endl;
        cout << "    Press '1' to start the game" << endl << "    Press '2' to start the tutorial" << endl << "    Press '3' for credits!" << endl;
        option = getch();

        if (option == '1') /// game start
        {
            clearScreen();
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

        else if(option == '2') /// start tutorial
        {
            clearScreen();
            cout << endl << "Hello " << playerName << "!";
            cout << " I will teach you the basics of Dungeon Game!" << endl << endl << "(press any key to continue)" << endl;
            option = getch();
            clearScreen();

            cout <<  endl << "In Dungeon Game, you will experience multiple adventures while fighting enemies and bosses!" << endl << "(press anything to continue)" << endl << endl;
            option = getch();
            clearScreen();

            cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
            cout << "(press anything to continue)" << endl;
            option = getch();
            clearScreen();

            cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
            cout << endl << endl <<"To HEAL, you need to press 'q'." << endl << "Try it right now!" << endl;
            option = getch();

            while (option != 'q' && option != 'Q')
            {
                clearScreen();
                cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
                cout << endl << endl << "To HEAL, you need to press 'q'." << endl << "Try it right now!" << endl;
                cout << endl << "Wrong button :(" << endl << "Try again!" << endl;
                option = getch();
            }
            clearScreen();

            cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
            cout << endl << endl << "To HEAL, you need to press 'q'." << endl << "Try it right now!" << endl;

            cout << "----------" << endl;
            cout << "Perfect! You healed." << endl << "Let's move on to the next step." << endl << endl;

            cout << "To ATTACK, you need to press 'e'." << endl << "Try it!" << endl;
            option = getch();
            while (option != 'e' && option != 'E')
            {
                clearScreen();
                cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
                cout << endl << endl << "To HEAL, you need to press 'q'." << endl << "Try it right now!" << endl << endl;
                cout << "----------" << endl;
                cout << "Perfect! You healed." << endl << "Let's move on to the next step." << endl << endl;
                cout << "To ATTACK, you need to press 'e'." << endl << "Try it!" << endl;
                cout << endl << "Wrong button :/" << endl << "Try again!" << endl;
                option = getch();
            }
            cout << endl << "Perfect!" << endl;
            cout << "(press anything to continue)" << endl;
            option = getch();

            clearScreen();

            cout << endl << "Well, that's it!" << endl << "You now know how to play Dungeon Game!" << endl << endl;
            cout << "Press anything to go back to the main menu!" << endl;
            option = getch();
            clearScreen();

        }

        else if(option == '3')
        {
            clearScreen();
            cout << endl << "       ==MADE BY:==" << endl << "@Stefan360 & @victor-exe" << endl << endl;
            cout << "(press anything to go in main menu)" << endl;
            option = getch();
            clearScreen();
        }



        else
        {
            clearScreen();
            cout << endl << endl << "Invalid command." << endl;
        }
    }


    return 0;
}
