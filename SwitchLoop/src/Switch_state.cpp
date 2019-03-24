#include <iostream>
#include "Switch_state.hpp"

Switch_state::Switch_state() {
    this->NowState = Start;
}

int Switch_state::StartMethod() {
    std::cout << "[Start] finish start method" << std::endl
            << "please input next state [number]" << std::endl
            << "please input control number" << std::endl;
    std::cin >> NextState >> this->control;
    if(NextState > End || NextState < Start)
        return -1;
    /**
     * Method
     */
    return NextState; 
}

int Switch_state::method1() {
    std::cout << "[Method1] finsh method1" << std::endl
            << "please input next state [number]" << std::endl;
    control ++;
    std::cin >> NextState ;
    if(NextState > End || NextState < Start)
        return -1;
    return NextState;
}
    
int Switch_state::method2() {
    std::cout << "[Method2] finsh method2" << std::endl
            << "please input next state [number]" << std::endl;
    control --;
    std::cin >> NextState ;
    if(NextState > End || NextState < Start)
        return -1;
    return NextState;
}
    
int Switch_state::method3() {
    std::cout << "[Method3] finsh method3" << std::endl
            << "please input next state [number]" << std::endl;
    control *= -1;
    std::cin >> NextState ;
    if(NextState > End || NextState < Start)
        return -1;
    return NextState;
}

int Switch_state::EndMethod() {
    std::cout << "[END] The result is " << this->control << std::endl;
    return -1;
}

void Switch_state::mainLoop(int state) {
    while (NowState != -1) {
        switch(NowState) {
        case Start:
            NowState = StartMethod();
            break;
        case State1:
            NowState = method1();
            break;
        case State2:
            NowState = method2();
            break;
        case State3:
            NowState = method3();
            break;
        case End:
            NowState = EndMethod();
            break;
        default:
            NowState = -1;
            break;
        }//end_switch
    }//end_while
}//end_mainLoop
