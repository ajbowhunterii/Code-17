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

//Include header
#include "Game.h"

//Initializes variables.
void Game::initVar(){
    this->_window = nullptr;
}

//Initializes window.
void Game::initWin(){
    this->_videoMode.height = 1080;
    this->_videoMode.width = 1920;

    this->_window = new RenderWindow(this->_videoMode, "Code 17",Style::Close);

    this->_window->setFramerateLimit(60);
}

//Initialize panels on the title screen
void Game::initPanelsTitle() {
    this->_topLeftPanel.setSize(Vector2f(100.f, 100.f));
    this->_topLeftPanel.setFillColor(Color(200, 200, 200));
    this->_topLeftPanel.setOutlineColor(Color::Black);
    this->_topLeftPanel.setOutlineThickness(3);
    this->_topLeftPanel.setPosition(50, 50);

    this->_topRightPanel.setSize(Vector2f(100.f, 100.f));
    this->_topRightPanel.setFillColor(Color(200, 200, 200));
    this->_topRightPanel.setOutlineColor(Color::Black);
    this->_topRightPanel.setOutlineThickness(3);
    this->_topRightPanel.setPosition(1770, 50);

    this->_botLeftPanel.setSize(Vector2f(100.f, 100.f));
    this->_botLeftPanel.setFillColor(Color(200, 200, 200));
    this->_botLeftPanel.setOutlineColor(Color::Black);
    this->_botLeftPanel.setOutlineThickness(3);
    this->_botLeftPanel.setPosition(50, 930);

    this->_botRightPanel.setSize(Vector2f(100.f, 100.f));
    this->_botRightPanel.setFillColor(Color(200, 200, 200));
    this->_botRightPanel.setOutlineColor(Color::Black);
    this->_botRightPanel.setOutlineThickness(3);
    this->_botRightPanel.setPosition(1770, 930);
}
//Initialize panels on level 1
void Game::initPanelsLvl1() {
    this->_topLeftPanelLvl1.setSize(Vector2f(100.f, 100.f));
    this->_topLeftPanelLvl1.setFillColor(Color(10,10,10));
    this->_topLeftPanelLvl1.setOutlineColor(Color::Black);
    this->_topLeftPanelLvl1.setOutlineThickness(3);
    this->_topLeftPanelLvl1.setPosition(50, 50);

    this->_topRightPanelLvl1.setSize(Vector2f(100.f, 100.f));
    this->_topRightPanelLvl1.setFillColor(Color(10,10,10));
    this->_topRightPanelLvl1.setOutlineColor(Color::Black);
    this->_topRightPanelLvl1.setOutlineThickness(3);
    this->_topRightPanelLvl1.setPosition(1770, 50);

    this->_botLeftPanelLvl1.setSize(Vector2f(100.f, 100.f));
    this->_botLeftPanelLvl1.setFillColor(Color(10,10,10));
    this->_botLeftPanelLvl1.setOutlineColor(Color::Black);
    this->_botLeftPanelLvl1.setOutlineThickness(3);
    this->_botLeftPanelLvl1.setPosition(50, 930);

    this->_botRightPanelLvl1.setSize(Vector2f(100.f, 100.f));
    this->_botRightPanelLvl1.setFillColor(Color(10,10,10));
    this->_botRightPanelLvl1.setOutlineColor(Color::Black);
    this->_botRightPanelLvl1.setOutlineThickness(3);
    this->_botRightPanelLvl1.setPosition(1770, 930);
}
//Initialize which panels have been found
void Game::initPanelsFound() {
    this->_panelsFound = {false, false, false, false};
}
//Initialize the light on the title screen
void Game::initLightTitle() {
    this->_lightWire.setSize(Vector2f(15, 100));
    this->_lightWire.setFillColor(Color(125,125,125));
    this->_lightWire.setOutlineColor(Color::Black);
    this->_lightWire.setOutlineThickness(3);
    this->_lightWire.setPosition(953, 0);

    this->_lightBulb.setRadius(20);
    this->_lightBulb.setFillColor(Color::Yellow);
    this->_lightBulb.setOutlineColor(Color::Black);
    this->_lightBulb.setOutlineThickness(3);
    this->_lightBulb.setPosition(940, 180);

    this->_lightCover.setRadius(80);
    this->_lightCover.setPointCount(3);
    this->_lightCover.setFillColor(Color(150,150,150));
    this->_lightCover.setOutlineColor(Color::Black);
    this->_lightCover.setOutlineThickness(3);
    this->_lightCover.setPosition(880, 80);
}
//Initialize the light on level 1
void Game::initLightLvl1() {
    this->_lightWireLvl1.setSize(Vector2f(15, 100));
    this->_lightWireLvl1.setFillColor(Color(10,10,10));
    this->_lightWireLvl1.setOutlineColor(Color::Black);
    this->_lightWireLvl1.setOutlineThickness(3);
    this->_lightWireLvl1.setPosition(953, 0);

    this->_lightBulbLvl1.setRadius(20);
    this->_lightBulbLvl1.setFillColor(Color(10,10,10));
    this->_lightBulbLvl1.setOutlineColor(Color::Black);
    this->_lightBulbLvl1.setOutlineThickness(3);
    this->_lightBulbLvl1.setPosition(940, 180);

    this->_lightCoverLvl1.setRadius(80);
    this->_lightCoverLvl1.setPointCount(3);
    this->_lightCoverLvl1.setFillColor(Color(10,10,10));
    this->_lightCoverLvl1.setOutlineColor(Color::Black);
    this->_lightCoverLvl1.setOutlineThickness(3);
    this->_lightCoverLvl1.setPosition(880, 80);
}
//Initialize game start
void Game::initGameStart(){
    this->_gameStart = 0;
}
//Initialize game finish
void Game::initGameFinish() {
    this->_gameFinish = false;
}
//Initialize leaderboard open
void Game::initLBOpen() {
    this->_lBOpen = false;
}

//Default game constructor.
Game::Game(){
    this->initVar();
    this->initWin();
    this->initPanelsTitle();
    this->initPanelsLvl1();
    this->initPanelsFound();
    this->initLightTitle();
    this->initLightLvl1();
    this->initGameStart();
    this->initGameFinish();
    this->initLBOpen();
}

//Game destructor.
Game::~Game(){
    delete this->_window;
}

//Checks if game is running.
const bool Game::isRunning() const{
    return this->_window->isOpen();
}

//Returns mouse X coordinate
int Game::getMousePosX(){
    return this->_mousePosWin.at(0);
}
//Returns mouse Y coordinate
int Game::getMousePosY(){
    return this->_mousePosWin.at(1);
}
//Returns is a specific panel has been clicked on
bool Game::getPanelsFound(int panelNum){
    if ((panelNum >= 1) && (panelNum <= 4)){
        return this->_panelsFound.at(panelNum - 1);
    }
    else{
        cerr << "Invalid panel number." << endl;
        return false;
    }
}

//Checks for events.
void Game::pollEvent() {
    while( this->_window->pollEvent(this->_event) ) {        // ask the window if any events occurred
        if( this->_event.type == Event::Closed ) {              // if event type is a closed event
                                                                // i.e. they clicked the X on the window
            this->_window->close();                             // then close our window
        }
        if( this->_event.type == Event::KeyPressed ) {          // if event type is a closed event
            if(Keyboard::isKeyPressed(sf::Keyboard::Escape)){
                this->_window->close();
            }
        }
        //Updates the screen if certain keys are pressed
        this->updateGameStart();
    }
}
//Update mouse position relative to window
void Game::updateMousePosWin() {
    this->_mousePosWin.at(0) = Mouse::getPosition(*this->_window).x;
    this->_mousePosWin.at(1) = Mouse::getPosition(*this->_window).y;
}
//Updates screen shown
void Game::updateGameStart(){
    if(this->_event.type == Event::KeyPressed){
        //If player presses space on title screen, move to level 1
        if((this->_lBOpen == false) && (Keyboard::isKeyPressed(sf::Keyboard::Space))){
            //Start game
            this->_gameStart = 1;

            //Start timer and keep initial time as a variable
            auto start = high_resolution_clock::now();
            this-> startTime = start;
        }
        //If player presses left shift on title screen, display leaderboard
        if((this->_gameStart == 0) && (this->_lBOpen == false) && (this->_gameFinish == false)
        && (Keyboard::isKeyPressed(sf::Keyboard::Enter))) {
            //Change to leaderboard screen
            this->_gameStart = 2;
            //Set leaderboard open bool to true
            this->_lBOpen = true;
        }
        //If player presses left shift on the win screen, restart the game and append score
        if((this->_lBOpen == false) && (this->_gameFinish == true) &&
        (Keyboard::isKeyPressed(sf::Keyboard::LShift))){
            //Return to title screen
            this->_gameStart = 0;
            //Reset game finish bool to false
            this->_gameFinish = false;
            //Reset all panels found to false
            for(int i = 0; i < 4; i++){
                this->_panelsFound.at(i) = false;
            }

            //Stop timer and get time
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<chrono::milliseconds>(stop - this->startTime);

            //Open input leaderboard file
            ifstream fileI("leaderboard.txt");

            //Check if file opens
            if (fileI.fail()){
                cerr << "Could not open file" << endl;
            }

            //Initializes attempt and time
            int attempt = 0, prevTime = 0;

            //Inputs previous attempt and time
            while(fileI >> attempt >> prevTime){
            }

            //Close input leaderboard file
            fileI.close();

            if (attempt < 10) {
                //Open output leaderboard file
                ofstream fileO("leaderboard.txt", ios::app);

                //Check if file opens
                if (fileO.fail()){
                    cerr << "Could not open file" << endl;
                }

                //Append attempt and new time to file
                fileO << attempt + 1 << " " << duration.count() << endl;

                //Close output leaderboard file
                fileO.close();
            }
        }
        //If player presses left shift on leaderboard screen, return to title screen
        if ((this->_lBOpen == true) && (Keyboard::isKeyPressed(sf::Keyboard::LShift))){
            //Set leaderboard open bool to false
            this->_lBOpen = false;
            //Set screen to display to title screen
            this->_gameStart = 0;
        }
        //If player presses right shift on the leaderboard screen, it clears all previous scores
        if ((this->_lBOpen == true) && (Keyboard::isKeyPressed(sf::Keyboard::BackSpace))){
            //Open output leaderboard file
            ofstream fileO("leaderboard.txt");

            //Check if file opens
            if (fileO.fail()){
                cerr << "Could not open file" << endl;
            }

            //Clear leaderboard file
            fileO << "";

            //Close output leaderboard file
            fileO.close();
        }
    }
}
//Update which panels have been clicked on
void Game::updatePanelsFound() {
    //If player clicks on level 1 screen
    if ((this->_gameStart == 1) && (Mouse::isButtonPressed(Mouse::Left) == true)){
        //If player clicks on top left panel, set first bool to true
        if((this->getMousePosX() < 150) && (this->getMousePosX() > 50) &&
        (this->getMousePosY() < 150) && (this->getMousePosY() > 50)){
            this->_panelsFound.at(0) = true;
        }
        //If player clicks on top right panel, set second bool to true
        if((this->getMousePosX() < 1870) && (this->getMousePosX() > 1770) &&
           (this->getMousePosY() < 150) && (this->getMousePosY() > 50)){
            this->_panelsFound.at(1) = true;
        }
        //If player clicks on bottom left panel, set third bool to true
        if((this->getMousePosX() < 150) && (this->getMousePosX() > 50) &&
           (this->getMousePosY() < 1030) && (this->getMousePosY() > 930)){
            this->_panelsFound.at(2) = true;
        }
        //If player clicks on bottom right panel, set fourth bool to true
        if((this->getMousePosX() < 1870) && (this->getMousePosX() > 1770) &&
           (this->getMousePosY() < 1030) && (this->getMousePosY() > 930)){
            this->_panelsFound.at(3) = true;
        }
    }
}

//Updates game and objects.
void Game::update(){
    this->pollEvent();

    //Update mouse position relative to the window.
    this->updateMousePosWin();
    //Updates which panels have been found
    this->updatePanelsFound();
}

//Renders game and objects.
void Game::render(){
    //Initialize font
    Font pasti;
    if (!pasti.loadFromFile("data/PastiRegular-mLXnm.otf")) {
        cerr << "Font failed to load.";
    }
    //Displays title screen
    if (this->_gameStart == 0) {
        //Resets window
        this->_window->clear(Color(240, 240, 240));

        //Displays title screen text
        this->_titleTopText.setFont(pasti);
        this->_titleTopText.setString("Code 17");
        this->_titleTopText.setCharacterSize(300);
        this->_titleTopText.setFillColor(Color::Red);
        this->_titleTopText.setPosition(Vector2f((1920.f / 2) - 450, (1080.f / 2) - 250));

        this->_titleBotText.setFont(pasti);
        this->_titleBotText.setString("Press space bar to start.");
        this->_titleBotText.setCharacterSize(40);
        this->_titleBotText.setFillColor(Color::Black);
        this->_titleBotText.setPosition(Vector2f((1920.f / 2) - 215, (1080.f / 2) + 100));

        this->_titleLBTextTop.setFont(pasti);
        this->_titleLBTextTop.setString("Press enter to view leaderboard.");
        this->_titleLBTextTop.setCharacterSize(40);
        this->_titleLBTextTop.setFillColor(Color::Black);
        this->_titleLBTextTop.setPosition(Vector2f((1920.f / 2) - 300, (1080.f / 2) + 200));

        this->_titleLBTextBot.setFont(pasti);
        this->_titleLBTextBot.setString("(Only 10 scores can be saved)");
        this->_titleLBTextBot.setCharacterSize(40);
        this->_titleLBTextBot.setFillColor(Color::Black);
        this->_titleLBTextBot.setPosition(Vector2f((1920.f / 2) - 250, (1080.f / 2) + 300));

        //Draw objects
        this->_window->draw(_topLeftPanel);
        this->_window->draw(_topRightPanel);
        this->_window->draw(_botLeftPanel);
        this->_window->draw(_botRightPanel);
        this->_window->draw(_lightWire);
        this->_window->draw(_lightBulb);
        this->_window->draw(_lightCover);

        //Draw text
        this->_window->draw(_titleTopText);
        this->_window->draw(_titleBotText);
        this->_window->draw(_titleLBTextTop);
        this->_window->draw(_titleLBTextBot);
    }
    //Displays leaderboard
    else if (_gameStart == 2){
        //Clear window
        this->_window->clear(Color::White);

        //Initialize titles
        this->_lBTitle.setFont(pasti);
        this->_lBTitle.setString("Attempt        Time(seconds)");
        this->_lBTitle.setCharacterSize(40);
        this->_lBTitle.setFillColor(Color::Black);
        this->_lBTitle.setPosition(Vector2f((1920.f / 2) - 500, (1080.f / 2) - 500));

        //Initialize exit text
        this->_lBExitText.setFont(pasti);
        this->_lBExitText.setString("Press Left Shift to \nreturn to title screen.");
        this->_lBExitText.setCharacterSize(40);
        this->_lBExitText.setFillColor(Color::Black);
        this->_lBExitText.setPosition(Vector2f((1920.f / 2) + 400, (1080.f / 2) - 80));

        //Initialize reset text
        this->_lBResetText.setFont(pasti);
        this->_lBResetText.setString("Press BackSpace to \nreset the leaderboard.");
        this->_lBResetText.setCharacterSize(40);
        this->_lBResetText.setFillColor(Color::Black);
        this->_lBResetText.setPosition(Vector2f((1920.f / 2) + 400, (1080.f / 2)  + 80));

        //Open input leaderboard file
        ifstream fileI("leaderboard.txt");

        //Initialize previous attempts and times
        int attempt = 0, time = 0;

        //Print scores to screen
        while(fileI >> attempt >> time){
            string run;
            run += to_string(attempt);
            run += "                       ";
            run += to_string((double)time / 1000);
            this->_lBRun.setFont(pasti);
            this->_lBRun.setString(run);
            this->_lBRun.setCharacterSize(40);
            this->_lBRun.setFillColor(Color::Black);
            this->_lBRun.setPosition(Vector2f((1920.f / 2) - 500, (100.f * attempt)));

            //Draw run attempt number and time
            this->_window->draw(_lBRun);
        }

        //Close file
        fileI.close();

        //Draw text
        this->_window->draw(_lBTitle);
        this->_window->draw(_lBExitText);
        this->_window->draw(_lBResetText);
    }
    //Displays level 1
    else {
        //Clear window
        this->_window->clear(Color::Black);

        //Draw panels
        this->_window->draw(_topLeftPanelLvl1);
        this->_window->draw(_topRightPanelLvl1);
        this->_window->draw(_botLeftPanelLvl1);
        this->_window->draw(_botRightPanelLvl1);
        this->_window->draw(_lightWireLvl1);
        this->_window->draw(_lightBulbLvl1);
        this->_window->draw(_lightCoverLvl1);

        //Determines if player has beaten level 1
        for(int i = 0; i < 4; i++){
            if ((getPanelsFound(1) == true) && (getPanelsFound(2) == true)
            && (getPanelsFound(3) == true) && (getPanelsFound(4) == true)){
                //Set game finish equal to true
                this->_gameFinish = true;

                //Initialize win text
                this->_winText.setFont(pasti);
                this->_winText.setString("You Win!");
                this->_winText.setCharacterSize(300);
                this->_winText.setFillColor(Color::White);
                this->_winText.setPosition(Vector2f((1920.f / 2) - 550, (1080.f / 2) - 250));

                this->_winBotText.setFont(pasti);
                this->_winBotText.setString("Press Left Shift to save time and restart.");
                this->_winBotText.setCharacterSize(40);
                this->_winBotText.setFillColor(Color::White);
                this->_winBotText.setPosition(Vector2f((1920.f / 2) - 340, (1080.f / 2) + 100));

                //Draw win Text
                this->_window->draw(_winText);
                this->_window->draw(_winBotText);
            }
        }
    }

    //Display the window
    this->_window->display();
}