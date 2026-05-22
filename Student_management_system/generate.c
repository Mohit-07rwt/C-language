#include"student_header.h"
int generate_rollnum()
{
    static int roll = 10;
    return roll++;
}

