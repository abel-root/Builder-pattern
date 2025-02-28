#include "director.hpp"

void Director::constructor(Builder& builder){
        builder.buildCPU();
        builder.buildRAM();
        builder.buildStorage();
}