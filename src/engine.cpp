
#include "engine.h"
#include <iostream>
#include <string>


// Constructors:
RandomEngine::RandomEngine(uint8_t l){
    charSet.resize(l);
}

RandomEngine::RandomEngine(bool s){
// definitions of the RandomEngine class here
// Constructors:
RandomEngine::RandomEngine(uint8_t l){
    
}

RandomEngine::RandomEngine(bool s){
  
}

RandomEngine::RandomEngine(uint8_t l, bool s){
    
}


//  functions
void RandomEngine::setLength(uint8_t l){
    length = l;
}

uint8_t RandomEngine::getLength(){
    return length;
}

void RandomEngine::setSymbolSet(bool s){
    symbl = s;
}

bool RandomEngine::getSymbolSetStatus(){
    return symbl;
}

std::string RandomEngine::getString(){
    // returning any dummy string
    return password;
}