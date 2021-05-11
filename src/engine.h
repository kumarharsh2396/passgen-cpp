// Define this class here.

#include <stdint.h>
#include <string>

class RandomEngine {
    
    public:
        uint8_t length =0;
        bool symbl =false;
        std::string password = "";
    
    // Constructors:
        RandomEngine(uint8_t l); 
        RandomEngine(bool s); 
        RandomEngine(uint8_t l, bool s); 

    // functions:
        void setLength(uint8_t);
        void setSymbolSet(bool);
        std::string getString(); 
        uint8_t getLength();  
        bool getSymbolSetStatus();  


};