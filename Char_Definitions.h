#define row 5
#define col 7

void char2disp(char c,unsigned long color,unsigned long buffM[][col])
{
  // Matrix Library for the characters to be displayed on the LED matrix.
    switch (c){
        case 'A':
            buffM[4][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[3][3] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[2][2] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[1][1] = color;
            buffM[0][3] = color;
            buffM[0][1] = color;
            break;
        case 'B':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][2] = color;
            buffM[3][3] = color;
            buffM[2][2] = color;
            buffM[1][3] = color;
            buffM[0][2] = color;
            break;
        case 'C':
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][2] = color;
            buffM[1][3] = color;
            buffM[4][2] = color;
            buffM[3][3] = color;
            break;
        case 'D':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][2] = color;
            buffM[3][3] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[0][2] = color;
            break;
        case 'E':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[2][2] = color;
            buffM[2][3] = color;
            buffM[0][3] = color;
            buffM[0][2] = color;
            break;
        case 'F':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[2][2] = color;
            buffM[2][3] = color;
            break;
        case 'G':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[0][3] = color;
            buffM[0][2] = color;
            break;
        case 'H':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][3] = color;
            buffM[3][3] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[0][3] = color;
            buffM[2][2] = color;
            break;
        case 'I':
            buffM[4][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[0][1] = color;
            buffM[0][2] = color;
            buffM[0][3] = color;
            buffM[3][2] = color;
            buffM[2][2] = color;
            buffM[1][2] = color;
            break;
        case 'J':
            buffM[4][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[0][1] = color;
            buffM[0][2] = color;
            buffM[3][2] = color;
            buffM[2][2] = color;
            buffM[1][2] = color;
            break;
        case 'K':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[3][2] = color;
            buffM[4][3] = color;
            buffM[1][2] = color;
            buffM[0][3] = color;
            break;
        case 'L':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[0][2] = color;
            buffM[0][3] = color;
            break;
        case 'M':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[3][2] = color;
            buffM[2][3] = color;
            buffM[3][4] = color;
            buffM[4][5] = color;
            buffM[3][5] = color;
            buffM[2][5] = color;
            buffM[1][5] = color;
            buffM[0][5] = color;
            break;
        case 'N':

            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[3][3] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[0][3] = color;
            break;
        case 'O':
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[4][2] = color;
            buffM[3][3] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[0][2] = color;
            break;
        case 'P':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[3][3] = color;
            buffM[2][2] = color;
            buffM[2][3] = color;
            break;
        case 'Q':
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[4][2] = color;
            buffM[3][3] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[0][2] = color;
            buffM[1][2] = color;
            buffM[0][3] = color;
            break;
        case 'R':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][2] = color;
            buffM[3][3] = color;
            buffM[2][3] = color;
            buffM[2][2] = color;
            buffM[1][2] = color;
            buffM[0][3] = color;
            break;
        case 'S':
            buffM[4][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[2][2] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[0][1] = color;
            buffM[0][2] = color;
            buffM[0][3] = color;
            break;
        case 'T':
            buffM[4][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[0][2] = color;
            buffM[3][2] = color;
            buffM[2][2] = color;
            buffM[1][2] = color;
            break;
        case 'U':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[0][2] = color;
            buffM[4][3] = color;
            buffM[3][3] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[0][3] = color;
            break;
        case 'V':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][2] = color;
            buffM[4][3] = color;
            buffM[3][3] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            break;
        case 'W':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[2][1] = color;
            buffM[1][1] = color;
            buffM[0][2] = color;
            buffM[4][3] = color;
            buffM[3][3] = color;
            buffM[2][3] = color;
            buffM[1][3] = color;
            buffM[0][4] = color;
            buffM[4][5] = color;
            buffM[3][5] = color;
            buffM[2][5] = color;
            buffM[1][5] = color;
            break;
        case 'X':
            buffM[4][1] = color;
            buffM[3][1] = color;
            buffM[1][1] = color;
            buffM[0][1] = color;
            buffM[4][3] = color;
            buffM[3][3] = color;
            buffM[1][3] = color;
            buffM[0][3] = color;
            buffM[2][2] = color;
            break;
        case 'Y':
            buffM[4][1] = color;
            buffM[4][3] = color;
            buffM[3][1] = color;
            buffM[3][3] = color;
            buffM[2][2] = color;
            buffM[1][2] = color;
            buffM[0][2] = color;
            break;
        case 'Z':
            buffM[4][1] = color;
            buffM[4][2] = color;
            buffM[4][3] = color;
            buffM[0][1] = color;
            buffM[0][2] = color;
            buffM[0][3] = color;
            buffM[1][1] = color;
            buffM[2][2] = color;
            buffM[3][3] = color;

            break;
        case ' ':
            for (int i = 0; i<row; i++){
                for(int j=0; j<col;j++){
                    buffM[i][j] = 0x000000;
                }
            }
            break;
        case '\\':
            for (int i = 0; i<row; i++){
                for(int j=0; j<col;j++){
                    buffM[i][j] = 0x000000;
                }
            }
            break;
        case '&': // heart shape
            buffM[4][2] = color;
            buffM[4][4] = color;
            buffM[3][1] = color;
            buffM[3][3] = color;
            buffM[3][5] = color;
            buffM[2][1] = color;
            buffM[2][5] = color;
            buffM[1][2] = color;
            buffM[1][4] = color;
            buffM[0][3] = color;
            break;
        default :
            buffM[4][1] = RED;
            buffM[4][2] = RED;
            buffM[4][3] = RED;
            buffM[3][3] = RED;
            buffM[2][1] = RED;
            buffM[2][2] = RED;
            buffM[2][3] = RED;
            buffM[1][3] = RED;
            buffM[0][3] = RED;
            buffM[0][2] = RED;
            buffM[0][1] = RED;
    }
}
