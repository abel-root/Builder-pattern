/**
 * Le builder pour construire des computers 
 *      construire : 
 *              - cpu
 *              - ram
 *              - storage
 */

#ifndef BUILDER_H
#define BUILDER_H
#include "computer.hpp"

class  Builder {
        public:
            virtual void buildCPU()=0 ;
            virtual void buildRAM()=0 ;
            virtual void buildStorage()=0;
            virtual Computer getComputer() =0; //or Computer getResult()
};



#endif // BUILDER_H