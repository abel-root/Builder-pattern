#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include <iostream>

class Computer{
    private:
        //un ordinateur pocède :
        std::string m_cpu;
        std::string m_ram;
        std::string m_storage;

        public:
            void setM_CPU(std::string & cpu);
            void setM_RAM(std::string & ram);
            void setM_Storage(std::string & storage);

            void display()const;


};





#endif //COMPUTER_H