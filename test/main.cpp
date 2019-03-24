#include <iostream>
#include "Switch_state.hpp"
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

int main()
{
    std::cout << "Hello world" << std::endl;
    ::boost::shared_ptr<Switch_state> m_stateMachine;
    m_stateMachine = ::boost::make_shared<Switch_state>();
    m_stateMachine -> mainLoop(0);
    return 0;
}