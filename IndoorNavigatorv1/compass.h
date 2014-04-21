#include "HMC6352.h"
#include "boebot.h"

class compass{    
    public: 
        
        compass();
        ~compass();
        int getPos();
        int gotoPos(int final_Pos);

};