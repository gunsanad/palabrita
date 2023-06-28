#define MINIAUDIO_IMPLEMENTATION
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gfx_mod.h"
#include "elementinfos.h" //Include all the declaration for global info of all UI elements
/* Definition of the global junk */
struct AllKeyInfo allkeyinfo;
struct MainMenuButton mainmenubutton;
struct PreviewMatrix previewmatrix;
struct Navigate navigate;
#include "anim.h" //Animations for game end
#include <unistd.h>
#include "miniaudio.h" //Audio library

//Global info for click events
int gfx_wait_dummy, xpos_dummy, ypos_dummy;
int EnterGame = 0; //Event loop variable for entering game
int QuitProgram = 0; //Program event loop variable
int EnterHelp = 0; //Event loop variable for help screen
int EnterAbout = 0; //Event loop variable for about screen
int GameEnd = 0; //Event loop variable for game end screen
int GetEvent = 1; //Loop variable for getting input events (button clicks)
int GuessNum; //Index for letter in a guess
int GuessArray; //Index for a guess
int condition = -1; //Placeholder variable for WWinLose()
int currentword = 0; //Dummy index variable for tracking current word taken from the list

int YClickSignal(char *nickname);
void YUpdateKeyInfoVar(char *nickname, int index, int newvalue); //Update on-screen keyboard key information
int YLinkNickname(char *nickname, char *mode, char *channel, char *button_or_label, char *state, char *fetch);
void YAssignColor(char *nickname, int colorchart);
int YGetEvents(); //Needs to run in a while loop. Detects the latest click coords.
void YGetEventsMainMenu();
void YClickChangeColor(char *nickname, char *buttonlabel); //Basically YNewButton. Redraws a button with a delay
void YNewButton(char *nickname, char *buttonlabel, int choosefont); //Draws a button
void YPlaySound(char *audiofilename);
void YSetKeyboardDimensions(); //Sets the coords and dimensions info for the keyboard
void YDrawKeyboard(); //Draws the keyboard
void DrawMainMenuButtonCluster(); //Draws the main menu button cluster
void DrawPreview(); //Draws the preview matrix
void SetPreviewDimensions(); //Set the coords and dimensions info for the preview matrix
void YUpdateBoxInfoVar(); //Update preview box information
void WGetChar(int GuessArray, int i); //Stores a character into the guess array
int WCheckGuess(); //Checks for the validity of the guess, returns 0 if guess is invalid
void WGetAnswer(); //Sets a random word as the answer
int WFeedback(int i); //Returns integer which represents the color
int WCount(); //Returns amount of characters in guess
void YUpdatePreviewMatrixLinkI2L(int GuessNum); //Updates the array previewmatrix_link_index_to_label everytime a guess is accepted
void YKeyColorchartUpdate(char *label, int colorchart, int previewbox_index); //This function will change the colorchart of a particular key of the on-screen keyboard
void YInvalid(); //Display animation when an invalid guess is entered
void InitializeOKButton(); //Stores all button info (location, dimensions, colorchart) for ok button
int WWinLose(); //Handles game end variables and task executions
void DrawGameEnd(); //Draws game end screen
void GameEndEvents(); //Handles click events at game end
void InitializeGameEnd(); //Stores all button info for game end buttons
void DrawErrorDisplay(int errorindex); //Draw error display based on error index
void YResetSystem(); //Resets arrays related to keyboard and boxes, resets color as well, back to default
FILE *fw; //File pointer to list of words

void YUpdateNavigateInfoVar(char *nickname, int index, int newvalue); //Update navigation button information
void YGetOKButtonClick(); //Checks for clicks of the OK button. Might need modification soon.
void YDrawText(char *text, int x, int y, int colorchart, int choosefont); //Draws text
void YCheckHistory(); //Checks for history of words that have been selected prior to the current gameplay

char randombuffer[6]; //Buffer array for fetching a word from the list. Used to validate guesses.
char answerbuffer[12]; //Size defined as 12 in a naive attempt to fix segfault. Doesn't harm anything so it stays this way.
char already[995]; //Stores words that have already been picked from the file.

//Needed by miniaudio.h
ma_result result;
ma_engine engine;

int main() {
	int ysize = 960;
	int xsize = 1280;

    result = ma_engine_init(NULL, &engine);
    if (result != MA_SUCCESS) {
        return result; // Failed to initialize the engine.
    }

	gfx_open(xsize,ysize,"Palabrita");
    gfx_clear_color(83, 140, 92); //Main menu bg color
    gfx_clear();

    InitializeOKButton(); //Set location & dimensions & color info for ok button
    InitializeGameEnd();
    YSetKeyboardDimensions(); //Set location and dimensions info for on-screen keyboard
    SetPreviewDimensions(); //Set location and dimensions info for preview matrix
    printf("SetPreviewDimensions test\nStored value: %d\nCorrect value: 450\n", *previewmatrixptr[12]);

    int EventReturned; //Stores the returned value from YGetEvents
    int count_help = 0; //Dummy counter so help screen draws only once
    int count_about = 0; //Dummy counter so about screen draws only once
    int count_draw_game_end = 0; //Dummy counter so game end screne only draws once

	while (QuitProgram == 0) { //This outermost while loop is the application lifetime loop. Once it exits, the app ends.
        //Main menu loop
        
        if (EnterGame == 0 && EnterHelp == 0 && EnterAbout == 0 && GameEnd == 0) {
            gfx_clear_color(83, 140, 92); //Main menu bg color
            gfx_clear();
            printf("DrawMainMenuButtonCluster called\n");
            palabrita_hort(32, 200, 15); //Draw logo
            DrawMainMenuButtonCluster();
            YGetEventsMainMenu();
        }

        if (EnterGame == 1 && EnterHelp == 0 && EnterAbout == 0 && GameEnd == 0) {
            GetEvent = 1;
            gfx_clear_color(253, 249, 227); //Game screen bg color
            gfx_clear();
            int count_draw = 0;
            if (count_draw < 1) {
                DrawPreview();
                YDrawKeyboard();
                palabrita_hort(435, 900, 5); //Draw logo
                count_draw++;
            }
            WGetAnswer();
            printf("\n\nthe answerbuffer = ");
            for (int index = 0; index < 5; index++) {
                printf("%c", answerbuffer[index]);
            }
            printf("\n\n");
            for (int index = 0; index < 995; index++){
                printf("%c", already[index]); }
            printf("\n");
        }

        count_help = 0;
        while (EnterHelp == 1) {
            if (count_help < 1) {
                EnterGame = 0;
                gfx_clear_color(180, 197, 219);
                gfx_clear();
                YDrawText("how to play", 200, 100, 3, 6);
                YDrawText("You have 6 tries to guess the right word", 200, 175, 3, 7);
                YDrawText("An invalid guess will not count as an attempt.", 200, 200, 3, 7);
                YDrawText("The following count as invalid guesses:", 200, 225, 3, 7);
                YDrawText("Your guess is not a 5-letter word", 230, 250, 3, 7);
                YDrawText("Your guess is not one the 200 valid words", 230, 275, 3, 7);
                YDrawText("Your guess has repeating letters", 230, 300, 3, 7);
                YDrawText("If a letter is in the answer and in the right place, it will light up green.", 200, 340, 3, 7);
                YDrawText("If a letter is in the answer but in the wrong place, it will light up yellow.", 200, 365, 3, 7);
                YDrawText("If a letter isn't in the answer, it will light up grey.", 200, 390, 3, 7);

                YNewButton("ok_button", navigatelink_index_to_label[0], 0);
                count_help++;
            }
            printf("Help loop is running\n");
            YGetOKButtonClick();
        }

        count_about = 0;
        while (EnterAbout == 1) {
            if (count_about < 1) {
                EnterGame = 0;
                gfx_clear_color(171, 74, 48);
                gfx_clear();
                YDrawText("Developed by Ander & Zech", 200, 210, 1, 6);
                YDrawText("Libraries used:", 200, 250, 1, 7);
                YDrawText("xlib", 200, 275, 1, 7);
                YDrawText("gfx", 200, 300, 1, 7);
                YDrawText("miniaudio", 200, 325, 1, 7);
                YDrawText("Sounds sourced from Freesound.org from the following users:", 200, 375, 1, 7);
                YDrawText("rhodesmas", 200, 400, 1, 7);
                YDrawText("LittleRobotSound", 200, 425, 1, 7);
                YDrawText("NikoSardas", 200, 450, 1, 7);
                YDrawText("original_sound", 200, 475, 1, 7);
                YDrawText("Sheyvan", 200, 500, 1, 7);
                YDrawText("All sounds are either in the public domain, under", 200, 550, 1, 7);
                YDrawText("CC BY 3.0 or CC BY 4.0 license.", 200, 575, 1, 7);
                YNewButton("ok_button", navigatelink_index_to_label[0], 0);
                count_about++;
            }
            printf("About loop is running\n");
            YGetOKButtonClick();
        }
            
        while (EnterGame == 1 && EnterHelp == 0 && EnterAbout == 0) { //Game loop

		    for (GuessNum = 0; GuessNum < 6; GuessNum++){

                for (GuessArray = 0; GuessArray < 6; GuessArray++) {    //Loop for guess array
                    printf("\nChanging GetEvent into 1\n");
                    while (GetEvent == 1) {  //Getting input loop
                        EventReturned = YGetEvents();
                        //YGetEvents continuously runs until a button is clicked
                        if(EventReturned == 1) break;   //Button is clicked
                        else if (EventReturned == 2) break; //ENTER is clicked, but invalid guess
                        else if (EventReturned == 3) break; //ENTER is clicked, valid guess
                    }
                    YUpdatePreviewMatrixLinkI2L(GuessNum);  //Updates information in header file elementinfos.h

                    DrawPreview();  //Draws the keyboard and boxes

                    if (EventReturned == 3) {   //Word is accepted as a guess,
                        for (int m=0; m<5; m++) {
                            printf("\nYKeycolorchartUpdate loop is running\n");
                            printf("\nWFeedback value at m = %d : %d\n", m, WFeedback(m));

                            YKeyColorchartUpdate("", WFeedback(m), GuessNum*5+m);   //Change preview color
                            YKeyColorchartUpdate(guess[m], WFeedback(m), -1);
                            }   //Change key on keyboard color

                        DrawPreview(); //Redraw preview matrix
                        YDrawKeyboard(); //Redraw on-screen keyboard
                        condition = WWinLose();
                        printf("\n\nWWinLose value = %d\n\n", WWinLose());
                        for (int i=0; i < 5; i++){ //Clears the guess array when a guess is valid and accepted
                            guess[i] = ""; }
                        break;
                        }  //Word is accepted as a guess, move to the next GuessNum 

                    else if (EventReturned == 2) {   //Word is not accepted as a guess, restart the curent GuessNum
                        for (int i=0; i < 5; i++){ //Clears the guess array to make space for a new guess
                            guess[i] = "";
                            YUpdatePreviewMatrixLinkI2L(GuessNum);
                            DrawPreview(); }
                        GuessNum--;
                        break; }
                    printf("\nContained in box_00: %s\n", previewmatrix_link_index_to_label[0]);
                }

                if(condition >= 0 && condition <= 6) {
                    printf("\n break statement 1");
                    break;  //Break out of the guessnum loop if the user gets the answer correctly
                }

            }
            if (condition >= 0 && condition <= 6) {
                printf("\n break statement 2");
                EnterGame = 0;
                GameEnd = 1;
                printf("\nEnterGame value is %d", EnterGame);
                printf("\nGameEnd value is %d", GameEnd);
                break;
            }
            
		}

        count_draw_game_end = 0;
        //Game end screen loop
        while (EnterGame == 0 && EnterHelp == 0 && EnterAbout == 0 && GameEnd == 1) {
            if (count_draw_game_end < 1) {
                DrawGameEnd(condition);
                count_draw_game_end++;
            }
            GameEndEvents();
        }
    }
}

/* Function returns 0 if no button is clicked
Function returns 1 if a button is pressed
Function returns 2 if ENTER is pressed and the word is invalid
Function returns 3 if ENTER is pressed and the word is valid */
int YGetEvents() {

    gfx_wait_dummy = gfx_wait();
    xpos_dummy = gfx_xpos();
    ypos_dummy = gfx_ypos();

    printf("Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);
    for (int i = 0; i < 28; i++) {
        if (YClickSignal(link_index_to_nickname[i]) == 1) { //Falls into this if statement, when a button is clicked
            //DrawPreview(); //Redraw preview matrix everytime a key is pressed
            if (i != 27) { //All other keys place keypress_cut.mp3 except foor enter key
                YPlaySound("./sfx/keypress_cut.mp3");
            }
            else {
                YPlaySound("./sfx/return-guess.wav");
            }
            if(GuessArray == 5) {
                if (i == 26){ //When a bksp is clicked, the GuessArray loop goes back to the previous letter and replaces it with an empty space
                    YClickChangeColor(link_index_to_nickname[i], link_index_to_label[i]);
                    GuessArray = GuessArray-1;
                    WGetChar(GuessArray, i);
                    GuessArray = GuessArray-1; 
                    return 1; }
                else if (i == 27) { //When enter is clicked
                    YClickChangeColor(link_index_to_nickname[i], link_index_to_label[i]);
                    if(WCheckGuess() == 0) {
                        YInvalid(); 
                        return 2; }
                    else {
                        return 3; }
                }
                else {
                    YPlaySound("./sfx/too-much-letters.wav");
                }   
            }
            else if (GuessArray == 0) {
                YClickChangeColor(link_index_to_nickname[i], link_index_to_label[i]);
                if (i == 26){
                    //When a bksp is clicked as the first character, nothing will happen
                }
                else if (i == 27) { 
                    //When ENTER is clicked as the first character, it will always be invalid
                    YInvalid();
                    return 2;
                }
                else { //When any other button is pressed
                    WGetChar(GuessArray, i);
                    return 1; }
            }

            else if (GuessArray < 5 && GuessArray > 0) {
                YClickChangeColor(link_index_to_nickname[i], link_index_to_label[i]); 
                if (i == 26){ //When a bksp is entered, the GuessArray loop goes back to the previous letter and replaces it with an empty space
                    GuessArray = GuessArray-1; 
                    WGetChar(GuessArray, i);
                    GuessArray = GuessArray-1; 
                    return 1; }
                else if (i == 27) { //When ENTER is clicked
                    if(WCheckGuess() == 0){
                        YInvalid(); 
                        return 2; }
                    else{
                        return 3; }
                }
                else {//When any other button is pressed
                    WGetChar(GuessArray, i);
                    return 1; }
            }
        }
    }
    return 0;
}
//Returns the number of letters in the returned guess
int WCount() {
    int i=0, j;
    for(j = 0; j < 5; j++) {
        if(strcmp(guess[j],"") == 0) {break;}
        else {i++;}
    }
    return i;
}

/* Returns an integer that represents the color feedback
1 represents green
2 represents yellow
3 represents grey */
int WFeedback(int i) {
    if(strcmp(guess[i], (char[2]) {(char) answerbuffer[i], '\0'}) == 0) {
        return 1; }
    else if (strcmp(guess[i], (char[2]) {(char) answerbuffer[0], '\0'}) == 0) {
        return 2; }
    else if (strcmp(guess[i], (char[2]) {(char) answerbuffer[1], '\0'}) == 0) {
        return 2; }
    else if (strcmp(guess[i], (char[2]) {(char) answerbuffer[2], '\0'}) == 0) {
        return 2; }
    else if (strcmp(guess[i], (char[2]) {(char) answerbuffer[3], '\0'}) == 0) {
        return 2; }
    else if (strcmp(guess[i], (char[2]) {(char) answerbuffer[4], '\0'}) == 0) {
        return 2; }
    else {return 3;}
}

//Stores a character into the guess array
void WGetChar(int GuessArray, int i) {
    guess[GuessArray] = indexed_letters[i];
}

//Checks for the validity of the guess, returns 0 if guess is invalid
int WCheckGuess(){
    int i, j, y = 0, z = 1;
    int sameornot;
    fw = fopen("thebiglist.txt", "r");
    
    int match = 0;
    //Assigns value of y=1 if the entered guess is among the 200 words, else the value of y stays 0
    for(i = 0; i < 200; i++) {
        for (int i = 0; i < 6; i++) {
            randombuffer[i] = fgetc(fw); }
        printf("\nContained in randombuffer:\n");
        for (int i = 0; i < 5; i++) {
            printf("%c", randombuffer[i]); }
        printf("\n");

        sameornot = (strcmp((char[2]) {(char) randombuffer[0], '\0'}, guess[0]) == 0) && (strcmp((char[2]) {(char) randombuffer[1], '\0'}, guess[1]) == 0) && (strcmp((char[2]) {(char) randombuffer[2], '\0'}, guess[2]) == 0) && (strcmp((char[2]) {(char) randombuffer[3], '\0'}, guess[3]) == 0) && (strcmp((char[2]) {(char) randombuffer[4], '\0'}, guess[4]) == 0);

        printf("sameornot value = %d", sameornot);
        printf("\nGuess value = %s\nRandom value = %s\n", guess, randomized);
        printf("\n\nRandom at 0 = %c\n\n", randombuffer[0]);
        printf("\n\nRandom at 1 = %c\n\n", randombuffer[1]);
        printf("\nGuess at 0 = %s\nGuess at 1 = %s\nGuess at 2 = %s\nGuess at 3 = %s\nGuess at 4 = %s\n", guess[0], guess[1], guess[2], guess[3], guess[4]);
        if(sameornot == 1) {
            y = 1; }
        printf("\n");
    }
    
    fclose(fw);
    //Assigns the value of z=0 if there is any repetition of letter in the entered guess
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {   
            if(j != i) {
                //Make sure we're not comparing empty strings, and between the same exact strings
                if(strcmp(guess[i], guess[j]) == 0 && (strcmp(guess[i], "") != 0) && (strcmp(guess[j], "") != 0)) {
                    z = 0;
                    printf("\nREPEAT LETTERS ENCOUNTERED\n");}
            }
            else {continue;}
        }
    }

    if(WCount() != 5) {    //Checks for invalid length of guess
    	YPlaySound("./sfx/not-enough-letters.wav");
        DrawErrorDisplay(0); }
    if (y == 0) {   //Checks for invalid word among 200 words
    	YPlaySound("./sfx/not-in-dict.wav");
        DrawErrorDisplay(1); }
    if (z == 0) {     //Checks for repeating letters in entered guess
    	YPlaySound("./sfx/repeat-letters.wav");
        DrawErrorDisplay(2); }
    if (WCount() == 5 && y != 0 && z != 0) {return 1;} //When guess is valid, 1 is return
    else {return 0;}
}

//Sets a random word as the answer
void WGetAnswer() {
    int i, n;
    srand(time(NULL));
    n = 6*(rand()%200);   //Sets n as a random number from 0 to 200
    fw = fopen("thebiglist.txt", "r");
    if (fw == NULL)	{
    	printf("Cannot Open file \n");
    	exit(0); }
    fseek(fw, n, SEEK_SET);

    for (int index = 0; index < 5; index++) {
        answerbuffer[index] = fgetc(fw); }   
    fclose(fw);
    YCheckHistory();
}

void YCheckHistory() {
    int history = 0;
    for (int word = 0; word < 199 ; word++) {
        if (already[word*5+0] == answerbuffer[0] && already[word*5+1] == answerbuffer[1] && already[word*5+2] == answerbuffer[2] && already[word*5+3] == answerbuffer[3] && already[word*5+4] == answerbuffer[4]) {
            history = 1;
            WGetAnswer();}
    }
    if (history == 0) {
        for (int character = 0; character < 5; character++){
            already[currentword*5+character] = answerbuffer[character]; }
        currentword++; }
}

//Updates the array previewmatrix_link_index_to_label everytime a guess is accepted. This should be eventually followed by a redraw of the preview matrix to show changes to the player. 
void YUpdatePreviewMatrixLinkI2L(int GuessNum){
    for (int i = 0; i < 5; i++) {
        previewmatrix_link_index_to_label[GuessNum*5+i] = guess[i]; }
}

//Resets the button info related to keyboard and boxes in elementinfos.h
void YResetSystem() {
    for (int i = 0; i < 5; i++) {
        guess[i] = ""; }    //Empties the guess array
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            previewmatrix_link_index_to_label[5*i+j] = guess[j];    //Empties the previewmatrix_link_index_to_label array
            YKeyColorchartUpdate("", 0, 5*i+j); }   //Changes color for preview boxes back to default
    }
    for (int i = 0; i < 26; i++) {
        YKeyColorchartUpdate(indexed_letters[i], 0, -1);    //Changes color for keyboard back to default
    }
    condition = -1;
    GuessNum = 0;
    GuessArray = 0;
}
/* Handles tasks if input entered is invalid */
void YInvalid() {
    printf("\nINVALID INPUT\n");
}

void YGetEventsMainMenu() {

    gfx_wait_dummy = gfx_wait();
    xpos_dummy = gfx_xpos();
    ypos_dummy = gfx_ypos();
    printf("(In main menu) Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);

    for (int i = 0; i < 4; i++) {
        if (YClickSignal(mainmenu_link_index_to_nickname[i]) == 1) {
            YPlaySound("./sfx/button-click.wav");
            if (i == 0) {
                EnterGame = 1;
                EnterHelp = 0;} //new game button click task
            else if (i == 1) {
                EnterHelp = 1; } // help button click task
            else if (i == 2) {
                QuitProgram = 1; } //quit button click task
            else if (i == 3) {
                EnterAbout = 1; } //about button click task
            YClickChangeColor(mainmenu_link_index_to_nickname[i], mainmenu_link_index_to_label[i]); }
    }
}

//Checks for clicks of the OK button. Might need modification soon.
void YGetOKButtonClick() {

    gfx_wait_dummy = gfx_wait();
    xpos_dummy = gfx_xpos();
    ypos_dummy = gfx_ypos();

    if (YClickSignal("ok_button") == 1) {
        YClickChangeColor("ok_button", navigatelink_index_to_label[0]);
        YPlaySound("./sfx/button-click.wav");
        printf("OK button was clicked\n");
        EnterHelp = 0;
        EnterAbout = 0;
        EnterGame = 0;
    }
}

void DrawMainMenuButtonCluster() {
    //x value
    *mainmenubuttonptr[12] = 513;
    *mainmenubuttonptr[28] = 513;
    *mainmenubuttonptr[44] = 513;
    *mainmenubuttonptr[60] = 513;
    //width value
    *mainmenubuttonptr[14] = 255;
    *mainmenubuttonptr[30] = 255;
    *mainmenubuttonptr[46] = 255;
    *mainmenubuttonptr[62] = 255;
    //height value
    *mainmenubuttonptr[15] = 70;
    *mainmenubuttonptr[31] = 70;
    *mainmenubuttonptr[47] = 70;
    *mainmenubuttonptr[63] = 70;
    //y value
    *mainmenubuttonptr[13] = 385;
    *mainmenubuttonptr[29] = 480;
    *mainmenubuttonptr[45] = 575;
    *mainmenubuttonptr[61] = 670;

    YAssignColor("option_newgame", 1);
    YNewButton("option_newgame", mainmenu_link_index_to_label[0], 0);
    YAssignColor("option_help", 2);
    YNewButton("option_help", mainmenu_link_index_to_label[1], 0);
    YAssignColor("option_quit", 1);
    YNewButton("option_quit", mainmenu_link_index_to_label[2], 0);
    YAssignColor("option_about", 2);
    YNewButton("option_about", mainmenu_link_index_to_label[3], 0);
}

void YClickChangeColor(char *nickname, char *buttonlabel) {

    int r_button, g_button, b_button;
    int r_label, g_label, b_label;
    int x, y, width, height;

    r_button = YLinkNickname(nickname, "color","r", "button", "push", "");
    g_button = YLinkNickname(nickname, "color","g", "button", "push", "");
    b_button = YLinkNickname(nickname, "color","b", "button", "push", "");

    r_label = YLinkNickname(nickname, "color","r", "label", "push", "");
    g_label = YLinkNickname(nickname, "color","g", "label", "push", "");
    b_label = YLinkNickname(nickname, "color","b", "label", "push", "");

    x = YLinkNickname(nickname, "locate", "", "", "", "x");
    y = YLinkNickname(nickname, "locate", "", "", "", "y");
    width = YLinkNickname(nickname, "locate", "", "", "", "width");
    height = YLinkNickname(nickname, "locate", "", "", "", "height");

	gfx_color(r_button, g_button, b_button); //Pushed button color
	gfx_fillrectangle(x, y, width, height);
	
	gfx_color(r_label, g_label, b_label); //Pushed button label color
    gfx_text(buttonlabel, x + 0.15*width, y + 0.30*height, 4);

 //   gfx_cursor(); //No real use, just for fun
	gfx_flush(); //For some reason we need this line for the click change color to work

	usleep(100000);
	YNewButton(nickname, buttonlabel, 0);

}

/* Function syntax: For preview box YNewButton(nickname, buttonlabel, 1)
For buttons and keys YNewButton(nickname, buttonlabel, 0)
(New step) Call YAssignColor() before YNewButton() to assign color info for that particular button. */
void YNewButton(char *nickname, char *buttonlabel, int choosefont) {

    int r_button, g_button, b_button;
    int r_label, g_label, b_label;
    int x, y, width, height;

    r_button = YLinkNickname(nickname, "color", "r", "button", "rest", "");
    g_button = YLinkNickname(nickname, "color", "g", "button", "rest", "");
    b_button = YLinkNickname(nickname, "color", "b", "button", "rest", "");

    r_label = YLinkNickname(nickname, "color", "r", "label", "rest", "");
    g_label = YLinkNickname(nickname, "color", "g", "label", "rest", "");
    b_label = YLinkNickname(nickname, "color", "b", "label", "rest", "");

    x = YLinkNickname(nickname, "locate", "", "", "", "x");
    y = YLinkNickname(nickname, "locate", "", "", "", "y");
    width = YLinkNickname(nickname, "locate", "", "", "", "width");
    height = YLinkNickname(nickname, "locate", "", "", "", "height");

	gfx_color(r_button, g_button, b_button);
	gfx_fillrectangle(x, y, width, height); // Rest button color
	
	gfx_color(r_label, g_label, b_label); //Rest button label color
    
    if (choosefont == 0) {
        gfx_text(buttonlabel, x + 0.15*width, y + 0.30*height, 4);
    }
    else if (choosefont == 1) {
        gfx_text(buttonlabel, x + 0.3*width, y + 0.30*height, 6);
    }

    gfx_flush();
}

void YPlaySound(char *audiofilename) {
    ma_engine_play_sound(&engine, audiofilename, NULL);
}

/* Draws the keyboard. Needs YSetKeyboardDimensions() to be called at least once. (Called once in main) */
void YDrawKeyboard() {

    int i, j;
    for (i = 0; i <= 9; i++) { //Draws the first row of keys
        YAssignColor(link_index_to_nickname[i], link_index_to_state[i]);
        YNewButton(link_index_to_nickname[i], link_index_to_label[i], 0);
    }
    for (i = 10; i <= 18; i++) { //Draws the second row of keys
        YAssignColor(link_index_to_nickname[i], link_index_to_state[i]);
        YNewButton(link_index_to_nickname[i], link_index_to_label[i], 0);
    }
    for (i = 19; i <= 25; i++) { //Draws the third row of keys
        YAssignColor(link_index_to_nickname[i], link_index_to_state[i]);
        YNewButton(link_index_to_nickname[i], link_index_to_label[i], 0);
    }
    //Draw bksp
    YAssignColor("key_bksp", 0);
    YNewButton("key_bksp", link_index_to_label[26], 0);
    //Draw enter
    YAssignColor("key_enter", 0);
    YNewButton("key_enter", link_index_to_label[27], 0);
}

/* colorchart 0 = default, 1 = green, 2 = yellow, 3 = grey
Assigns colorchart to a button identified by its nickname. */
void YAssignColor(char *nickname, int colorchart) {
    //Default colorchart
    int set_rest_button[3] = {212, 218, 215};
    int set_push_button[3] = {130, 145, 161};
    int set_rest_blabel[3] = {0, 0, 0};
    int set_push_blabel[3] = {255, 255, 255};

    //No filtering for colorchart == 0 since it will always default back to the default colorchart as initialized
    if (colorchart == 1) {
        set_rest_button[0] = 38;
        set_rest_button[1] = 189;
        set_rest_button[2] = 100;

        set_push_button[0] = 16;
        set_push_button[1] = 117;
        set_push_button[2] = 58;

        set_rest_blabel[0] = 255;
        set_rest_blabel[1] = 255;
        set_rest_blabel[2] = 255;

        set_push_blabel[0] = 255;
        set_push_blabel[1] = 255;
        set_push_blabel[2] = 255; }
    else if (colorchart == 2) {
        set_rest_button[0] = 228;
        set_rest_button[1] = 186;
        set_rest_button[2] = 53;

        set_push_button[0] = 163;
        set_push_button[1] = 129;
        set_push_button[2] = 20;

        set_rest_blabel[0] = 0;
        set_rest_blabel[1] = 0;
        set_rest_blabel[2] = 0;

        set_push_blabel[0] = 255;
        set_push_blabel[1] = 255;
        set_push_blabel[2] = 255; }
    else if (colorchart == 3) {
        set_rest_button[0] = 109;
        set_rest_button[1] = 109;
        set_rest_button[2] = 109;

        set_push_button[0] = 66;
        set_push_button[1] = 66;
        set_push_button[2] = 66;

        set_rest_blabel[0] = 255;
        set_rest_blabel[1] = 255;
        set_rest_blabel[2] = 255;

        set_push_blabel[0] = 255;
        set_push_blabel[1] = 255;
        set_push_blabel[2] = 255; }

    int i, j, k;
    int fetch_onscreenkeyboard; //Indicates that the color assignment is for an onscreen keyboard key. 0 false, 1 true
    int fetch_previewmatrix; //Indicates that color assignment is for a preview box
    k = 0;
    //Compares nickname to its index. e.g. if nickname is key_q, then index = 0. More compact than an if-else ladder.
    for (int index = 0; index < 28; index++) {
        if (strcmp(link_index_to_nickname[index], nickname) == 0) {
            k = index*16; //This is the mapping between the link_index_to_nickname indexing to key_allptr (0 -> 0, 1 -> 16, 2 -> 32 <=> B = A*16)
            fetch_onscreenkeyboard = 1;
            break; }
        else fetch_onscreenkeyboard = 0;
    }
    //Nickname comparison to index for main menu buttons
    for (int index = 0; index < 4; index++) {
        if (strcmp(mainmenu_link_index_to_nickname[index], nickname) == 0) {
            k = index*16;
            break; }
    }
    //Nickname comparison to index for preview boxes
    for (int index = 0; index < 30; index++) {
        if (strcmp(previewmatrix_link_index_to_nickname[index], nickname) == 0) {
            k = index*16;
            fetch_previewmatrix = 1;
            break; }
        else {
            fetch_previewmatrix = 0;
        }
    }
    //For on-screen keyboard:
    if (fetch_onscreenkeyboard == 1) {
        for (i=k, j=0; i<k+3 && j<3; i++, j++) { //Access the first three pointers in the pointer block (rest button RGB)
            *key_allptr[i] = set_rest_button[j]; }
        for (i=k+3, j=0; i<k+6 && j<3; i++, j++) { //Access the next three pointers in the pointer block (push button RGB)
            *key_allptr[i] = set_push_button[j]; }
        for (i=k+6, j=0; i<k+9 && j<3; i++, j++) { //Access the next next three pointers in the pointer block (rest button label RGB)
            *key_allptr[i] = set_rest_blabel[j]; }
        for (i=k+9, j=0; i<k+12 && j<3; i++, j++) { //Access the next next next three pointers in the pointer block (push button label RGB)
            *key_allptr[i] = set_push_blabel[j]; }
    }
    //For main menu buttons:
    else if (fetch_onscreenkeyboard == 0 && fetch_previewmatrix == 0) {
        for (i=k, j=0; i<k+3 && j<3; i++, j++) { //Access the first three pointers in the pointer block (rest button RGB)
            *mainmenubuttonptr[i] = set_rest_button[j]; }
        for (i=k+3, j=0; i<k+6 && j<3; i++, j++) { //Access the next three pointers in the pointer block (push button RGB)
            *mainmenubuttonptr[i] = set_push_button[j]; }
        for (i=k+6, j=0; i<k+9 && j<3; i++, j++) { //Access the next next three pointers in the pointer block (rest button label RGB)
            *mainmenubuttonptr[i] = set_rest_blabel[j]; }
        for (i=k+9, j=0; i<k+12 && j<3; i++, j++) { //Access the next next next three pointers in the pointer block (push button label RGB)
            *mainmenubuttonptr[i] = set_push_blabel[j]; }
    }
    //For preview boxes:
    else if (fetch_previewmatrix == 1) {
        for (i=k, j=0; i<k+3 && j<3; i++, j++) { //Access the first three pointers in the pointer block (rest button RGB)
            *previewmatrixptr[i] = set_rest_button[j]; }
        for (i=k+6, j=0; i<k+9 && j<3; i++, j++) { //Access the next next three pointers in the pointer block (rest button label RGB)
            *previewmatrixptr[i] = set_rest_blabel[j]; }
    } 
}

/* Sets location and dimensions info for the preview matrix */
void SetPreviewDimensions() {
    int i = 0;
    int row, col;
	for (row = 0; row < 6 && i < 30; row++) {
        for (col = 0; col < 5 && i < 30; col++) {
            YUpdateBoxInfoVar(previewmatrix_link_index_to_nickname[i], 12, 450+(77*col)); //Update x value
            YUpdateBoxInfoVar(previewmatrix_link_index_to_nickname[i], 13, 100+(75*row)); //Update y value
            YUpdateBoxInfoVar(previewmatrix_link_index_to_nickname[i], 14, 70); //Update width value
            YUpdateBoxInfoVar(previewmatrix_link_index_to_nickname[i], 15, 70); //Update height value
            i++;
        }
    }
}

/* If you want this function to return color info, pass the locate parameters as an empty string "":
e.g.
YLinkNickname("somebutton", "color", "r", "label", "rest", "")
or conversely;
YLinkNickname("somebutton", "locate", "", "", "", "height");

This function now does double duty not just for RGB info, but also
the top-left point coords (TLP coords) of the button, button width and height.
char *mode can be "color" or "locate".
"color" mode makes this function return only color-relevant info.
"locate" mode makes this function return the TLP coords, and button dimensions info

char* fetch can be "x" (return x TLP coord), "y" (return y TLP coord), "width"(return width), "height" (return height)
char *channel can be "r", "g", or "b"
char *state can be "rest" or "push"
char *button_or_label can be "button" or "label" */
int YLinkNickname(char *nickname, char *mode, char *channel, char *button_or_label, char *state, char *fetch) {
    int output;
    int i, j, k;
    k = 0;
    int request_rest_button_r, request_rest_button_g, request_rest_button_b;
    request_rest_button_r = (strcmp(mode, "color") == 0) && (strcmp(channel, "r") == 0) && (strcmp(button_or_label, "button") == 0) && (strcmp(state, "rest") == 0);
    request_rest_button_g = (strcmp(mode, "color") == 0) && (strcmp(channel, "g") == 0) && (strcmp(button_or_label, "button") == 0) && (strcmp(state, "rest") == 0);
    request_rest_button_b = (strcmp(mode, "color") == 0) && (strcmp(channel, "b") == 0) && (strcmp(button_or_label, "button") == 0) && (strcmp(state, "rest") == 0);
    
    int request_push_button_r, request_push_button_g, request_push_button_b;
    request_push_button_g = (strcmp(mode, "color") == 0) && (strcmp(channel, "g") == 0) && (strcmp(button_or_label, "button") == 0) && (strcmp(state, "push") == 0);
    request_push_button_b = (strcmp(mode, "color") == 0) && (strcmp(channel, "b") == 0) && (strcmp(button_or_label, "button") == 0) && (strcmp(state, "push") == 0);
    request_push_button_r = (strcmp(mode, "color") == 0) && (strcmp(channel, "r") == 0) && (strcmp(button_or_label, "button") == 0) && (strcmp(state, "push") == 0);
 
    int request_rest_blabel_r, request_rest_blabel_g, request_rest_blabel_b;
    request_rest_blabel_r = (strcmp(mode, "color") == 0) && (strcmp(channel, "r") == 0) && (strcmp(button_or_label, "label") == 0) && (strcmp(state, "rest") == 0);
    request_rest_blabel_g = (strcmp(mode, "color") == 0) && (strcmp(channel, "g") == 0) && (strcmp(button_or_label, "label") == 0) && (strcmp(state, "rest") == 0);
    request_rest_blabel_b = (strcmp(mode, "color") == 0) && (strcmp(channel, "b") == 0) && (strcmp(button_or_label, "label") == 0) && (strcmp(state, "rest") == 0);
    
    int request_push_blabel_r, request_push_blabel_g, request_push_blabel_b;
    request_push_blabel_r = (strcmp(mode, "color") == 0) && (strcmp(channel, "r") == 0) && (strcmp(button_or_label, "label") == 0) && (strcmp(state, "push") == 0);
    request_push_blabel_g = (strcmp(mode, "color") == 0) && (strcmp(channel, "g") == 0) && (strcmp(button_or_label, "label") == 0) && (strcmp(state, "push") == 0);
    request_push_blabel_b = (strcmp(mode, "color") == 0) && (strcmp(channel, "b") == 0) && (strcmp(button_or_label, "label") == 0) && (strcmp(state, "push") == 0);
    
    int request_x, request_y, request_width, request_height;
    request_x = (strcmp(mode, "locate") == 0) && (strcmp(fetch, "x") == 0);
    request_y = (strcmp(mode, "locate") == 0) && (strcmp(fetch, "y") == 0);
    request_width = (strcmp(mode, "locate") == 0) && (strcmp(fetch, "width") == 0);
    request_height = (strcmp(mode, "locate") == 0) && (strcmp(fetch, "height") == 0);

    if (request_rest_button_r == 1) {i = 0;}
    else if (request_rest_button_g == 1) {i = 1;}
    else if (request_rest_button_b == 1) {i = 2;}

    else if (request_push_button_r == 1) {i = 3;}
    else if (request_push_button_g == 1) {i = 4;}
    else if (request_push_button_b == 1) {i = 5;}

    else if (request_rest_blabel_r == 1) {i = 6;}
    else if (request_rest_blabel_g == 1) {i = 7;}
    else if (request_rest_blabel_b == 1) {i = 8;}

    else if (request_push_blabel_r == 1) {i = 9;}
    else if (request_push_blabel_g == 1) {i = 10;}
    else if (request_push_blabel_b == 1) {i = 11;}

    else if (request_x == 1) {i = 12;}
    else if (request_y == 1) {i = 13;}
    else if (request_width == 1) {i = 14;}
    else if (request_height == 1) {i = 15;}

    //Compares nickname to its index. e.g. if nickname is key_q, then index = 0. More compact than an if-else ladder.
    for (int index = 0; index < 28; index++) {
        if (strcmp(link_index_to_nickname[index], nickname) == 0) {
            k = index*16; //This is the mapping between the link_index_to_nickname indexing to key_allptr (0 -> 0, 1 -> 16, 2 -> 32 => B = A*16)
            output = *key_allptr[k+i]; //Return value retrieved from allkeyinfo
            break; }
    }
    //Nickname comparison to index for main menu buttons
    for (int index = 0; index < 4; index++) {
        if (strcmp(mainmenu_link_index_to_nickname[index], nickname) == 0) {
            k = index*16;
            output = *mainmenubuttonptr[k+i]; //Return value retrieved from mainmenubutton
            break; }
    }
    //Nickname comparison to index for preview boxes
    for (int index = 0; index < 30; index++) {
        if (strcmp(previewmatrix_link_index_to_nickname[index], nickname) == 0) {
            k = index*16;
            output = *previewmatrixptr[k+i]; //Return value retrieved from previewmatrix
            //printf("YLinkNickname value = %d\n", output);
            break; }
    }

    if (strcmp("ok_button", nickname) == 0) {
        output = *navigateptr[i];
    }
    if (strcmp("replay_button", nickname) == 0) {
        output = *navigateptr[i+16];
    }
    else if (strcmp("back_to_menu_button", nickname) == 0) {
        output = *navigateptr[i+32];
    }
    else if (strcmp("quit_button", nickname) == 0) {
        output = *navigateptr[i+48];
    }

    return output;
}

/* Handles button response when clicked */
int YClickSignal(char *nickname) {
    int output, i;
    //Compares nickname to its index. e.g. if nickname is key_q, then index = 0. More compact than an if-else ladder.
    for (int index = 0; index < 28; index++) {
        if (strcmp(link_index_to_nickname[index], nickname) == 0) {
            i = index*16;
            break; }
    }
    //Nickname compare for main menu buttons
    for (int index = 0; index < 4; index++) {
        if (strcmp(mainmenu_link_index_to_nickname[index], nickname) == 0) {
            i = index*16;
            break; }
    }
    //Compare nickname to ok_button
    if (strcmp("ok_button", nickname) == 0) {
        i = 0;
    }
        //Compare nickname to replay_button
    if (strcmp("replay_button", nickname) == 0) {
        i = 16;
    }
    //Compare nickname to back_to_menu_button
    else if (strcmp("back_to_menu_button", nickname) == 0) {
        i = 32;
    }
    //Compare nickname to quit_button
    else if (strcmp("quit_button", nickname) == 0) {
        i = 48;
    }
    //Checking click coords within onscreen keyboard keys, important to filter for
    // EnterGame, since not doing so will result in conflicting click coord returns
    if (EnterGame == 1 && EnterHelp == 0 && EnterAbout == 0) {
        if((xpos_dummy > *key_allptr[12+i] && xpos_dummy < *key_allptr[12+i]+*key_allptr[14+i]) && (ypos_dummy > *key_allptr[13+i] && ypos_dummy < *key_allptr[13+i]+*key_allptr[15+i])) {
            printf("Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);
            output = 1; }
        else {output = 0;}
    }
    //Checking click coords within main menu buttons
    else if (EnterGame == 0 && EnterHelp == 0 && EnterAbout == 0) {
        if((xpos_dummy > *mainmenubuttonptr[12+i] && xpos_dummy < *mainmenubuttonptr[12+i]+*mainmenubuttonptr[14+i]) && (ypos_dummy > *mainmenubuttonptr[13+i] && ypos_dummy < *mainmenubuttonptr[13+i]+*mainmenubuttonptr[15+i])) {
            printf("Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);
            output = 1; }
        else {output = 0;}
    }
    //Check if ok button was clicked in help screen
    else if (EnterHelp == 1 && EnterGame == 0 && EnterAbout == 0) {
        if((xpos_dummy > *navigateptr[12+i] && xpos_dummy < *navigateptr[12+i]+*navigateptr[14+i]) && (ypos_dummy > *navigateptr[13+i] && ypos_dummy < *navigateptr[13+i]+*navigateptr[15+i])) {
            printf("Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);
            output = 1; }
        else {output = 0;}
    }
    //Check if ok button was clicked in about screen
    else if (EnterAbout == 1 && EnterGame == 0 && EnterHelp == 0) {
        if((xpos_dummy > *navigateptr[12+i] && xpos_dummy < *navigateptr[12+i]+*navigateptr[14+i]) && (ypos_dummy > *navigateptr[13+i] && ypos_dummy < *navigateptr[13+i]+*navigateptr[15+i])) {
            printf("Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);
            output = 1; }
        else {output = 0;}
    }
    //Check if replay button was clicked in game end screen
    if (EnterAbout == 0 && EnterGame == 0 && EnterHelp == 0 && GameEnd == 1) {
        if((xpos_dummy > *navigateptr[12+i] && xpos_dummy < *navigateptr[12+i]+*navigateptr[14+i]) && (ypos_dummy > *navigateptr[13+i] && ypos_dummy < *navigateptr[13+i]+*navigateptr[15+i])) {
            printf("Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);
            output = 1; }
        else {output = 0;}
    }
    //Check if back to main menu button was clicked in game end screen
    else if (EnterAbout == 0 && EnterGame == 0 && EnterHelp == 0 && GameEnd == 1) {
        if((xpos_dummy > *navigateptr[12+i] && xpos_dummy < *navigateptr[12+i]+*navigateptr[14+i]) && (ypos_dummy > *navigateptr[13+i] && ypos_dummy < *navigateptr[13+i]+*navigateptr[15+i])) {
            printf("Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);
            output = 1; }
        else {output = 0;}
    }
    //Check if quit button was clicked in game end screen
    else if (EnterAbout == 0 && EnterGame == 0 && EnterHelp == 0 && GameEnd == 1) {
        if((xpos_dummy > *navigateptr[12+i] && xpos_dummy < *navigateptr[12+i]+*navigateptr[14+i]) && (ypos_dummy > *navigateptr[13+i] && ypos_dummy < *navigateptr[13+i]+*navigateptr[15+i])) {
            printf("Quit clicked Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);
            output = 1; }
        else {output = 0;}
    }
    return output;
}

/* Sets location and dimensions info for the keyboard */
void YSetKeyboardDimensions() {
    int i, x, y, width, height;
	for (i = 0; i < 10; i++) {
        YUpdateKeyInfoVar(link_index_to_nickname[i], 12, 77*i+240);
        YUpdateKeyInfoVar(link_index_to_nickname[i], 13, 610);
        YUpdateKeyInfoVar(link_index_to_nickname[i], 14, 70);
        YUpdateKeyInfoVar(link_index_to_nickname[i], 15, 70);
    }
    for (i = 0; i < 9; i++) {
        YUpdateKeyInfoVar(link_index_to_nickname[i+10], 12, 77*i+255);
        YUpdateKeyInfoVar(link_index_to_nickname[i+10], 13, 687);
        YUpdateKeyInfoVar(link_index_to_nickname[i+10], 14, 70);
        YUpdateKeyInfoVar(link_index_to_nickname[i+10], 15, 70);
    }
    for (i = 0; i < 7; i++) {
        YUpdateKeyInfoVar(link_index_to_nickname[i+19], 12, 77*i+327);
        YUpdateKeyInfoVar(link_index_to_nickname[i+19], 13, 764);
        YUpdateKeyInfoVar(link_index_to_nickname[i+19], 14, 70);
        YUpdateKeyInfoVar(link_index_to_nickname[i+19], 15, 70);
    }
    //backspace
    YUpdateKeyInfoVar(link_index_to_nickname[26], 12, 948);
    YUpdateKeyInfoVar(link_index_to_nickname[26], 13, 687);
    YUpdateKeyInfoVar(link_index_to_nickname[26], 14, 90);
    YUpdateKeyInfoVar(link_index_to_nickname[26], 15, 70);
	//enter
    YUpdateKeyInfoVar(link_index_to_nickname[27], 12, 866);
    YUpdateKeyInfoVar(link_index_to_nickname[27], 13, 764);
    YUpdateKeyInfoVar(link_index_to_nickname[27], 14, 120);
    YUpdateKeyInfoVar(link_index_to_nickname[27], 15, 70);
}

/* This function updates a particular variable stored in the struct of a particular button.
Choose which variable to update by passing int index as the index of the variable's pointer in key_allptr.
e.g. to update the R channel rest button color of key_q to 255, call YUpdateKeyInfoVar("key_q", 0, 255)
to update the R channel rest button color of key_w to 32, call YUpdateKeyInfoVar("key_w", 0, 32)
and sub 0 with 1 for G channel rest button color of key_w and so on
int index -->   variable
0-2  -->        R, G, B channel of rest button color
3-5  -->        R, G, B channel of push button color
6-8  -->        R, G, B channel of rest button label color
9-11 -->        R, B, B channel of push button label color
12-13   -->     x, y
14-15   -->     width, height */
void YUpdateKeyInfoVar(char *nickname, int index, int newvalue) {
    int i;
    //Compares nickname to its index. e.g. if nickname is key_q, then index = 0. More compact than an if-else ladder.
    for (int j = 0; j < 28; j++) {
        if (strcmp(link_index_to_nickname[j], nickname) == 0) {
            i = j*16; //This is the mapping between the link_index_to_nickname indexing to key_allptr (0 -> 0, 1 -> 16, 2 -> 32 => B = A*16)
            break; }
    }
    *key_allptr[i+index] = newvalue;
}

/* Works the same way as YUpdateKeyInfoVar()
int index -->   variable
0-2  -->        R, G, B channel of rest button color
6-8  -->        R, G, B channel of rest button label color
12-13   -->     x, y
14-15  -->     width, height */
void YUpdateBoxInfoVar(char *nickname, int index, int newvalue) {
    int i;
    //Compare nickname to index
    for (int j = 0; j < 30; j++) {
        if (strcmp(previewmatrix_link_index_to_nickname[j], nickname) == 0) {
            i = j*16; //Mapping between previewmatrix_link_index_to_nickname and previewmatrixptr
            break; }
    }
    *previewmatrixptr[i+index] = newvalue;
}

/* Changes the colorchart of a particular key on the on-screen keyboard.
To change colorchart of key Q to green, call YKeyColorchartUpdate("Q", 1, -1)
To change colorchart of a preview box at index 29 to yellow, call YKeyColorchartUpdate("", 2, 29)
colorchart 0 = default, 1 = green, 2 = yellow, 3 = grey */
void YKeyColorchartUpdate(char *letter, int colorchart, int previewbox_index) {
    int j;
    int update_previewbox;

    if (previewbox_index == -1) {
        update_previewbox = 0; }

    if (strcmp(letter, "") == 0) {
        update_previewbox = 1; }
    else update_previewbox = 0;
    
    //Update colorchart of key of on-screen keyboard
    if (update_previewbox == 0) {
        for (j = 0; j < 28; j++) {
            if (strcmp(indexed_letters[j], letter) == 0) {
                break; }
        }
        link_index_to_state[j] = colorchart; //Update key color info
    }
    //Update colorchart of preview box
    else if (update_previewbox == 1) {
        previewmatrix_link_index_to_state[previewbox_index] = colorchart; //Update preview box color info
    }
}

/* Feeds button info for ok button (location, dimensions, colorchart) */
void InitializeOKButton() {
    YUpdateNavigateInfoVar("ok_button", 0, 252);
    YUpdateNavigateInfoVar("ok_button", 1, 165);
    YUpdateNavigateInfoVar("ok_button", 2, 66);
    YUpdateNavigateInfoVar("ok_button", 3, 179);
    YUpdateNavigateInfoVar("ok_button", 4, 113);
    YUpdateNavigateInfoVar("ok_button", 5, 39);
    YUpdateNavigateInfoVar("ok_button", 6, 0);
    YUpdateNavigateInfoVar("ok_button", 7, 0);
    YUpdateNavigateInfoVar("ok_button", 8, 0);
    YUpdateNavigateInfoVar("ok_button", 9, 255);
    YUpdateNavigateInfoVar("ok_button", 10, 255);
    YUpdateNavigateInfoVar("ok_button", 11, 255);
    YUpdateNavigateInfoVar("ok_button", 12, 513);
    YUpdateNavigateInfoVar("ok_button", 13, 768);
    YUpdateNavigateInfoVar("ok_button", 14, 255);
    YUpdateNavigateInfoVar("ok_button", 15, 70);
}

/* Colorchart: 0 = Black, 1 = White, 2 = Gold, 3 = Dark Green */
void YDrawText(char *text, int x, int y, int colorchart, int choosefont) {
    if (colorchart == 0) {
        gfx_color(0, 0, 0); }
    else if (colorchart == 1) {
        gfx_color(255, 255, 255); }
    else if (colorchart == 2) {
        gfx_color(189, 121, 4); }
    else if (colorchart == 3) {
        gfx_color(23, 110, 62); }
    gfx_text(text, x, y, choosefont);
    gfx_flush();
}

/* int index -->   variable
0-2  -->        R, G, B channel of rest button color
3-5  -->        R, G, B channel of push button color
6-8  -->        R, G, B channel of rest button label color
9-11 -->        R, B, B channel of push button label color
12-13   -->     x, y
14-15   -->     width, height */
void YUpdateNavigateInfoVar(char *nickname, int index, int newvalue) {
    if (strcmp("ok_button", nickname) == 0) {
        *navigateptr[index] = newvalue; }
    else if (strcmp("replay_button", nickname) == 0) {
        *navigateptr[index+16] = newvalue;
    }
    else if (strcmp("back_to_menu_button", nickname) == 0) {
        *navigateptr[index+32] = newvalue;
    }
    else if (strcmp("quit_button", nickname) == 0) {
        *navigateptr[index+48] = newvalue;
    }
}

/* Handles game loop exiting at game end. Checks how many attempts until player won and if the player lost.
return value        -->     condition
0                   -->     1st try win
1                   -->     2nd try win
2                   -->     3rd try win
3                   -->     4th try win
4                   -->     5th try win
5                   -->     6th try win
6                   -->     lose*/
int WWinLose() {
    int checkifanswer;
    printf("\nContents of answerbuffer:");
    for (int i = 0; i < 5; i++) {
        printf("%c", answerbuffer[i]); }
    printf("\n");
    printf("\nContents of guess[0] inside WWinLose: %d\n", guess[0]);
    printf("\nContents of guess[1] inside WWinLose: %d\n", guess[1]);
    printf("\nContents of guess[2] inside WWinLose: %d\n", guess[2]);
    printf("\nContents of guess[3] inside WWinLose: %d\n", guess[3]);
    printf("\nContents of guess[4] inside WWinLose: %d\n", guess[4]);

    checkifanswer = (strcmp(guess[0], (char[2]) {(char) answerbuffer[0], '\0'}) == 0) && (strcmp(guess[1], (char[2]) {(char) answerbuffer[1], '\0'}) == 0) && (strcmp(guess[2], (char[2]) {(char) answerbuffer[2], '\0'}) == 0) && (strcmp(guess[3], (char[2]) {(char) answerbuffer[3], '\0'}) == 0) && (strcmp(guess[4], (char[2]) {(char) answerbuffer[4], '\0'}) == 0);
    printf("\ncheckifanswer value is %d\n", checkifanswer);
    printf("\nguessnum value is %d\n", GuessNum);
    //If they won at first try
    if (GuessNum == 0 && checkifanswer == 1) {
        GetEvent = -1; //Break out of game input loop
        EnterGame = 0; //Break out of game loop
        return 0; }
    //If they won at second try
    else if (GuessNum == 1 && checkifanswer == 1) {
        GetEvent = -1; //Break out of game input loop
        EnterGame = 0; //Break out of game loop
        return 1; }
    //If they won at third try
    else if (GuessNum == 2 && checkifanswer == 1) {
        GetEvent = -1; //Break out of game input loop
        EnterGame = 0; //Break out of game loop
        return 2; }
    //If they won at fourth try
    else if (GuessNum == 3 && checkifanswer == 1) {
        GetEvent = -1; //Break out of game input loop
        EnterGame = 0; //Break out of game loop
        return 3; }
    //If they won at fifth try
    else if (GuessNum == 4 && checkifanswer == 1) {
        GetEvent = -1; //Break out of game input loop
        EnterGame = 4; //Break out of game loop
        return 4; }
    //If they won at sixth try
    else if (GuessNum == 5 && checkifanswer == 1) {
        GetEvent = -1; //Break out of game input loop
        EnterGame = 4; //Break out of game loop
        return 5; }
    //If they used all atempts and lost
    else if (GuessNum == 5 && checkifanswer != 1) {
        GetEvent = -1; //Break out of game input loop
        EnterGame = 4; //Break out of game loop
        return 6; }
    else {return -1;}
}

/* choosetext decides what message to draw for the player to see depending on
whether they lost or how many tries they took to win 
choosetext value    -->     condition
0                   -->     1st try win
1                   -->     2nd try win
2                   -->     3rd try win
3                   -->     4th try win
4                   -->     5th try win
5                   -->     6th try win
6                   -->     lose */
void DrawGameEnd(int choosetext) {
    gfx_clear_color(245, 232, 159);
    gfx_clear();
    printf("choosetext value is %d\n",choosetext);

    if (choosetext != 6) {
        YPlaySound("./sfx/gameend.wav");
        movebravo();
    }
    else {YPlaySound("./sfx/can-you-speak-english.wav");}

    char tmparray[6];
    tmparray[0] = answerbuffer[0];
    tmparray[1] = answerbuffer[1];
    tmparray[2] = answerbuffer[2];
    tmparray[3] = answerbuffer[3];
    tmparray[4] = answerbuffer[4];
    tmparray[5] = '\0';

    YDrawText("the answer is", 463, 647, 0, 7); //Show the answer
    YDrawText(tmparray, 645, 640, 0, 6);

    if (choosetext == 0) {
        YDrawText("There's just no way you didn't cheat.", 348, 570, 0, 0); }
    else if (choosetext == 1) {
        YDrawText("You're either lucky or a genius.", 398, 570, 0, 0); }
    else if (choosetext == 2) {
        YDrawText("Third time's the charm.", 448, 570, 0, 0); }
    else if (choosetext == 3) {
        YDrawText("The Chinese believe that the number 4 is bad luck.", 248, 570, 0, 0); }
    else if (choosetext == 4) {
        YDrawText("That took you long enough.", 428, 570, 0, 0); }
    else if (choosetext == 5) {
        YDrawText("The universe rewards your persistence.", 328, 570, 0, 0); }
    else if (choosetext == 6) {
        movegame();
        moveover();
        sleep(2);
        YDrawText("You should read some more.", 408, 570, 0, 0); }

    gfx_color(161, 142, 39);
    gfx_fillrectangle(229, 813, 255+6, 70+6);
    YNewButton("replay_button", navigatelink_index_to_label[1], 0);
    gfx_color(22, 145, 67);
    gfx_fillrectangle(509, 813, 255+6, 70+6);
    YNewButton("back_to_menu_button", navigatelink_index_to_label[2], 0);
    gfx_color(227, 161, 18);
    gfx_fillrectangle(789, 813, 255+6, 70+6);
    YNewButton("quit_button", navigatelink_index_to_label[3], 0);
}


/* Detects if the buttons in the game end screen are clicked and executes tasks based on the button clicked. */
void GameEndEvents() {
    gfx_wait_dummy = gfx_wait();
    xpos_dummy = gfx_xpos();
    ypos_dummy = gfx_ypos();
    printf("(In gameendevents) Mouse xpos= %d and ypos= %d \n", xpos_dummy, ypos_dummy);

    for (int i = 1; i < 4; i++) {
        if (YClickSignal(navigatelink_index_to_nickname[i]) == 1) {
            YPlaySound("./sfx/button-click.wav");
            YClickChangeColor(navigatelink_index_to_nickname[i], navigatelink_index_to_label[i]);
            if (i == 1) { //Replay button click task
                EnterHelp = 0;
                EnterAbout = 0;
                EnterGame = 1; //Enter game loop
                GameEnd = 0; //Exit game end loop
                YResetSystem(); //Reset game conditions to normal
            }
            else if (i == 2) { //Back to main menu button click task
                EnterGame = 0; //Exit game loop
                GameEnd = 0; //Exit game end loop
                YResetSystem(); //Reset game conditions to normal
            }
            else if (i == 3) { //Quit button click task
                EnterGame = 0;
                EnterHelp = 0;
                EnterAbout = 0;
                GameEnd = 0;
                QuitProgram = 1;
                break; //Exit program loop
             }
            
        }
    }
}

/* Sets location and dimensions info for the game end buttons */
void InitializeGameEnd() {
    //Set info for replay button
    YUpdateNavigateInfoVar("replay_button", 0, 248);
    YUpdateNavigateInfoVar("replay_button", 1, 234);
    YUpdateNavigateInfoVar("replay_button", 2, 34);
    YUpdateNavigateInfoVar("replay_button", 3, 194);
    YUpdateNavigateInfoVar("replay_button", 4, 183);
    YUpdateNavigateInfoVar("replay_button", 5, 31);
    YUpdateNavigateInfoVar("replay_button", 6, 0);
    YUpdateNavigateInfoVar("replay_button", 7, 0);
    YUpdateNavigateInfoVar("replay_button", 8, 0);
    YUpdateNavigateInfoVar("replay_button", 9, 0);
    YUpdateNavigateInfoVar("replay_button", 10, 0);
    YUpdateNavigateInfoVar("replay_button", 11, 0);
    YUpdateNavigateInfoVar("replay_button", 12, 232);
    YUpdateNavigateInfoVar("replay_button", 13, 816);
    YUpdateNavigateInfoVar("replay_button", 14, 255);
    YUpdateNavigateInfoVar("replay_button", 15, 70);

    //Set info for back to main menu button
    YUpdateNavigateInfoVar("back_to_menu_button", 0, 55);
    YUpdateNavigateInfoVar("back_to_menu_button", 1, 185);
    YUpdateNavigateInfoVar("back_to_menu_button", 2, 103);
    YUpdateNavigateInfoVar("back_to_menu_button", 3, 40);
    YUpdateNavigateInfoVar("back_to_menu_button", 4, 143);
    YUpdateNavigateInfoVar("back_to_menu_button", 5, 78);
    YUpdateNavigateInfoVar("back_to_menu_button", 6, 255);
    YUpdateNavigateInfoVar("back_to_menu_button", 7, 255);
    YUpdateNavigateInfoVar("back_to_menu_button", 8, 255);
    YUpdateNavigateInfoVar("back_to_menu_button", 9, 255);
    YUpdateNavigateInfoVar("back_to_menu_button", 10, 255);
    YUpdateNavigateInfoVar("back_to_menu_button", 11, 255);
    YUpdateNavigateInfoVar("back_to_menu_button", 12, 512);
    YUpdateNavigateInfoVar("back_to_menu_button", 13, 816);
    YUpdateNavigateInfoVar("back_to_menu_button", 14, 255);
    YUpdateNavigateInfoVar("back_to_menu_button", 15, 70);

    //Set info for quit button
    YUpdateNavigateInfoVar("quit_button", 0, 248);
    YUpdateNavigateInfoVar("quit_button", 1, 180);
    YUpdateNavigateInfoVar("quit_button", 2, 34);
    YUpdateNavigateInfoVar("quit_button", 3, 217);
    YUpdateNavigateInfoVar("quit_button", 4, 157);
    YUpdateNavigateInfoVar("quit_button", 5, 28);
    YUpdateNavigateInfoVar("quit_button", 6, 255);
    YUpdateNavigateInfoVar("quit_button", 7, 255);
    YUpdateNavigateInfoVar("quit_button", 8, 255);
    YUpdateNavigateInfoVar("quit_button", 9, 0);
    YUpdateNavigateInfoVar("quit_button", 10, 0);
    YUpdateNavigateInfoVar("quit_button", 11, 0);
    YUpdateNavigateInfoVar("quit_button", 12, 792);
    YUpdateNavigateInfoVar("quit_button", 13, 816);
    YUpdateNavigateInfoVar("quit_button", 14, 255);
    YUpdateNavigateInfoVar("quit_button", 15, 70);
}

/* Draw error display based on error index
errorindex = 0, not enough letters, = 1, not in dictionary, = 2, repeat letters encountered */
void DrawErrorDisplay(int errorindex) {
    if (errorindex == 0) {
	    gfx_color(68, 108, 145); //Not enough letters popup
	    gfx_fillrectangle(0, 0, 1280, 70); // Rest button color
    	gfx_color(255, 255, 255);
        gfx_text(errordisplay_link_index_to_label[0], 530, 0.30*70, 4);
        gfx_flush();
        sleep(1.10);
	    gfx_color(253, 249, 227); //Redraws over the notice with a rectangle with the same size in the bg color
	    gfx_fillrectangle(0, 0, 1280, 70);
    }
    else if (errorindex == 1) {
        gfx_color(247, 199, 7); //Not in dictionary popup
	    gfx_fillrectangle(0, 0, 1280, 70); // Rest button color
        gfx_color(0, 0, 0);
        gfx_text(errordisplay_link_index_to_label[1], 535, 0.30*70, 4);
        gfx_flush();
        sleep(1.10);
	    gfx_color(253, 249, 227); //Redraws over the notice with a rectangle with the same size in the bg color
	    gfx_fillrectangle(0, 0, 1280, 70);
    }
    else if (errorindex == 2) {
        gfx_color(27, 107, 40); //Repeat letters popup
	    gfx_fillrectangle(0, 0, 1280, 70); // Rest button color
        gfx_color(255, 255, 255);
        gfx_text(errordisplay_link_index_to_label[errorindex], 430, 0.30*70, 4);
        gfx_flush();

        sleep(1.10);
	    gfx_color(253, 249, 227); //Redraws over the notice with a rectangle with the same size in the bg color
	    gfx_fillrectangle(0, 0, 1280, 70);
    }
}
