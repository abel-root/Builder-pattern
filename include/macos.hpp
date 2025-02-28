#ifndef MACOS_H
#define MACOS_H

#include "builder.hpp"

    class MacOS : public Builder{
            public:
                 void buildCPU() override;
                 void buildRAM() override;
                 void buildStorage() override;
                 Computer getComputer() override;
            private:
                Computer m_computer;

    };



#endif //MACOS_H