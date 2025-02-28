#include "windowsComp.hpp"

void WindowsComp::buildCPU(){
    std::string cpu ="Windows CPU";
    m_computer.setM_CPU(cpu);
}

void WindowsComp::buildRAM(){
    std::string ram=" 16 GB";
    m_computer.setM_RAM(ram);
}

void WindowsComp::buildStorage(){
    std::string storage="1TB SSD";
    m_computer.setM_Storage(storage);
}

Computer WindowsComp::getComputer(){
    return m_computer;
}