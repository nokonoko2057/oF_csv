#include "ofApp.h"

/*
 
 how to use vector
 http://yoppa.org/ma2_10/2032.html
 
 <<< addons >>>
 ofxCsv: https://github.com/paulvollmer/ofxCsv

*/





//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 'n'){
        printf("new files\n");
        
        filename = createFileName();
        
        csv.createFile(filename);

    }
    
    if (key == 's'){
        
    
        csv.load(filename);
        
        ofxCsvRow row;
        
        row.addInt(ofGetHours());
        row.addInt(ofGetMinutes());
        row.addInt(ofGetSeconds());
        row.addInt(ofGetElapsedTimeMillis());
        row.addInt(1);

        csv.addRow(row);
        
        csv.save();

    }
    
    if (key == 'r'){
        csv.load(filename);
        vector<ofxCsvRow> x;
        x = csv.getData();
        //x.at(4);
    
        std::cout << "row_count: " << x.size() << endl;
        std::cout << "row_Data: " << x[1] << endl;
        std::cout << "row_Data[2]: " << x[1][2] << endl;
    }

}


string ofApp::createFileName(){
    string fileName;
    fileName = "data";
    fileName += ofToString(ofGetYear());
    fileName += ofToString(ofGetMonth());
    fileName += ofToString(ofGetDay());
    fileName += ofToString(ofGetHours());
    fileName += ofToString(ofGetMinutes());
    fileName += ofToString(ofGetSeconds());
    fileName += ".csv";
    
    return fileName;

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
