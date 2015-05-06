#include <MeggyJrSimple.h> 



void setup() {
  // put your setup code here, to run once:
  MeggyJrSimpleSetup();
  

}

void loop() 
{
  drawDot(); 
  drawPortal();
  Maze1();
  DisplaySlate();  
  ClearSlate();
}

void drawDot()
{
 DrawPx(0,7,Blue);
}

void UpdateDot()
{
  
}


void drawPortal()
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


  
  
