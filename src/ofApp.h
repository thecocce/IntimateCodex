#pragma once

#include "ofMain.h"
#include "Word.h"
#include "TextInput.h"
#include "Background.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    void checkInput(string input);
    void setWordsFromLine(string line);
    
    void readInText(string filename, bool clearText, bool playSound);
    vector<string> getLinesWithSameWord(string targetWord, string lineToIgnore);
    string toLowerCase(string input);
    
    void loadAllText();
    void loadRandomText();
    
    //timing
    float prevFrameTime;
    float deltaTime;
    
    //holding all of our text
    vector<string> fullText, fullTextLower;
    
    //showing the screen
    ofTrueTypeFont font, fontInput;
    string curLine;
    vector<Word> curWords;
    
    //enterring text
    TextInput textInput;
    char delim, delim2;
    
    //backgorund
    Background background;
    
    //sounds
    vector<ofSoundPlayer> whooshSounds;
    ofSoundPlayer bgSound;
    ofSoundPlayer loadDing;
};