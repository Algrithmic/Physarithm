#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <cstdint>

#include "Core/Window.hpp"
#include "Simulation/Physarum.hpp"


namespace Core {
    enum class State {
        UNINITIALIZED = 0,
        INITIALIZED,
        RUNNING,
        PAUSED
    };

    class Application {
    private:
        State  m_state;
        Window m_window;
        Simulation::Physarum m_physarum;
            
    public:
        Application();
        void run(void);

        State getState(void) const  { return m_state;  }
        void  setState(State state) { m_state = state; }
    };
}
#endif