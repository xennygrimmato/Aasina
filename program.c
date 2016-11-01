#include<REG52MOD.h>  

#define forward   0x05;     
#define right   0x01;    
#define left   0x04;   
#define lineright    P1_6
#define lineleft    P1_1
#define mleft    P1_2
#define mright    P1_5
#define mmright    P1_4 
#define mmleft    P1_3

void main(void)  
{
 P1=0xff;  
 P2=0x00;  

while (1)
{

   if(lineleft==0,mleft==0,mmleft==0) 
 {
 while (lineright==1)
 {
 P2=right;
 }
  if (mmright==1)
 {
 P2=right;
 }
 else
 {
 P2=forward;
 }
 }
if (lineright==0,mright==0,mmright==0)  
 {
 while (lineleft==1)
 {
 P2=left;
 }
  if (mmleft==1)
 {
 P2=left;
 }
 else
 {
 P2=forward;
 }
 }

  if (lineright==0,mright==0,mmright==0,lineleft==0,mmleft==0)
 {
 while (mleft==1)
 {
 P2=left;
 }
 
 }
   else
 {
 P2=forward;
 }
 
 if (lineright==0,mmright==0,lineleft==0,mleft==0,mmleft==0) 
 {
 while (mright==1)
 {
 P2=right;
 }
  } 
 else
 {
 P2=forward;
 }


 
}
  }
