/************************************/
/*Descripion: bit mani. lib			*/
/*Author	: Aya Mostafa			*/
/*Version	: 0.1v					*/
/*Date		: 11 Nov 2022			*/
/************************************/

#ifndef BIT_Math_h
#define BIT_Math_h

#define SET_BIT(Reg , bitNo)	(Reg)|= (1<<bitNo) 
#define CLR_BIT(Reg , bitNo)	(Reg)&=~(1<<bitNo)	
#define GET_BIT(Reg , bitNo)	(Reg>>bitNo)&1
#define TGL_BIT(Reg , bitNo)	(Reg)^= (1<<bitNo)

#endif