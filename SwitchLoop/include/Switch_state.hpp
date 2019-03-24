#pragma once

class Switch_state
{
public:
    Switch_state();
    ~Switch_state() {}
    enum {Start=0, State1, State2, State3, End};
    
    int StartMethod();
    int EndMethod();

    int method1();
    int method2();
    int method3();

    void mainLoop(int state);
private:
    int control;
    int NowState;
    int NextState;

};

