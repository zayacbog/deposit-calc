#include <stdio.h>
#include "deposit.h"

void getInput(int* term, float* sum) {
    if (*term < 0 || *term > 365 || *sum<1000) {
        getInput(term, sum);
    }
}

void calcul(int* term, float* sum, float* revenue) {
	float income;
    
    if (*term<=30) {
	 	income =- *sum/10;
	}
		
	if (*sum<=100000){
		if ((*term>30) && (*term<121)){
			income=*sum/50;
		}
		if ((*term>120) && (*term<241)){
			income=(*sum/50)*3;
		} 
		if ((*term>240) && (*term<366)){
			income=(*sum/50)*6;
		}
	} else
	 
	if (*sum>100000){
	        if ((*term>30) && (*term<121)){
				income=(*sum/100)*3;
			}
			if ((*term>120) && (*term<241)){
				income=(*sum/50)*4;
			} 
			if ((*term>240) && (*term<366)){
				income=(*sum/20)*3;
			} 
	}
    *revenue=*sum+income;   	
}
