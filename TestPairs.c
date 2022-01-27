#include "TestColorsPair.h"
#include <assert.h>

/*------------------------------------------------------------------------------
 *  FUNCTION:   TestNumberToPair(int pairNumber, enum MajorColor expectedMajor,enum MinorColor expectedMinor)
 */
/*! \brief      To test major and minor color name against pair number.*/

void TestNumberToPair(int pairNumber, enum MajorColor expectedMajor,enum MinorColor expectedMinor)
{
    char LcolorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPair LcolorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&LcolorPair, LcolorPairNames);
    printf("Got pair %s\n", LcolorPairNames);
    assert(LcolorPair.majorColor == expectedMajor);
    assert(LcolorPair.minorColor == expectedMinor);
}


/*------------------------------------------------------------------------------
 *  FUNCTION:   TestPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
 */
/*! \brief      To execute test between real and expected pair number */

void TestPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
