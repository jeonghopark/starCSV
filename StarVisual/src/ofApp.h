#pragma once

#include "ofMain.h"
#include "ofxiOS.h"
#include "ofxiOSExtras.h"

#include "ofxCsv.h"

using namespace wng;


class ofApp : public ofxiOSApp{
    
public:
    void setup();
    void update();
    void draw();
    void exit();
	
    void touchDown(ofTouchEventArgs & touch);
    void touchMoved(ofTouchEventArgs & touch);
    void touchUp(ofTouchEventArgs & touch);
    void touchDoubleTap(ofTouchEventArgs & touch);
    void touchCancelled(ofTouchEventArgs & touch);
    
    void lostFocus();
    void gotFocus();
    void gotMemoryWarning();
    void deviceOrientationChanged(int newOrientation);
    	
    ofxCsv csv;
    
    ofMesh starMesh;
    ofMesh starLineMesh;
    int countLine;
    
    ofEasyCam easyCam;
    
    void drawingCircle(int _degX);
    
    float rotY;
    
    float sinY;
    vector<float> zPositionFactor;

    
    // Audio Beispiele kommt von "audioInputExample"
    int bufferSize;
//    void audioIn(float * input, int bufferSize, int nChannels);
    
//    vector <float> inputBuffer;
    vector <float> volHistory;
    
    int 	bufferCounter;
    int 	drawCounter;
    
    float smoothedVol;
    float scaledVol;
    
    //    ofSoundStream soundStream;
	int	initialBufferSize;
	int	sampleRate;
    float * inputBuffer;
    int volNumHeight;

    
};
