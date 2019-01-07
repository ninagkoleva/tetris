#include <conio.h>
#include <stdlib.h>

int field[81][51];
int z1[]= {1,1,1,1,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,1,1,1,1};
int z2[]= {0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0};
int z3[]= {0,0,1,1,1,1,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0};
int z4[]= {1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1};
int z5[]= {1,1,0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1};
int z6[]= {0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1};
int z7[]= {1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0,1,1};
int z8[]= {1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0};
int z9[]= {0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int z10[]={1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
int z11[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,0};
int z12[]={1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1};
int z13[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int z14[]={0,0,1,1,0,0,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1};
int z15[]={0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1};
int z16[]={1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,0,0,1,1,0,0};
int z17[]={1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0};

int colors[]={0,MAGENTA,GREEN, LIGHTBLUE, LIGHTRED,YELLOW, RED, DARKGRAY};

int nivo,gr_left=27, gr_right=58, gr_down=46,*fig,m,col,br_el,lines=0;
long score=0;

void new_state(int state);

void logo() {
	int i,x=8,ynach=23,y=ynach;
    new_state(11);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    x=x+m;
    new_state(18);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    x=x+m;
    new_state(7);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    x=x-4;
    new_state(15);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+4+i/m);
            	cprintf("%c",219);
      		}
   // *****************************************************************
   x=x+12; y=y-2;
   new_state(11);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    y=y+br_el/m;
    new_state(19);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    y=y+br_el/m;
    new_state(5);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
   // ttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt
   x=x+m+2,y=ynach;
    new_state(11);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    x=x+m;
    new_state(18);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    x=x+m;
    new_state(7);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    x=x-4;
    new_state(15);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+4+i/m);
            	cprintf("%c",219);
      		}
   // rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr
   x=x+12,y=ynach;
    new_state(11);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
   	y=y+br_el/m;
    new_state(15);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
   x=x+8;
   new_state(15);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
   // ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss

   x=x+4; y=y-2;
   new_state(8);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    y=y+br_el/m-2;

    new_state(6);
    textcolor(col);
    for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}
    getch();
}

void nivo_set() {
	textbackground(BLUE);
   textcolor(YELLOW);
   clrscr();
   _setcursortype(_NORMALCURSOR);
   do {
   	cprintf("Choose a level of difficulty (0-14):");
   	cscanf("%d",&nivo);
   }
   while(nivo<0 || nivo>14);
   _setcursortype(_NOCURSOR);
}
void field_draw() {
   int x,y,set_last_zero;
   int i,j,xp=4,yp=3, width=18, height=18;

   textcolor(RED);

   for (x=1;x<81;x++)
       for (y=1;y<51;y++)
       	field[x][y]=0;

   for (y=1;y<gr_down;y++) {
   	gotoxy(gr_left,y);
      cprintf("%c",219);
      field[gr_left][y]=16;
      gotoxy(gr_right,y);
      cprintf("%c",219);
      field[gr_right][y]=16;
   }
   for (x=gr_left;x<=gr_right;x++) {
   	gotoxy(x,gr_down);
      cprintf("%c",219);
      field[x][gr_down]=16;
   }

   textbackground(BLACK);
   for (x=gr_left+1;x<gr_right;x++)
       for (y=1;y<gr_down;y++) {
       	gotoxy(x,y);
         cprintf(" ");
       }

   for (i=gr_down-2;i>gr_down-nivo*2-2;i-=2) {
   	set_last_zero=1;
   	for (j=gr_left+1;j<gr_right-1;j+=2)  {
      	field[j][i]=colors[rand()%9];
        	field[j][i+1]=field[j][i];
         field[j+1][i]=field[j][i];
         field[j+1][i+1]=field[j][i];
         if (field[j][i]==0) set_last_zero=0;
   	}
      if (set_last_zero==1) {
      		field[gr_right-2][i]=0;
            field[gr_right-2][i+1]=0;
            field[gr_right-1][i]=0;
            field[gr_right-1][i+1]=0;
      }
      else {
      		field[gr_right-2][i]=colors[rand()%9];
            field[gr_right-2][i+1]=field[gr_right-2][i];
            field[gr_right-1][i]=field[gr_right-2][i];
            field[gr_right-1][i+1]=field[gr_right-2][i];
      }

      for (j=gr_left+1;j<gr_right-1;j+=2)
      	if (field[j][i]!=0) {
         		textcolor(field[j][i]);
               gotoxy(j,i);
               cprintf("%c",219);
               gotoxy(j+1,i);
               cprintf("%c",219);
               gotoxy(j,i+1);
               cprintf("%c",219);
               gotoxy(j+1,i+1);
               cprintf("%c",219);
      }
   }

   gotoxy(xp,yp);
   cprintf("%c",201);
   for (i=xp+1;i<xp+width;i++) cprintf("%c",205); cprintf("%c",187);
   for (i=yp+1;i<yp+height;i++) {
   	gotoxy(xp,i); cprintf("%c",186);
      gotoxy(xp+width,i); cprintf("%c",186);
  	}
   gotoxy(xp,yp+height);
   cprintf("%c",200);
   for (i=xp+1;i<xp+width;i++) cprintf("%c",205); cprintf("%c",188);

   for (x=xp+1;x<xp+width;x++)
       for (y=yp+1;y<yp+height;y++) {
       	gotoxy(x,y);
         cprintf(" ");
       }
}

void info() {
     textcolor(YELLOW);
     //gotoxy(6,12); cprintf("%d",nivo);
     gotoxy(6,5); cprintf("score:");
     gotoxy(6,6); cprintf("%08d",score);
     gotoxy(6,8); cprintf("lines:");
     gotoxy(6,9); cprintf("%03d",lines);
     gotoxy(6,11); cprintf("next figure:");
}

void redraw_field(int row) {
	int i,j;
   for (i=gr_left+1;i<gr_right;i++)
   	for (j=1;j<=row;j++) {
      	gotoxy(i,j);
      	if (field[i][j]!=0) {
         	textcolor(field[i][j]);
            cprintf("%c",219);
         }
         else
            cprintf(" ");
      }
}

void fill_screen(char ch) {
	textbackground(RED);
   clrscr();
      int x,y;
      for (x=1;x<80;x+=2)
       for (y=1;y<50;y++)  {
       	gotoxy(x,y);
         if (y%2) {
         	textcolor(LIGHTGREEN);
         	cprintf("%c",ch);
            textcolor(YELLOW);
         	cprintf("%c",ch-1);
       	}
         else {
            textcolor(YELLOW);
         	cprintf("%c",ch-1);
         	textcolor(LIGHTGREEN);
         	cprintf("%c",ch);
       	}
    }
}
main() {
int i,j,br,x,y,stopfig,h,state;
int state_old,state_next,gameover,index,redove_erz[10],f;

char ch;
double z,zab;
	textmode(C4350);
   _setcursortype(_NOCURSOR);

  	logo();
   nivo_set();
  	fill_screen(2);
   field_draw();

   randomize();
   gameover=0;
   state_next=rand()%19+1;
   do {
   info();
   x=38; y=0;
   state=state_next;
   state_next=rand()%19+1;

   new_state(state_next);
   textcolor(col);
   textbackground(BLACK);
   for (i=0;i<64;i++) {
            	gotoxy(10+i%8,13+i/8);
            	cprintf(" ");
      		}

   for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(10+i%m,13+i/m);
            	cprintf("%c",219);
      		}

   new_state(state);
    stopfig=0;

   do {

   	textcolor(col);
      y++;
      if (kbhit()) {
      		ch=getch();
            if (ch=='k') {
            	state_old=state;
            	switch (state)  {
               	case 1: state=2; break;
                  case 2: state=1; break;
                  case 3: state=4; break;
                  case 4: state=3; break;
                  case 5: state=6; break;
                  case 6: state=7; break;
                  case 7: state=8; break;
                  case 8: state=5; break;
                  case 9: state=10; break;
                  case 10: state=11; break;
                  case 11: state=12; break;
                  case 12: state=9; break;
                  case 14: state=15; break;
                  case 15: state=14; break;
                  case 16: state=17; break;
                  case 17: state=18; break;
                  case 18: state=19; break;
                  case 19: state=16; break;

               }
               new_state(state);
               for (i=0;i<br_el;i++)
            		if (fig[i]!=0 && field[x+i%m][y+i/m]!=0)  {
            			state=state_old;
                     new_state(state);
                     break;
                  }

            }
            if (ch=='j') {
            		x-=2;
                  for (i=0;i<br_el;i++)
            		if (fig[i]!=0 && field[x+i%m][y+i/m]!=0)  {
            			x+=2;
                     break;
                  }
            }
            if (ch=='l') {
            		x+=2;
                  for (i=0;i<br_el;i++)
            		if (fig[i]!=0 && field[x+i%m][y+i/m]!=0)  {
            			x-=2;
                     break;
                  }
            }
            if (ch==' ')
            	do {
               y++;
               for (i=0;i<br_el;i++)
            		if (fig[i]!=0 && field[x+i%m][y+i/m+1]!=0) {
            			stopfig=1;
               		break;
      				}
               }
               while (stopfig!=1);

      }


      for (i=0;i<br_el;i++)
            if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf("%c",219);
      		}

      for (i=0;i<br_el;i++)
            if (fig[i]!=0 && field[x+i%m][y+i/m+1]!=0) {
            	stopfig=1;
               break;
      		}

   	if (stopfig==1 && y==1) gameover=1;
      if (stopfig==1) {
      		stopfig=0;
            score+=10;
            for (i=0;i<br_el;i++)
            	if (fig[i]!=0)
            		field[x+i%m][y+i/m]=col;

           index=-1;
           if (y+br_el/m<=gr_down)
            for (j=y+br_el/m-1;j>=y;j-=2) {
                  br=0;
            		for(i=gr_left+1;i<gr_right;i++)
                  	if (field[i][j]!=0) br++;
                  if (br==gr_right-gr_left-1) {
                  	index++;
                     lines++;
                     score+=250;
                     redove_erz[index]=j;
                  }
             }
            if (index>=0)  {
             		for (f=index; f>=0;f--)
                      for (h=redove_erz[f];h>1;h-=2)
                      	for(i=gr_left+1;i<gr_right;i++) {
                        	field[i][h]=field[i][h-2];
                           field[i][h-1]=field[i][h-3];
                        }

             }
            break;
      }

      zab=(lines/10)*0.15+0.15;
      for (z=-2000000;z<2000000;z+=zab);

      for (i=0;i<br_el;i++)
      		if (fig[i]!=0) {
            	gotoxy(x+i%m,y+i/m);
            	cprintf(" ");
      		}
      }
   while (y<gr_down-br_el/m);
	redraw_field(gr_down-1);
   }
   while (!gameover);

   while (!kbhit()) {
      gotoxy(35,25);
      cprintf("GAME OVER!");
      for (z=-2000000;z<20000000; z++);
      gotoxy(35,25);
      cprintf("          ");
      for (z=-2000000;z<10000000; z++);
   }                
   getch();
}

void new_state(int state) {
	switch (state)  {
               	case 1: m=6; fig=z1; br_el=24; col=MAGENTA; break;
                  case 2: m=4; fig=z2; br_el=24; col=MAGENTA; break;
                  case 3: m=6; fig=z3; br_el=24; col=GREEN; break;
                  case 4: m=4; fig=z4; br_el=24; col=GREEN; break;
                  case 5: m=6; fig=z5; br_el=24; col=LIGHTBLUE; break;
                  case 6: m=4; fig=z6; br_el=24; col=LIGHTBLUE; break;
                  case 7: m=6; fig=z7; br_el=24; col=LIGHTBLUE; break;
                  case 8: m=4; fig=z8; br_el=24; col=LIGHTBLUE; break;
                  case 9: m=6; fig=z9; br_el=24; col=LIGHTRED; break;
                  case 10: m=4; fig=z10; br_el=24; col=LIGHTRED; break;
                  case 11: m=6; fig=z11; br_el=24; col=LIGHTRED; break;
                  case 12: m=4; fig=z12; br_el=24; col=LIGHTRED; break;
                  case 13: m=4; fig=z13; br_el=16; col=YELLOW; break;
                  case 14: m=8; fig=z13; br_el=16; col=RED; break;
                  case 15: m=2; fig=z13; br_el=16; col=RED; break;
                  case 16: m=6; fig=z14; br_el=24; col=DARKGRAY; break;
                  case 17: m=4; fig=z15; br_el=24; col=DARKGRAY; break;
                  case 18: m=6; fig=z16; br_el=24; col=DARKGRAY; break;
                  case 19: m=4; fig=z17; br_el=24; col=DARKGRAY; break;
       }
}

