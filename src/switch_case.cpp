#include "switch_case.h"

int scase_char_to_state(char v)
{
    switch (v)
    {
    case '0':
        return 48;
    case '1':
        return 49;
    case '2':
        return 50;
    case '3':
        return 51;
    case '4':
        return 52;
    case '5':
        return 53;
    case '6':
        return 54;
    case '7':
        return 55;
    case '8':
        return 56;
    case '9':
        return 57;

    case 'A':
        return 65;
    case 'B':
        return 66;
    case 'C':
        return 67;
    case 'D':
        return 68;
    case 'E':
        return 69;
    case 'F':
        return 70;
    case 'G':
        return 71;
    case 'H':
        return 72;
    case 'I':
        return 73;
    case 'J':
        return 74;
    case 'K':
        return 75;
    case 'L':
        return 76;
    case 'M':
        return 77;
    case 'N':
        return 78;
    case 'O':
        return 79;
    case 'P':
        return 80;
    case 'Q':
        return 81;
    case 'R':
        return 82;
    case 'S':
        return 83;
    case 'T':
        return 84;
    case 'U':
        return 85;
    case 'V':
        return 86;
    case 'W':
        return 87;
    case 'X':
        return 88;
    case 'Y':
        return 89;
    case 'Z':
        return 90;

    case 'a':
        return 97;
    case 'b':
        return 98;
    case 'c':
        return 99;
    case 'd':
        return 100;
    case 'e':
        return 101;
    case 'f':
        return 102;
    case 'g':
        return 103;
    case 'h':
        return 104;
    case 'i':
        return 105;
    case 'j':
        return 106;
    case 'k':
        return 107;
    case 'l':
        return 108;
    case 'm':
        return 109;
    case 'n':
        return 110;
    case 'o':
        return 111;
    case 'p':
        return 112;
    case 'q':
        return 113;
    case 'r':
        return 114;
    case 's':
        return 115;
    case 't':
        return 116;
    case 'u':
        return 117;
    case 'v':
        return 118;
    case 'w':
        return 119;
    case 'x':
        return 120;
    case 'y':
        return 121;
    case 'z':
        return 122;

    default:
        return -1;
    }
}