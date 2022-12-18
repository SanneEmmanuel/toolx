#include <iostream>
#define sizeOfVariables 10
#define printInfo std::cout<<"Working with toolx \nversion 1.01\nCopyright 2022, Sanne Karibo\nFor the gowth of tech\n"
#define changeDirectory system("cd c:\\users\\%username%\\desktop")
 void backup(){
 std::cout<<"Main function is copying all installed program\n";
 system("@echo off && cd c:\\users\\%username%\\desktop && echo toolx install > install_Apps.bat && echo pause  >> install_Apps.bat");
 system("robocopy \"c:\\Program Files\" \"c:\\windows.old\\Program Files\" /xx /mir && pause");
 };
 void reinstall(){
 std::cout<<"Reinstalling formerly installed apps back to new windows\n";
 system("robocopy \"c:\\windows.old\\Program Files\" \"c:\\Program Files\" /xx /mir && pause");
}
int main(int a,char** arg){

    /**********CONSTANTS*********/
    std::string inputStatement,
    variable[sizeOfVariables];
    /****************************/
    variable[0]="backup";
    variable[1]="install";
//====================================//
for(int x=0; x<sizeOfVariables;x++)
if(arg[1]==variable[x])
    if(!x)backup();
    else if(x)reinstall();
     //----------------------second
//=====================================//
    return 0;
}
