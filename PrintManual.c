/*
* Header Includes 
*/
#include "TestColorsPair.h"
#include <assert.h>
#include <string.h>

void Test_Number_To_ColorPair(int APairNumber , const ColorPair* AColorPair)
{
    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    assert(MajorColorNames[AColorPair->majorColor] == MajorColorNames[APairNumber/5] );
    assert(MinorColorNames[AColorPair->minorColor] == MinorColorNames[APairNumber%5] );
   
}
           
           
/*------------------------------------------------------------------------------
 *  FUNCTION:   void PrintAllPairs()
 */
/*! \brief      Print all color pairs against pair number */
void PrintAllPairs()
{
    int LPairNumber;
    ColorPair LColorPair;
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    printf("user manual color pairs");
    for (LPairNumber=1;(int)MAX_PAIR >= LPairNumber;LPairNumber++)
    {
        printf("\n %d",LPairNumber);
        LColorPair = GetColorFromPairNumber(LPairNumber);
          
        /* This assert function will check each pair color against pair number before print on console */
        Test_Number_To_ColorPair((LPairNumber-1),&LColorPair);
        
        /* Print User manual */
        ColorPairToString(&LColorPair, colorPairNames);
        
        printf(" %s",colorPairNames);
    }
}
