#include ".assignment/test.h"

// 姣旇緝涓変釜鏁扮殑澶у皬
void CompareThreeNumbers(int a, int b, int c, Result& result)
{
    // 浣犵殑绠楁硶

    result.min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);

    if ((a > result.min && a < result.max)) {
        result.mid = a;
    } 
    else if ((b > result.min && b < result.max)) {
        result.mid = b;
    } 
    else {
        result.mid = c;
    }

    result.max =(a > b) ? (a > c ? a : c) : (b > c ? b : c);
    return result;
}