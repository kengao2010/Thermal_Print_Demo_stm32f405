/**
  ******************************************************************************
  * @file    PrintCode/fonts.c 
  * @author  Romy Bompart - HARDWARE TEMAN from The Factory HKA,CA
  * @version V1.0.1
  * @date    25-Febrary-2014
  * @brief   Functions needed by fonts printing process
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2014 <The Factory HKA, C.A.>
	*	Permission is hereby granted, free of charge, to any person obtaining a copy
	*	of this software and associated documentation files (the "Software"), to deal
	*	in the Software without restriction, including without limitation the rights
	*	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	*	copies of the Software, and to permit persons to whom the Software is
	*	furnished to do so, subject to the following conditions:
	*
	*	The above copyright notice and this permission notice shall be included in
	*	all copies or substantial portions of the Software.
	*
	*	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	*	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	*	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	*	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	*	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	*	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	*	THE SOFTWARE.
  ******************************************************************************
  */

#include "fonts.h"

/** GLCD FontName : Font
  * GLCD FontSize : 16 x 24
***/

const unsigned int Font[] = { 
0x0000,0x1FF8,0x3FFC,0x7FFE,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x7FFE,0x7FFE,0x7FFE,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x0000,  // Character A
0x0000,0x7FF8,0x7FFC,0x7FFC,0x700E,0x7006,0x7006,0x7006,0x7006,0x7006,0x700E,0x7FFC,0x7FF8,0x7FFC,0x700E,0x7006,0x7006,0x7006,0x7006,0x700E,0x7FFE,0x7FFC,0x7FF8,0x0000,  // Character B
0x0000,0x1FF8,0x3FFC,0x7FFE,0x781E,0x700E,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x700E,0x781E,0x7FFE,0x3FFC,0x1FF8,0x0000,  // Character C
0x0000,0x7FF8,0x7FF8,0x7FF8,0x7038,0x701C,0x701C,0x700C,0x700E,0x700E,0x7006,0x7006,0x7006,0x7006,0x700E,0x700E,0x700C,0x701C,0x701C,0x7038,0x7FF8,0x7FF8,0x7FF8,0x0000,  // Character D
0x0000,0x7FFE,0x7FFE,0x7FFE,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7FF8,0x7FF8,0x7FF8,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7FFE,0x7FFE,0x7FFE,0x0000,  // Character E
0x0000,0x7FFE,0x7FFE,0x7FFE,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7FF8,0x7FF8,0x7FF8,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x0000,  // Character F
0x0000,0x1FFE,0x3FFE,0x7FFE,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x707E,0x707E,0x707E,0x700E,0x700E,0x700E,0x7FFE,0x3FFC,0x1FF8,0x0000,  // Character G
0x0000,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x7FFE,0x7FFE,0x7FFE,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x0000,  // Character H
0x0000,0x7FFE,0x7FFE,0x7FFE,0x7FFE,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x7FFE,0x7FFE,0x7FFE,0x7FFE,0x0000,  // Character I
0x0000,0x007E,0x007E,0x007E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x7F8E,0x7F8E,0x7F8E,0x700E,0x700E,0x700E,0x780E,0x7C1E,0x3FFE,0x1FFC,0x0FF8,0x0000,  // Character J
0x0000,0x700E,0x700E,0x701E,0x703E,0x7078,0x70F0,0x71E0,0x73C0,0x7780,0x7F00,0x7E00,0x7E00,0x7F00,0x7780,0x73C0,0x71E0,0x70F0,0x7078,0x703E,0x701E,0x700E,0x700E,0x0000,  // Character K
0x0000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7FFE,0x7FFE,0x7FFE,0x0000,  // Character L
0x0000,0x700E,0x781E,0x7C3E,0x7E7E,0x77EE,0x73CE,0x718E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x0000,  // Character M
0x0000,0x700E,0x700E,0x700E,0x780E,0x7C0E,0x7C0E,0x7E0E,0x760E,0x730E,0x730E,0x718E,0x718E,0x70CE,0x70EE,0x706E,0x707E,0x703E,0x701E,0x701E,0x700E,0x700E,0x700E,0x0000,  // Character N
0x0000,0x0FF0,0x1FF8,0x3FFC,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x7FFC,0x3FF8,0x1FF0,0x0000,  // Character O
0x0000,0x7FF0,0x7FF8,0x7FFC,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700C,0x7FFC,0x7FF8,0x7FF0,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x0000,  // Character P
0x0000,0x0FF0,0x1FF8,0x3FFC,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x718E,0x71CE,0x71EE,0x70EE,0x707E,0x7038,0x703C,0x7FFE,0x3FEE,0x1FE6,0x0000,  // Character Q
0x0000,0x0FF0,0x1FF8,0x3FFC,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700C,0x7FFC,0x7FF8,0x7FF0,0x7380,0x71C0,0x70E0,0x7070,0x7038,0x701C,0x700E,0x0000,  // Character R
0x0000,0x0FF0,0x1FF8,0x3FFC,0x781C,0x700C,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x3FE0,0x1FF0,0x0FF8,0x000C,0x000C,0x000C,0x601C,0x7FF8,0x3FF8,0x1FF0,0x0000,  // Character S
0x0000,0x7FFE,0x7FFE,0x7FFE,0x7FFE,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x03C0,0x0000,  // Character T
0x0000,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x781E,0x7FFC,0x3FF8,0x1FF0,0x0000,  // Character U
0x0000,0x781E,0x781E,0x381C,0x381C,0x381C,0x381C,0x381C,0x381C,0x381C,0x381C,0x381C,0x381C,0x381C,0x381C,0x381C,0x1C38,0x1C38,0x1C38,0x0E70,0x0FF0,0x0FF0,0x03C0,0x0000,  // Character V
0x0000,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x700E,0x718E,0x73CE,0x77EE,0x7E7E,0x7C3E,0x781E,0x700E,0x0000,  // Character W
0x0000,0x700E,0x700E,0x1818,0x1818,0x0810,0x0C30,0x0C30,0x0660,0x03C0,0x03C0,0x0660,0x0660,0x0C30,0x0C30,0x1818,0x1818,0x300C,0x300C,0x300C,0x700E,0x700E,0x700E,0x0000,  // Character X
0x0000,0x700E,0x700E,0x300C,0x1008,0x1818,0x1C38,0x0C30,0x0660,0x0660,0x03C0,0x0180,0x0180,0x0180,0x0180,0x0180,0x0180,0x0180,0x0180,0x0180,0x0180,0x03C0,0x03C0,0x0000,  // Character Y
0x0000,0x7FFE,0x7FFE,0x000E,0x000E,0x000E,0x001C,0x0038,0x0070,0x00E0,0x01C0,0x3FFC,0x3FFC,0x3FFC,0x0700,0x0E00,0x1C00,0x3800,0x7000,0x7000,0x7FFE,0x7FFE,0x7FFE,0x0000,  // Character Z
0x0000,0x7F00,0x7F00,0x7F00,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7000,0x7F00,0x7F00,0x7F00,0x0000,  // Character [
0x0000,0x7000,0x7000,0x7800,0x3800,0x3C00,0x1C00,0x1E00,0x0E00,0x0F00,0x0700,0x0780,0x0380,0x03C0,0x01C0,0x01E0,0x00E0,0x00F0,0x0070,0x0078,0x003E,0x003E,0x000E,0x0000,  // Character \ 'FIX'
0x0000,0x00FE,0x00FE,0x00FE,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E,0x00FE,0x00FE,0x00FE,0x0000,  // Character ] 
0x0000,0x0000,0x0180,0x03C0,0x07E0,0x0E70,0x0C30,0x0810,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,  // Character ^
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7FFE,0x7FFE,0x7FFE,0x0000,  // Character _
0x0000,0x7000,0x3800,0x1C00,0x0E00,0x0700,0x0380,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,  // Character `
};



/**
 ** @brief this fucntions prints any text of 65535 of lenght, also it has its own calc method to 
 **  determine how many lines will be printed up. 
 ** @argument this function needs just the text to print
 **/
void ThermalPrint(char text[150])
{
	int8	Trow = 0, Tline =0;
	int16 	Tcharacter = 0, Tcharacters = 0, TLinePixels[24], Tlines = 0, Tstart = 0;

	Tcharacters = strlen(text);
	Tlines = ((Tcharacters-1)/Maxcharacterperline) + 1;
	while(Tline < Tlines )
	{
		while(Trow < Fontrows)
		{
			Tcharacter = Tline*Maxcharacterperline;
			Tstart = Tcharacter;
			while ( (Tcharacter < Tcharacters) && (Tcharacter < (Maxcharacterperline*(Tline+1)) ) )
			{
				if(text[Tcharacter] == 32)
					TLinePixels[Tcharacter-Tstart] = 0x0000;
				else
					TLinePixels[Tcharacter-Tstart] = pixelsfont(Trow, text[Tcharacter]);	
				Tcharacter++;
			}
			PrintDots(TLinePixels, Tcharacter-Tstart );
			Trow++;
		}
		Trow=0;
		Tline++;
		feed_pitch(4,BACKWARD);
	}
}

/**
 ** @brief According with the organization of the data in the vector Font this function returns
 **          the entire line of pixels that compose the character required
 ** @arguments This function needs what row of the character is required and what character.
 **/
int16 pixelsfont(int8 Prow, int8 Pcharacter)
{
	int16	COffset = 0;
 	COffset = ((Pcharacter - asciistart)*netxcharacter);
	
	 return Font[COffset+Prow];
}

/*Si buscas resultados distintos, no hagas siempre lo mismo. Albert Einstein*/
