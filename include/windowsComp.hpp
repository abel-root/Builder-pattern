#ifndef WINDOWSCOMP_H
#define WINDOWSCOMP_H

#include "builder.hpp"

class WindowsComp:public Builder{

    private:
        Computer m_computer;
    public:
         void buildCPU() override;
         void buildRAM() override;
         void buildStorage() override;
         Computer getComputer() override;
};




#endif // WINDOWSCOMP_H