#include <stdio.h>
#include <stdlib.h>



int main() {
 
 int d;
 
 printf("insira um valor de  1 a 7:\n");
 scanf("%d", &d);
  
 switch(d){
 	case 1:
 	 	   printf("domingo.\n");
 	 	   break;
 	case 2:
 	 	   printf("segunda-feira.\n");
 	 	   break;
 	case 3:
 	 	   printf("terca-feira.\n");
 	 	   break;
 	case 4:
 	 	   printf("quarta-feira.\n");
 	 	   break;
 	case 5:
 	 	   printf("quinta-feira.\n");
 	 	   break;
 	case 6:
 	 	   printf("sexta-feira.\n");
 	 	   break;
 	case 7:
 	 	   printf("sabado.\n");
 	 	   break; 
	default:
	        printf("valor invalido.\n");
			break;	 	   
 }
}
