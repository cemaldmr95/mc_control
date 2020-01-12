#include "clarke.h"
#include"math.h"


int get_clarke( int phase_a, int  phase_b, int phase_c, int teta, int* alpha, int* beta ){
    *alpha = phase_a;
    *beta = -phase_a*(1/sqrt(3)) + 2*phase_b*(1/sqrt(3));
    if(phase_a>MAX_PHASE){
    return OUTOFPHASE;
    }
    if(phase_b>MAX_PHASE){
    return OUTOFPHASE;
    }
    if(phase_c>MAX_PHASE){
    return OUTOFPHASE;
    }
    if(phase_a<MIN_PHASE){
    return OUTOFPHASE;
    }
    if(phase_b<MIN_PHASE){
    return OUTOFPHASE;
    }
    if(phase_c<MIN_PHASE){
    return OUTOFPHASE;
    }

    return NO_ERROR;
}
