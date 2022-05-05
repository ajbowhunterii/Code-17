//
// Created by lumba on 11/30/2021.
//
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

//define header file
#ifndef SFML_TEMPLATE_GAME_H
#define SFML_TEMPLATE_GAME_H

//Include necessary libraries
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>

//Using necessary namespaces
using namespace sf;
using namespace std;
using namespace chrono;

//Game engine class.
class Game {
private:
    //Variables
    //Window
    RenderWindow* _window;
    VideoMode _videoMode;
    //Event
    Event _event;

    //Mouse positions
    vector<int> _mousePosWin{0,0};

    //Game logic
    //Stores what screen game is on
    int _gameStart;
    //Stores if user has completed game
    bool _gameFinish;
    //Stores whether leaderboard is open
    bool _lBOpen;

    //Stores the start time of each run
    time_point<system_clock, duration<long long int, ratio<1, 1000000000>>> startTime;
    //Stores the number of panels clicked on by the player
    vector<bool> _panelsFound;

    //Game objects
    //Title screen text.
    Text _titleTopText;
    Text _titleBotText;
    Text _titleLBTextTop;
    Text _titleLBTextBot;
    //Win screen text
    Text _winText;
    Text _winBotText;
    //Leaderboard screen text
    Text _lBTitle;
    Text _lBRun;
    Text _lBExitText;
    Text _lBResetText;
    //Title screen panels
    RectangleShape _topLeftPanel;
    RectangleShape _topRightPanel;
    RectangleShape _botLeftPanel;
    RectangleShape _botRightPanel;
    //Title screen light
    RectangleShape _lightWire;
    CircleShape _lightCover;
    CircleShape _lightBulb;
    //Level 1 panels
    RectangleShape _topLeftPanelLvl1;
    RectangleShape _topRightPanelLvl1;
    RectangleShape _botLeftPanelLvl1;
    RectangleShape _botRightPanelLvl1;
    //Level 1 light
    RectangleShape _lightWireLvl1;
    CircleShape _lightCoverLvl1;
    CircleShape _lightBulbLvl1;

    //Private functions
    //Initializes variables
    void initVar();
    //Initializes window
    void initWin();
    //Initialize title screen objects
    //Panels
    void initPanelsTitle();
    void initPanelsLvl1();
    void initPanelsFound();
    //Initialize game start
    void initGameStart();
    //Initialize game finish
    void initGameFinish();
    //Initialize leaderboard open
    void initLBOpen();
    //Light
    void initLightTitle();
    void initLightLvl1();
public:
    //Constructor and destructor.
    Game();
    virtual ~Game();

    //Checks if program is running
    const bool isRunning() const;

    //Functions
    //Get the X and Y coordinate of the mouse relative to the window
    int getMousePosX();
    int getMousePosY();
    //Get the boolean of is a specific panel has been found
    bool getPanelsFound(int panelNum);

    //Check for events
    void pollEvent();
    //Update mouse position
    void updateMousePosWin();
    //Update if game has started
    void updateGameStart();
    //Update which panels have been found
    void updatePanelsFound();
    //Update all values for the game
    void update();

    //Render objects in window
    void render();
};


#endif //SFML_TEMPLATE_GAME_H