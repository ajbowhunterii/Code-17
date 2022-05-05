/* CSCI 261: Final Project
 *
 * Author: Aaron M Jones II
 * Resources used (Office Hours, Tutoring, Other Students, etc & in what capacity):
 *     Online Resources
 *
 * This code is a puzzle game where the player completes one level and their times
 * are saved to a leaderboard. They can then view and clear this leaderboard at any
 * point.
 */
//Include libraries.
#include <iostream>                             // for standard input/output
#include "Game.h"

//Using namespaces std and sf.
using namespace std;                            // using the standard namespace#include <SFML/Graphics.hpp>                    // include the SFML Graphics Library
using namespace sf;                             // using the sf namespace

int main() {
    //Create game object.
    Game code17;

    // while our window is open, keep it open
    // this is our draw loop
    while(code17.isRunning()) {
        //Update objects.
        code17.update();

        //Render objects.
        code17.render();
    }

    return EXIT_SUCCESS;                        // report our program exited successfully
}