// Agent Zero.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "stdafx.h"

using namespace std;
using namespace sf;

#define Max_Main_Menu 4



int main()
{
    int i = 3;

    //Window
    //RenderWindow window(VideoMode(1280, 720), "Agent Zero", Style::Titlebar | Style::Resize | Style::Close);
    
    //Init Game
    Game game;

    //Event event;
    Event event;
    //Loop
    while (game.getWindowIsOpen()) {
        while (window.pollEvent(event))
        {
            switch (event.type) 
            {
            case Event::Closed:
                window.close();
                break;

            case Event::KeyPressed:
                if (event.key.code == Keyboard::Escape) window.close();
                break;
            }
        }
        //Update
        
        //Render
        window.clear(Color::Color(0, 0, 0)); //Clear Previous Frame   
        //Draw Game
        window.display(); //Tell app that window is done drawing

        cout << "Halo";
        //if (Keyboard::isKeyPressed(Keyboard::Escape)) break;
    }
    //Application has finished running
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
