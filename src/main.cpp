#include "director.hpp"
#include "macos.hpp"
#include "windowsComp.hpp"

int main(){
    Director director;
    MacOS macOsBuilder;
    WindowsComp windowsBuilder;

    director.constructor(macOsBuilder);
    Computer macOSComputer=macOsBuilder.getComputer();

    std::cout<<"MacOS : \n\n"<<std::endl;
    macOSComputer.display();

    director.constructor(windowsBuilder);
    Computer windowsComputer=windowsBuilder.getComputer();

    std::cout<<"Windows : \n\n"<<std::endl;
    windowsComputer.display();


    return 0;
}