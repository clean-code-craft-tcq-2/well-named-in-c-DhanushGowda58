#include "TestColorsPair.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int NumberOfMajorColors_i = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int NumberOfMinorColors_i = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

/*------------------------------------------------------------------------------
 *  FUNCTION:   void ColorPairToString(const ColorPair* colorPair, char* buffer) 
 */
/*! \brief      To store major and minor color names in buffer string */

void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
    sprintf(buffer, "%s %s",MajorColorNames[colorPair->majorColor],MinorColorNames[colorPair->minorColor]);
}

/*------------------------------------------------------------------------------
 *  FUNCTION:   GetColorFromPairNumber(int pairNumber)
 */
/*! \brief      To store major and minor color names in buffer string */

ColorPair GetColorFromPairNumber(int pairNumber_i) 
{
    ColorPair LcolorPair;
    int LzeroBasedPairNumber = pairNumber_i - 1;
    LcolorPair.majorColor = (enum MajorColor)(LzeroBasedPairNumber / NumberOfMajorColors_i);
    LcolorPair.minorColor = (enum MinorColor)(LzeroBasedPairNumber % NumberOfMinorColors_i);
    return LcolorPair;
}
