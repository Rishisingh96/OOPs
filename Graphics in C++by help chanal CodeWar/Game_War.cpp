#include<iostream>
#include<graphics>
#include<Game.h>
using namespace std;
const int FPS = 60;
const int DELAY_TIME = 1000.0f/FPS;

int main(int argc,char* args[]){
    Uint32 frameStart, frameTime;
    cout<<"RISHI GAME"<<endl;
    cout<<"Game initialization attempt..."<<endl;
    if(TheGame::Instance()->init("RISHI - Break the Bricks",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,400,600,SDL_WINDOW_SHOWN))
    {
        cout<<"Game initialization success!"<<endl;
        while(TheGame :: Instance() ->running()){
            TheGame::Instance() ->handleEvent();
            TheGame::Instance() ->update();
            TheGame::Instance() ->render();

            frameTime = SDL_GetTicks(). frameStart;
            if(frameTime < DELAY_TIME){
                SDL_Delay((int)(DELAY_TIME - frameTime));
            }
        }
    }
    else{
        cout<<"Game initialization failure!"<<SDL_GetError()<<endl;
        return 0;
    }
}