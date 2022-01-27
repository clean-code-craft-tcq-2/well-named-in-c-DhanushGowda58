/*!
 * \file         ColorPairsToNumber.c
 * \brief        This file contains functions definition to test Pair number to color 
 */

#include "TestColorsPair.h"

/*------------------------------------------------------------------------------
 *  FUNCTION:   static int GetPairNumberFromColor(const ColorPair* colorPair) 
 */
/*! \brief      To read pair number from configured paired colors */
int GetPairNumberFromColor(const ColorPair* colorPair) 
{
    return colorPair->majorColor * NumberOfMinorColors_i +
            colorPair->minorColor + 1;
}
