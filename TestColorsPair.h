#ifndef TestColorsPair_H
#define TestColorsPair_H

/*********************
 * Includes
**********************/
#include <stdio.h>

/*
 *******************************************************************************
 *Defines / Macros
 *******************************************************************************
*/
#define MAX_PAIR    25U
#define MAX_COLORPAIR_NAME_CHARS  16U

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE };

typedef struct
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
/*
 *******************************************************************************
 *Variables
 *******************************************************************************
*/
extern int NumberOfMajorColors_i;
extern int NumberOfMinorColors_i;
/*
 *******************************************************************************
 *Function declaration
 *******************************************************************************
*/
extern void TestPairToNumber(enum MajorColor major,enum MinorColor minor,
                                                   int expectedPairNumber);
extern void TestNumberToPair(int pairNumber, enum MajorColor expectedMajor,
                                             enum MinorColor expectedMinor);
extern ColorPair GetColorFromPairNumber(int LPairNumber);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern void PrintAllPairs();
extern int GetPairNumberFromColor(const ColorPair* colorPair); 
#endif
