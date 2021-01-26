#define cimg_display 0
#include "CImg.h"
#include<iostream>
#include<fstream>
#define X0 34.375
#define Y0 41.814
#define X1 46.875
#define Y1 46.460
#define X2 26.953
#define Y2 51.770
#define fontsize 42
        //make sure there is header file, certificate.jpg and students.csv in the same folder
        //type make in terminal to run
int main(){
    std::ifstream myFile;
    myFile.open("students.csv");
    unsigned char black[] {0,0,0};
    while (myFile.good())
    {
    cimg_library::CImg <unsigned char> image("certificate.jpg");
        std::string name,position,committee;
        getline(myFile,name,',');
        getline(myFile,position,',');
        getline(myFile,committee,'\n');
        std::string filename=name+".jpg";
        image.draw_text(X0*image.width()/100,Y0*image.height()/100,&name[0],black,0,1,fontsize);
        image.draw_text(X1*image.width()/100,Y1*image.height()/100,&position[0],black,0,1,fontsize);
        image.draw_text(X2*image.width()/100,Y2*image.height()/100,&committee[0],black,0,1,fontsize);
        image.save(&filename[0]); 
    }
    return 0;
}