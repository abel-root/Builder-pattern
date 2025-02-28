#include "computer.hpp"

void Computer::setM_CPU(std::string & cpu){
    this->m_cpu=cpu; 
}

void Computer::setM_RAM(std::string & ram){
    this->m_ram =ram;
}

void Computer::setM_Storage(std::string & storage){
    this->m_storage = storage;
}

void Computer::display() const {
    std::cout << "Computer Configuration:"
    << "\nCPU: " << this->m_cpu
    << "\nRAM: " << this->m_ram
    << "\nStorage: " << this->m_storage << "\n\n";
}