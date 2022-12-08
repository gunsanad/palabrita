#include <stdio.h>
#include "gfx_mod.h"
#include <unistd.h>

void bravo();
void movebravo();
void moveover();
void movegame();
void text();
void text2();
void palabrita_hort(int x, int y, int i);

int ysize = 960;
int xsize = 1280;
int size = 20; 
int xcord, ycord = 180;
int velocity;

//Function to move 'BRAVO'
void movebravo() {
	velocity=15000;
	xcord = xsize/2 - (9*6*size/2);
	ycord = 0-(9*size);
	do {
		gfx_color(245, 232, 159);
		gfx_fillrectangle(xcord,ycord,6*9*size,9*size);
		gfx_flush();
		ycord = ycord+1;
		gfx_color(255,0,0);
		bravo();
		gfx_flush();
		usleep(velocity);
		//xcord = xcord+1;
		velocity=velocity/1.0035; }
	while(ycord!=271);
}

//Function to move 'GAME'
void movegame(){
	velocity=15600;
	xcord = 0 - (9*4*size);
	ycord = 150;
	do{	
		gfx_color(245, 232, 159);
		gfx_fillrectangle(xcord,ycord,9*4*size-size,size*9);
		gfx_flush();
		gfx_color(255,0,0);
		text();
		gfx_flush();
		usleep(velocity);
		velocity=velocity/1.35;
		xcord = xcord+1;
	}
	while(xcord!= xsize/2 - (9*4*size/2));
}

//Function to move 'OVER'
void moveover(){
	velocity = 15000;
	xcord = 1280 + (9*4*size);
	ycord = 150;
	do {
		gfx_color(245, 232, 159);
		gfx_fillrectangle(xcord,ycord+size*10,9*4*size-size,size*9);
		gfx_flush();
		gfx_color(255,0,0);
		text2();
		gfx_flush();
		usleep(velocity);
		velocity=velocity/1.35;
		xcord = xcord-1;
	}
	while(xcord!= xsize/2 - (9*4*size/2));
}

//Text for 'BRAVO!!'
void bravo() {
	
	gfx_fillrectangle(xcord+size*0, ycord+size*0, size*54, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*1, size*1, size);
	gfx_fillrectangle(xcord+size*6, ycord+size*1, size*4, size);
	gfx_fillrectangle(xcord+size*16, ycord+size*1, size*4, size);
	gfx_fillrectangle(xcord+size*25, ycord+size*1, size*3, size);
	gfx_fillrectangle(xcord+size*30, ycord+size*1, size*3, size);
	gfx_fillrectangle(xcord+size*35, ycord+size*1, size*3, size);
	gfx_fillrectangle(xcord+size*43, ycord+size*1, size*3, size);
	gfx_fillrectangle(xcord+size*48, ycord+size*1, size*2, size);
	gfx_fillrectangle(xcord+size*52, ycord+size*1, size*2, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*2, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*2, size*2, size);
	gfx_fillrectangle(xcord+size*7, ycord+size*2, size*3, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*2, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*2, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*2, size*3, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*2, size*2, size);
	gfx_fillrectangle(xcord+size*30, ycord+size*2, size*3, size);
	gfx_fillrectangle(xcord+size*35, ycord+size*2, size*2, size);
	gfx_fillrectangle(xcord+size*39, ycord+size*2, size*3, size);
	gfx_fillrectangle(xcord+size*44, ycord+size*2, size*2, size);
	gfx_fillrectangle(xcord+size*48, ycord+size*2, size*2, size);
	gfx_fillrectangle(xcord+size*52, ycord+size*2, size*2, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*3, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*3, size*2, size);
	gfx_fillrectangle(xcord+size*7, ycord+size*3, size*3, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*3, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*3, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*3, size*3, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*3, size*2, size);
	gfx_fillrectangle(xcord+size*30, ycord+size*3, size*3, size);
	gfx_fillrectangle(xcord+size*35, ycord+size*3, size*2, size);
	gfx_fillrectangle(xcord+size*39, ycord+size*3, size*3, size);
	gfx_fillrectangle(xcord+size*44, ycord+size*3, size*2, size);
	gfx_fillrectangle(xcord+size*48, ycord+size*3, size*2, size);
	gfx_fillrectangle(xcord+size*52, ycord+size*3, size*2, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*4, size*1, size);
	gfx_fillrectangle(xcord+size*7, ycord+size*4, size*3, size);
	gfx_fillrectangle(xcord+size*16, ycord+size*4, size*3, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*4, size*3, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*4, size*2, size);
	gfx_fillrectangle(xcord+size*31, ycord+size*4, size*1, size);
	gfx_fillrectangle(xcord+size*35, ycord+size*4, size*2, size);
	gfx_fillrectangle(xcord+size*39, ycord+size*4, size*3, size);
	gfx_fillrectangle(xcord+size*44, ycord+size*4, size*2, size);
	gfx_fillrectangle(xcord+size*48, ycord+size*4, size*2, size);
	gfx_fillrectangle(xcord+size*52, ycord+size*4, size*2, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*5, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*5, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*5, size*2, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*5, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*5, size*2, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*5, size*3, size);
	gfx_fillrectangle(xcord+size*34, ycord+size*5, size*3, size);
	gfx_fillrectangle(xcord+size*39, ycord+size*5, size*3, size);
	gfx_fillrectangle(xcord+size*44, ycord+size*5, size*2, size);
	gfx_fillrectangle(xcord+size*48, ycord+size*5, size*2, size);
	gfx_fillrectangle(xcord+size*52, ycord+size*5, size*2, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*6, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*6, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*6, size*2, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*6, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*6, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*6, size*3, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*6, size*4, size);
	gfx_fillrectangle(xcord+size*33, ycord+size*6, size*4, size);
	gfx_fillrectangle(xcord+size*39, ycord+size*6, size*3, size);
	gfx_fillrectangle(xcord+size*44, ycord+size*6, size*10, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*7, size*1, size);
	gfx_fillrectangle(xcord+size*7, ycord+size*7, size*3, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*7, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*7, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*7, size*3, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*7, size*5, size);
	gfx_fillrectangle(xcord+size*32, ycord+size*7, size*6, size);
	gfx_fillrectangle(xcord+size*43, ycord+size*7, size*3, size);
	gfx_fillrectangle(xcord+size*48, ycord+size*7, size*2, size);
	gfx_fillrectangle(xcord+size*52, ycord+size*7, size*2, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*8, size*54, size);
}

//Text for 'GAME'
void text(){

	gfx_fillrectangle(xcord, ycord, size*35, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*1, size*2, size);
	gfx_fillrectangle(xcord+size*7, ycord+size*1, size*4, size);
	gfx_fillrectangle(xcord+size*16, ycord+size*1, size*3, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*1, size*3, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*1, size*2, size);
	gfx_fillrectangle(xcord+size*34, ycord+size*1, size*1, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*2, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*2, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*2, size*2, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*2, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*2, size*2, size);
	gfx_fillrectangle(xcord+size*22, ycord+size*2, size*1, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*2, size*2, size);
	gfx_fillrectangle(xcord+size*30, ycord+size*2, size*5, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*3, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*3, size*7, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*3, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*3, size*2, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*3, size*2, size);
	gfx_fillrectangle(xcord+size*30, ycord+size*3, size*5, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*4, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*4, size*2, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*4, size*2, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*4, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*4, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*4, size*1, size);
	gfx_fillrectangle(xcord+size*23, ycord+size*4, size*1, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*4, size*2, size);
	gfx_fillrectangle(xcord+size*34, ycord+size*4, size*1, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*5, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*5, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*5, size*2, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*5, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*5, size*3, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*5, size*2, size);
	gfx_fillrectangle(xcord+size*30, ycord+size*5, size*5, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*6, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*6, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*6, size*2, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*6, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*6, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*6, size*3, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*6, size*2, size);
	gfx_fillrectangle(xcord+size*30, ycord+size*6, size*5, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*7, size*2, size);
	gfx_fillrectangle(xcord+size*6, ycord+size*7, size*1, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*7, size*2, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*7, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*7, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*7, size*3, size);
	gfx_fillrectangle(xcord+size*26, ycord+size*7, size*2, size);
	gfx_fillrectangle(xcord+size*34, ycord+size*7, size*1, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*8, size*35, size);
}

//Text for 'OVER'
void text2(){
	gfx_fillrectangle(xcord+size*0, ycord+size*10, size*35, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*11, size*2, size);
	gfx_fillrectangle(xcord+size*7, ycord+size*11, size*3, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*11, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*11, size*2, size);
	gfx_fillrectangle(xcord+size*25, ycord+size*11, size*2, size);
	gfx_fillrectangle(xcord+size*33, ycord+size*11, size*2, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*12, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*12, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*12, size*2, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*12, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*12, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*12, size*6, size);
	gfx_fillrectangle(xcord+size*29, ycord+size*12, size*3, size);
	gfx_fillrectangle(xcord+size*34, ycord+size*12, size*1, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*13, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*13, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*13, size*2, size);
	gfx_fillrectangle(xcord+size*12, ycord+size*13, size*3, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*13, size*2, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*13, size*6, size);
	gfx_fillrectangle(xcord+size*29, ycord+size*13, size*3, size);
	gfx_fillrectangle(xcord+size*34, ycord+size*13, size*1, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*14, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*14, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*14, size*2, size);
	gfx_fillrectangle(xcord+size*13, ycord+size*14, size*1, size);
	gfx_fillrectangle(xcord+size*17, ycord+size*14, size*2, size);
	gfx_fillrectangle(xcord+size*25, ycord+size*14, size*2, size);
	gfx_fillrectangle(xcord+size*33, ycord+size*14, size*2, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*15, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*15, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*15, size*3, size);
	gfx_fillrectangle(xcord+size*16, ycord+size*15, size*3, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*15, size*6, size);
	gfx_fillrectangle(xcord+size*29, ycord+size*15, size*3, size);
	gfx_fillrectangle(xcord+size*34, ycord+size*15, size*1, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*16, size*1, size);
	gfx_fillrectangle(xcord+size*3, ycord+size*16, size*3, size);
	gfx_fillrectangle(xcord+size*8, ycord+size*16, size*4, size);
	gfx_fillrectangle(xcord+size*15, ycord+size*16, size*4, size);
	gfx_fillrectangle(xcord+size*21, ycord+size*16, size*6, size);
	gfx_fillrectangle(xcord+size*29, ycord+size*16, size*3, size);
	gfx_fillrectangle(xcord+size*34, ycord+size*16, size*1, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*17, size*2, size);
	gfx_fillrectangle(xcord+size*7, ycord+size*17, size*6, size);
	gfx_fillrectangle(xcord+size*14, ycord+size*17, size*5, size);
	gfx_fillrectangle(xcord+size*25, ycord+size*17, size*2, size);
	gfx_fillrectangle(xcord+size*29, ycord+size*17, size*3, size);
	gfx_fillrectangle(xcord+size*34, ycord+size*17, size*1, size);
	
	gfx_fillrectangle(xcord+size*0, ycord+size*18, size*35, size);
}

void palabrita_hort(int x, int y, int i) {
	gfx_color(173, 138, 33);
	gfx_fillrectangle(x, y, i*81, 0.8*y);
	gfx_color(255, 187, 25);
	gfx_fillrectangle(x+i*0, y+i*0, i*81, i);
	
	gfx_fillrectangle(x+i*0, y+i*1, i*1, i);
	gfx_fillrectangle(x+i*7, y+i*1, i*4, i);
	gfx_fillrectangle(x+i*16, y+i*1, i*3, i);
	gfx_fillrectangle(x+i*21, y+i*1, i*8, i);
	gfx_fillrectangle(x+i*34, y+i*1, i*3, i);
	gfx_fillrectangle(x+i*42, y+i*1, i*4, i);
	gfx_fillrectangle(x+i*52, y+i*1, i*3, i);
	gfx_fillrectangle(x+i*62, y+i*1, i*2, i);
	gfx_fillrectangle(x+i*71, y+i*1, i*3, i);
	gfx_fillrectangle(x+i*79, y+i*1, i*2, i);
	
	gfx_fillrectangle(x+i*0, y+i*2, i*1, i);
	gfx_fillrectangle(x+i*3, y+i*2, i*3, i);
	gfx_fillrectangle(x+i*8, y+i*2, i*2, i);
	gfx_fillrectangle(x+i*12, y+i*2, i*3, i);
	gfx_fillrectangle(x+i*17, y+i*2, i*2, i);
	gfx_fillrectangle(x+i*21, y+i*2, i*7, i);
	gfx_fillrectangle(x+i*30, y+i*2, i*3, i);
	gfx_fillrectangle(x+i*35, y+i*2, i*2, i);
	gfx_fillrectangle(x+i*39, y+i*2, i*2, i);
	gfx_fillrectangle(x+i*43, y+i*2, i*3, i);
	gfx_fillrectangle(x+i*48, y+i*2, i*3, i);
	gfx_fillrectangle(x+i*53, y+i*2, i*5, i);
	gfx_fillrectangle(x+i*59, y+i*2, i*8, i);
	gfx_fillrectangle(x+i*68, y+i*2, i*5, i);
	gfx_fillrectangle(x+i*75, y+i*2, i*3, i);
	gfx_fillrectangle(x+i*80, y+i*2, i*1, i);
	
	gfx_fillrectangle(x+i*0, y+i*3, i*1, i);
	gfx_fillrectangle(x+i*3, y+i*3, i*3, i);
	gfx_fillrectangle(x+i*8, y+i*3, i*2, i);
	gfx_fillrectangle(x+i*12, y+i*3, i*3, i);
	gfx_fillrectangle(x+i*17, y+i*3, i*2, i);
	gfx_fillrectangle(x+i*21, y+i*3, i*7, i);
	gfx_fillrectangle(x+i*30, y+i*3, i*3, i);
	gfx_fillrectangle(x+i*35, y+i*3, i*2, i);
	gfx_fillrectangle(x+i*39, y+i*3, i*2, i);
	gfx_fillrectangle(x+i*43, y+i*3, i*3, i);
	gfx_fillrectangle(x+i*48, y+i*3, i*3, i);
	gfx_fillrectangle(x+i*53, y+i*3, i*5, i);
	gfx_fillrectangle(x+i*59, y+i*3, i*8, i);
	gfx_fillrectangle(x+i*68, y+i*3, i*5, i);
	gfx_fillrectangle(x+i*75, y+i*3, i*3, i);
	gfx_fillrectangle(x+i*80, y+i*3, i*1, i);
	
	gfx_fillrectangle(x+i*0, y+i*4, i*1, i);
	gfx_fillrectangle(x+i*7, y+i*4, i*3, i);
	gfx_fillrectangle(x+i*12, y+i*4, i*3, i);
	gfx_fillrectangle(x+i*17, y+i*4, i*2, i);
	gfx_fillrectangle(x+i*21, y+i*4, i*7, i);
	gfx_fillrectangle(x+i*30, y+i*4, i*3, i);
	gfx_fillrectangle(x+i*35, y+i*4, i*2, i);
	gfx_fillrectangle(x+i*43, y+i*4, i*3, i);
	gfx_fillrectangle(x+i*52, y+i*4, i*6, i);
	gfx_fillrectangle(x+i*59, y+i*4, i*8, i);
	gfx_fillrectangle(x+i*68, y+i*4, i*5, i);
	gfx_fillrectangle(x+i*75, y+i*4, i*3, i);
	gfx_fillrectangle(x+i*80, y+i*4, i*1, i);

	gfx_fillrectangle(x+i*0, y+i*5, i*1, i);
	gfx_fillrectangle(x+i*3, y+i*5, i*7, i);
	gfx_fillrectangle(x+i*17, y+i*5, i*2, i);
	gfx_fillrectangle(x+i*21, y+i*5, i*7, i);
	gfx_fillrectangle(x+i*35, y+i*5, i*2, i);
	gfx_fillrectangle(x+i*39, y+i*5, i*3, i);
	gfx_fillrectangle(x+i*44, y+i*5, i*2, i);
	gfx_fillrectangle(x+i*48, y+i*5, i*3, i);
	gfx_fillrectangle(x+i*53, y+i*5, i*5, i);
	gfx_fillrectangle(x+i*59, y+i*5, i*8, i);
	gfx_fillrectangle(x+i*68, y+i*5, i*5, i);
	gfx_fillrectangle(x+i*80, y+i*5, i*1, i);

	gfx_fillrectangle(x+i*0, y+i*6, i*1, i);
	gfx_fillrectangle(x+i*3, y+i*6, i*7, i);
	gfx_fillrectangle(x+i*12, y+i*6, i*3, i);
	gfx_fillrectangle(x+i*17, y+i*6, i*2, i);
	gfx_fillrectangle(x+i*21, y+i*6, i*7, i);
	gfx_fillrectangle(x+i*30, y+i*6, i*3, i);
	gfx_fillrectangle(x+i*35, y+i*6, i*2, i);
	gfx_fillrectangle(x+i*39, y+i*6, i*3, i);
	gfx_fillrectangle(x+i*44, y+i*6, i*2, i);
	gfx_fillrectangle(x+i*48, y+i*6, i*3, i);
	gfx_fillrectangle(x+i*53, y+i*6, i*5, i);
	gfx_fillrectangle(x+i*59, y+i*6, i*8, i);
	gfx_fillrectangle(x+i*68, y+i*6, i*5, i);
	gfx_fillrectangle(x+i*75, y+i*6, i*3, i);
	gfx_fillrectangle(x+i*80, y+i*6, i*1, i);
	
	gfx_fillrectangle(x+i*0, y+i*7, i*1, i);
	gfx_fillrectangle(x+i*3, y+i*7, i*7, i);
	gfx_fillrectangle(x+i*12, y+i*7, i*3, i);
	gfx_fillrectangle(x+i*17, y+i*7, i*2, i);
	gfx_fillrectangle(x+i*26, y+i*7, i*2, i);
	gfx_fillrectangle(x+i*30, y+i*7, i*3, i);
	gfx_fillrectangle(x+i*35, y+i*7, i*2, i);
	gfx_fillrectangle(x+i*43, y+i*7, i*3, i);
	gfx_fillrectangle(x+i*48, y+i*7, i*3, i);
	gfx_fillrectangle(x+i*53, y+i*7, i*2, i);
	gfx_fillrectangle(x+i*62, y+i*7, i*4, i);
	gfx_fillrectangle(x+i*69, y+i*7, i*4, i);
	gfx_fillrectangle(x+i*75, y+i*7, i*3, i);
	gfx_fillrectangle(x+i*80, y+i*7, i*1, i);	
	
	gfx_fillrectangle(x+i*0, y+i*8, i*81, i);
}