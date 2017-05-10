#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(){
	
	int term;
	float income, pay, sum; 
	
	printf ("Vvedite summu vklada: ");
	 scanf("%f", &sum);
	printf ("Vvedite srok vklada: ");
	 scanf("%d", &term);
	if ((term>=0) && (term<=365) && (sum>=10000)){
	 	
		 if (term<=30) {
	 		income=-sum/10;
		 }
		
		if (sum<=100000){
			
			if ((term>30) && (term<121)){
				income=sum/50;
			}
			if ((term>120) && (term<241)){
				income=(sum/50)*3;
			} 
			if ((term>240) && (term<366)){
				income=(sum/50)*6;
			}
	    }
		else if (sum>100000){
	    	
			if ((term>30) && (term<121)){
				income=(sum/100)*3;
			}
			if ((term>120) && (term<241)){
				income=(sum/50)*4;
			} 
			if ((term>240) && (term<366)){
				income=(sum/20)*3;
			} 
		}
	  
	  pay=sum+income;
	  
	  printf("\nSumma v konce sroka: %.2f", pay);
	  printf("\nDohod: %.2f", income);
	  
     }
     else printf("\nVvedennie dannie ne verny!");
     
     return 0;
}
