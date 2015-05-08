#include <MeggyJrSimple.h> 

int x=0;          //player x coordinate
int y=7;          //player y coordinate
int portalx=0;    //portal x coordinate
int portaly=0; //portal y coordinate
int direction=180;

void setup() {
  // put your setup code here, to run once:
  MeggyJrSimpleSetup();

}

void loop() 
{
  drawPortal1();
  Maze1();
  drawDot();
  UpdateDot();
  DisplaySlate(); 
  delay(1000); 
  ClearSlate();
  CheckButtonsPress();
    if (Button_Right)
      direction = 90;    //check buttons
                       //moves right
    if (Button_Left)
      direction = 270;
      
    if (Button_Down)   
      direction = 180;    //moves down
      
    if (Button_Up) 
      direction = 0;
  UpdateDot();    //moves up
      
  
}

void drawDot()
{
 DrawPx(x,y,Blue);
}

void UpdateDot()
{
  if (direction == 90)
   {
     if (x < 7)
       x+=1; 
   }
  if (direction == 270)
   {      
     if (x > 0)
       x-=1;   
   }             
  if (direction == 180)
   {
     if (y > 0)
       y-=1;
   }
  
  if (direction == 0)
   {
     if (y < 7)
       y+=1;
   }
    
}


void drawPortal1()
{
  DrawPx(1,0,4);
}

void Maze1()
{
  DrawPx(0,0,1);
  DrawPx(0,1,1);
  DrawPx(0,2,1);
  DrawPx(0,3,1);
  DrawPx(1,2,1);
  DrawPx(1,3,1);
  DrawPx(1,5,1);
  DrawPx(1,6,1);
  DrawPx(1,7,1);
  DrawPx(2,0,1);
  DrawPx(2,2,1);
  DrawPx(2,3,1);
  DrawPx(2,5,1);
  DrawPx(2,6,1);
  DrawPx(2,7,1);
  DrawPx(3,0,1);
  DrawPx(3,2,1);
  DrawPx(3,3,1);
  DrawPx(3,7,1);
  DrawPx(4,0,1);
  DrawPx(4,2,1);
  DrawPx(4,3,1);
  DrawPx(4,4,1);
  DrawPx(4,5,1);
  DrawPx(4,7,1);
  DrawPx(5,0,1);
  DrawPx(5,2,1);
  DrawPx(5,3,1);
  DrawPx(5,4,1);
  DrawPx(5,5,1);
  DrawPx(5,7,1);
  DrawPx(6,0,1);
  DrawPx(6,7,1);
  DrawPx(7,0,1);
  DrawPx(7,1,1);
  DrawPx(7,2,1);
  DrawPx(7,3,1);
  DrawPx(7,4,1);
  DrawPx(7,5,1);
  DrawPx(7,6,1);
  DrawPx(7,7,1);
}


  
  
  
  
  
  
  
  
