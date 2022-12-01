/* funcao.h */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "conio2.h"

void ti() {
	int i;
	
	srand(time(NULL));
	for(i=0;i<24; i++){	
		Sleep(20);
		textcolor(1+(rand() % 10));
    	gotoxy(1,i);
		printf("SOU DO TI");
	}
}
void bv() {
	int i, j;
	
	srand(time(NULL));
	for(j=1;j<9;j++){
		for(i=0;i<24; i++){
			Sleep(20);
			textcolor(1+(rand() % 10));
    		gotoxy(j*8+1,i);
			printf("BEM VINDO");
		}	
	}
}

void crm(){
	int i, y, col, lin;
	
	for(i=0;i<5;i++){
		if(i==0){
			textcolor(14);
		}
		if(i==1){
			textcolor(5);
		}
		if(i==3){
			textcolor(2);
		}
		if(i==4){
			textcolor(12);
		}
		if(i==2){
			textcolor(15);
		}
	//Coração central
	 gotoxy(40,5);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(39,4);
	 printf("<3");
	 gotoxy(41,4); 
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20); 
	 
	 gotoxy(38,3);
	printf("<3");
	 gotoxy(42,3);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(37,3);
	 printf("<3");
	 gotoxy(43,3);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(36,3);
	 printf("<3");
	 gotoxy(44,3);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(35,4);
	 printf("<3");
	 gotoxy(45,4);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(34,5);
	 printf("<3");
	 gotoxy(46,5);
	 printf("<3");
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(34,6);
	 printf("<3");
	 gotoxy(46,6);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(34,7);
	printf("<3");
	 gotoxy(46,7);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(35,8);
	 printf("<3");
	 gotoxy(45,8);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(36,9);
	 printf("<3");
	 gotoxy(44,9);
	 printf("<3");
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(37,10);
	 printf("<3");
	 gotoxy(43,10);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(38,11);
	 printf("<3");
	 gotoxy(42,11);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(39,12);
	 printf("<3");
	 gotoxy(41,12);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 gotoxy(40,13);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 
	  //      TODOS
	  
	  
	 //1a linha
	 gotoxy(20,5);
	 printf("<3"); 
	 gotoxy(60,5);
	 printf("<3"); 
	 gotoxy(30,15);
	 printf("<3"); 
	 gotoxy(50,15);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 //2a linha
	 
	 gotoxy(19,4);
	 printf("<3");
	 gotoxy(21,4); 
	 printf("<3"); 
	 gotoxy(59,4);
	 printf("<3");
	 gotoxy(61,4); 
	 printf("<3"); 
	 gotoxy(49,14);
	 printf("<3");
	 gotoxy(51,14); 
	 printf("<3");  
	 gotoxy(29,14);
	 printf("<3");
	 gotoxy(31,14); 
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20); 
	 
	 
	 //3a linha
	 
	 gotoxy(18,3);
	 printf("<3");
	 gotoxy(22,3);
	 printf("<3"); 
	 gotoxy(58,3);
	 printf("<3");
	 gotoxy(62,3);
	 printf("<3"); 
	 gotoxy(28,13);
	 printf("<3");
	 gotoxy(32,13);
	 printf("<3"); 
	 gotoxy(48,13);
	 printf("<3");
	 gotoxy(52,13);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 //4a linha 
	 
	 gotoxy(17,3);
	 printf("<3");
	 gotoxy(23,3);
	 printf("<3"); 
	 gotoxy(57,3);
	 printf("<3");
	 gotoxy(63,3);
	 printf("<3"); 
	 gotoxy(27,13);
	 printf("<3");
	 gotoxy(33,13);
	 printf("<3"); 
	 gotoxy(47,13);
	 printf("<3");
	 gotoxy(53,13);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 //5a linha
	 
	 gotoxy(16,3);
	 printf("<3");
	 gotoxy(24,3);
	 printf("<3"); 
	 gotoxy(56,3);
	 printf("<3");
	 gotoxy(64,3);
	 printf("<3"); 
	 gotoxy(26,13);
	 printf("<3");
	 gotoxy(34,13);
	 printf("<3"); 
	 gotoxy(46,13);
	 printf("<3");
	 gotoxy(54,13);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 
	 
	 //6a linha
	 
	 gotoxy(15,4);
	 printf("<3");
	 gotoxy(25,4);
	 printf("<3"); 
	 gotoxy(55,4);
	 printf("<3");
	 gotoxy(65,4);
	 printf("<3"); 
	 gotoxy(25,14);
	 printf("<3");
	 gotoxy(35,14);
	 printf("<3"); 
	 gotoxy(45,14);
	 printf("<3");
	 gotoxy(55,14);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 
	 //7a linha
	 gotoxy(14,5);
	 printf("<3");
	 gotoxy(26,5);
	 printf("<3"); 
	 gotoxy(54,5);
	 printf("<3");
	 gotoxy(66,5);
	 printf("<3"); 
	 gotoxy(24,15);
	 printf("<3");
	 gotoxy(36,15);
	 printf("<3"); 
	 gotoxy(44,15);
	 printf("<3");
	 gotoxy(56,15);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 
	 //8a linha
	 gotoxy(14,6);
	 printf("<3");
	 gotoxy(26,6);
	 printf("<3"); 
	 gotoxy(54,6);
	 printf("<3");
	 gotoxy(66,6);
	 printf("<3"); 
	 gotoxy(24,16);
	 printf("<3");
	 gotoxy(36,16);
	 printf("<3"); 
	 gotoxy(44,16);
	 printf("<3");
	 gotoxy(56,16);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 
	 //9a linha 
	 gotoxy(14,7);
	 printf("<3");
	 gotoxy(26,7);
	 printf("<3"); 
	 gotoxy(54,7);
	 printf("<3");
	 gotoxy(66,7);
	 printf("<3");
	 gotoxy(24,17);
	 printf("<3");
	 gotoxy(36,17);
	 printf("<3"); 
	 gotoxy(44,17);
	 printf("<3");
	 gotoxy(56,17);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 //10a linha 
	 gotoxy(15,8);
	 printf("<3");
	 gotoxy(25,8);
	 printf("<3"); 
	 gotoxy(55,8);
	 printf("<3");
	 gotoxy(65,8);
	 printf("<3"); 
	 gotoxy(25,18);
	 printf("<3");
	 gotoxy(35,18);
	 printf("<3"); 
	 gotoxy(45,18);
	 printf("<3");
	 gotoxy(55,18);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 
	 //11a linha
	 gotoxy(16,9);
	 printf("<3");
	 gotoxy(24,9);
	 printf("<3"); 
	 gotoxy(56,9);
	 printf("<3");
	 gotoxy(64,9);
	 printf("<3"); 
	 gotoxy(26,19);
	 printf("<3");
	 gotoxy(34,19);
	 printf("<3"); 
	 gotoxy(46,19);
	 printf("<3");
	 gotoxy(54,19);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 //12a linha 
	 gotoxy(17,10);
	 printf("<3");
	 gotoxy(23,10);
	 printf("<3"); 
	 gotoxy(57,10);
	 printf("<3");
	 gotoxy(63,10);
	 printf("<3"); 
	 gotoxy(27,20);
	 printf("<3");
	 gotoxy(33,20);
	 printf("<3"); 
	 gotoxy(47,20);
	 printf("<3");
	 gotoxy(53,20);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 //13a linha 
	 gotoxy(18,11);
	 printf("<3");
	 gotoxy(22,11);
	 printf("<3"); 
	 gotoxy(58,11);
	 printf("<3");
	 gotoxy(62,11);
	 printf("<3"); 
	 gotoxy(28,21);
	 printf("<3");
	 gotoxy(32,21);
	 printf("<3"); 
	 gotoxy(48,21);
	 printf("<3");
	 gotoxy(52,21);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 
	 //14a linha
	  
	 gotoxy(19,12);
	 printf("<3");
	 gotoxy(21,12);
	 printf("<3"); 
	 gotoxy(59,12);
	 printf("<3");
	 gotoxy(61,12);
	 printf("<3"); 
	 gotoxy(29,22);
	 printf("<3");
	 gotoxy(31,22);
	 printf("<3"); 
	 gotoxy(49,22);
	 printf("<3");
	 gotoxy(51,22);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 
	 //15a linha
	 
	 gotoxy(20,13);
	 printf("<3"); 
	 gotoxy(60,13);
	 printf("<3"); 
	 gotoxy(30,23);
	 printf("<3"); 
	 gotoxy(50,23);
	 printf("<3"); 
	 gotoxy(1,1);   Sleep (20);
	}
	
	col= 40;  //posicao do fim do coraçao principal
	lin= 13;  //posicao do fim do coraçao principal
	 
	//coraçao central
	 gotoxy(col-1,lin-1);                            
	 printf("<3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 gotoxy(col-2,lin-2);                             
	 printf("<3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 gotoxy(col-3,lin-3);                             
	printf("<3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 gotoxy(col-4,lin-4);                             
	printf("<3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 gotoxy(col-5,lin-5);                             
	 printf("<3 <3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 gotoxy(col-6,lin-6);                             
	 printf("<3 <3 <3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 gotoxy(col-6,lin-7);                            
	 printf("<3 <3 <3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 gotoxy(col-6,lin-8);                              
	 printf("<3 <3 <3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 gotoxy(col-5,lin-9);                            
	printf("<3 <3 <3 <3");
	 gotoxy(col+1,lin-9);                             
	printf("<3 <3 <3 <3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 
	 // OUTROS 
	 gotoxy(col-1-20,lin-1);                    
	 printf("<3 <3 <3");
	 gotoxy(col-1+20,lin-1);                    
	 printf("<3 <3 <3");
	  gotoxy(col-1-10,lin-1+10);               
	 printf("<3 <3 <3");
	  gotoxy(col-1+10,lin-1+10);                  
	 printf("<3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 gotoxy(col-2-20,lin-2);                    
	printf("<3 <3 <3 <3");
	  gotoxy(col-2+20,lin-2);                   
	printf("<3 <3 <3 <3");
	  gotoxy(col-2-10,lin-2+10);                  
	printf("<3 <3 <3 <3");
	  gotoxy(col-2+10,lin-2+10);                  
	printf("<3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 gotoxy(col-3-20,lin-3);                     
	printf("<3 <3 <3 <3 <3");
	  gotoxy(col-3+20,lin-3);                      
	printf("<3 <3 <3 <3 <3");
	  gotoxy(col-3-10,lin-3+10);                    
	printf("<3 <3 <3 <3 <3");
	  gotoxy(col-3+10,lin-3+10);                  
	printf("<3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 gotoxy(col-4-20,lin-4);                      
	printf("<3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-4+20,lin-4);                     
	printf("<3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-4-10,lin-4+10);                    
	printf("<3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-4+10,lin-4+10);                   
	printf("<3 <3 <3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 gotoxy(col-5-20,lin-5);                      
	 printf("<3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-5+20,lin-5);                        
	 printf("<3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-5-10,lin-5+10);                     
	 printf("<3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-5+10,lin-5+10);                    
	 printf("<3 <3 <3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 gotoxy(col-6-20,lin-6);                      
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-6+20,lin-6);                        
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-6-10,lin-6+10);                     
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-6+10,lin-6+10);                    
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 gotoxy(col-6-20,lin-7);                        
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-6+20,lin-7);                        
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-6-10,lin-7+10);                      
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-6+10,lin-7+10);                 
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 gotoxy(col-6-20,lin-8);                        
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-6+20,lin-8);                        
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-6-10,lin-8+10);                     
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	  gotoxy(col-6+10,lin-8+10);                    
	 printf("<3 <3 <3 <3 <3 <3 <3 <3 <3");
	 gotoxy(1,1);   Sleep (20);
	 
	 
	 gotoxy(col-5-20,lin-9);                       
	printf("<3 <3 <3 <3");
	 gotoxy(col-5+20,lin-9);                      
	printf("<3 <3 <3 <3");
	 gotoxy(col+1+20,lin-9);                      
	printf("<3 <3 <3 <3"); 
	 gotoxy(col-5-10,lin-9+10);                      
	printf("<3 <3 <3 <3");
	 gotoxy(col+1-10,lin-9+10);                     
	printf("<3 <3 <3 <3");
	 gotoxy(col-5+10,lin-9+10);                    
	printf("<3 <3 <3 <3");
	 gotoxy(col+1+10,lin-9+10);                    
	printf("<3 <3 <3 <3"); 
	 gotoxy(col+1-20,lin-9);                        
	printf("<3 <3 <3 <3"); 
	 gotoxy(1,1);   Sleep (20);
	 
	  textcolor(5);
	  gotoxy(36,7); printf("<3 <3 <3 <3 <3 <3 <3"); gotoxy(1,1);  Sleep(500);
	

	for(y=10;y<14;y++){
		textcolor(y);
		gotoxy(36,7); printf("PROGRAMAR É BOM");  
		gotoxy(16,7); printf("PROGRAMAR É BOM"); 
		gotoxy(56,7); printf("PROGRAMAR É BOM"); 
		gotoxy(26,17); printf("PROGRAMAR É BOM");  
		gotoxy(46,17); printf("PROGRAMAR É BOM"); gotoxy(1,1);  Sleep(500); 
  
		textcolor(y);
		gotoxy(36,7); printf(" FUTURO ");  
		gotoxy(16,7); printf(" FUTURO ");  
		gotoxy(56,7); printf(" FUTURO ");  
		gotoxy(26,17); printf(" FUTURO ");   
		gotoxy(46,17); printf(" FUTURO ");  gotoxy(1,1);  Sleep(500);
	}
}

