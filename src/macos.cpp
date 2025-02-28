#include "macos.hpp"

void MacOS::buildCPU(){
        std::string cpu="MacOS CPU";
        m_computer.setM_CPU(cpu); 
}

void MacOS::buildRAM(){
    std::string ram = "16GB DDR4";
    m_computer.setM_RAM(ram);
}

void MacOS::buildStorage(){
    std::string storage= "1TB SSD";
    m_computer.setM_Storage(storage);
}


Computer MacOS::getComputer(){
    return m_computer;
}