 #include "TestColorsPair.h"


/*------------------------------------------------------------------------------
 *  FUNCTION:   int main()
 */
/*! \brief      Main fnction to call all test cases and print color pairs */
int main() {
    TestNumberToPair(4, WHITE, BROWN);
    TestNumberToPair(5, WHITE, SLATE);
    TestPairToNumber(BLACK, ORANGE, 12);
    TestPairToNumber(VIOLET, SLATE, 25);
    PrintAllPairs();
    return 0;
}
