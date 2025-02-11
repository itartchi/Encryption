#include <stdio.h>
#include <string.h>

#define STR_SIZE 1024
#define KEY_SIZE 2

int changeNum(char letter){
    switch (letter)
    {
    case 'a':
        return 1;
        break;

    case 'b':
        return 2;
        break;

    case 'c':
        return 3;
        break;

    case 'd':
        return 4;
        break;

    case 'e':
        return 5;
        break;

    case 'f':
        return 6;
        break;
        
    case 'g':
        return 7;
        break;

    case 'h':
        return 8;
        break;

    case 'i':
        return 9;
        break;

    case 'j':
        return 10;
        break;

    case 'k':
        return 11;
        break;

    case 'l':
        return 12;
        break;

    case 'm':
        return 13;
        break;

    case 'n':
        return 14;
        break;

    case 'o':
        return 15;
        break;

    case 'p':
        return 16;
        break;

    case 'q':
        return 17;
        break;

    case 'r':
        return 18;
        break;

    case 's':
        return 19;
        break;

    case 't':
        return 20;
        break;

    case 'u':
        return 21;
        break;

    case 'v':
        return 22;
        break;

    case 'w':
        return 23;
        break;

    case 'x':
        return 24;
        break;

    case 'y':
        return 25;
        break;

    case 'z':
        return 26;
        break;

    case 'A':
        return 27;
        break;

    case 'B':
        return 28;
        break;

    case 'C':
        return 29;
        break;

    case 'D':
        return 30;
        break;

    case 'E':
        return 31;
        break;

    case 'F':
        return 32;
        break;
        
    case 'G':
        return 33;
        break;

    case 'H':
        return 34;
        break;

    case 'I':
        return 35;
        break;

    case 'J':
        return 36;
        break;

    case 'K':
        return 37;
        break;

    case 'L':
        return 38;
        break;

    case 'M':
        return 39;
        break;

    case 'N':
        return 40;
        break;

    case 'O':
        return 41;
        break;

    case 'P':
        return 42;
        break;

    case 'Q':
        return 43;
        break;

    case 'R':
        return 44;
        break;

    case 'S':
        return 45;
        break;

    case 'T':
        return 46;
        break;

    case 'U':
        return 47;
        break;

    case 'V':
        return 48;
        break;

    case 'W':
        return 49;
        break;

    case 'X':
        return 50;
        break;

    case 'Y':
        return 51;
        break;

    case 'Z':
        return 52;
        break;

        case '0':
        return 53;
        break;

    case '1':
        return 54;
        break;

    case '2':
        return 55;
        break;

    case '3':
        return 56;
        break;

    case '4':
        return 57;
        break;

    case '5':
        return 58;
        break;

    case '6':
        return 59;
        break;

    case '7':
        return 60;
        break;

       case '8':
        return 61;
        break;

    case '9':
        return 62;
        break;

    case ' ':
        return 63;
        break;

    case '!':
        return 64;
        break;

    case '#':
        return 65;
        break;

    case '%':
        return 66;
        break;

    case '?':
        return 67;
        break;

    case '@':
        return 68;
        break;

    case '(':
        return 69;
        break;

    case ')':
        return 70;
        break;

    case '.':
        return 71;
        break;

    default:
        return 0;
        break;
    }
}

int changeLetter(int letter){
    switch (letter)
    {
    case 1:
        return 'a';
        break;

    case 2:
        return 'b';
        break;

    case 3:
        return 'c';
        break;

    case 4:
        return 'd';
        break;

    case 5:
        return 'e';
        break;

    case 6:
        return 'f';
        break;
        
    case 7:
        return 'g';
        break;

    case 8:
        return 'h';
        break;

    case 9:
        return 'i';
        break;

    case 10:
        return 'j';
        break;

    case 11:
        return 'k';
        break;

    case 12:
        return 'l';
        break;

    case 13:
        return 'm';
        break;

    case 14:
        return 'n';
        break;

    case 15:
        return 'o';
        break;

    case 16:
        return 'p';
        break;

    case 17:
        return 'q';
        break;

    case 18:
        return 'r';
        break;

    case 19:
        return 's';
        break;

    case 20:
        return 't';
        break;

    case 21:
        return 'u';
        break;

    case 22:
        return 'v';
        break;

    case 23:
        return 'w';
        break;

    case 24:
        return 'x';
        break;

    case 25:
        return 'y';
        break;

    case 26:
        return 'z';
        break;

    case 27:
        return 'A';
        break;

    case 28:
        return 'B';
        break;

    case 29:
        return 'C';
        break;

    case 30:
        return 'D';
        break;

    case 31:
        return 'E';
        break;

    case 32:
        return 'F';
        break;
        
    case 33:
        return 'G';
        break;

    case 34:
        return 'H';
        break;

    case 35:
        return 'I';
        break;

    case 36:
        return 'J';
        break;

    case 37:
        return 'K';
        break;

    case 38:
        return 'L';
        break;

    case 39:
        return 'M';
        break;

    case 40:
        return 'N';
        break;

    case 41:
        return 'O';
        break;

    case 42:
        return 'P';
        break;

    case 43:
        return 'Q';
        break;

    case 44:
        return 'R';
        break;

    case 45:
        return 'S';
        break;

    case 46:
        return 'T';
        break;

    case 47:
        return 'U';
        break;

    case 48:
        return 'V';
        break;

    case 49:
        return 'W';
        break;

    case 50:
        return 'X';
        break;

    case 51:
        return 'Y';
        break;

    case 52:
        return 'Z';
        break;

    case 53:
        return '0';
        break;

    case 54:
        return '1';
        break;

    case 55:
        return '2';
        break;

    case 56:
        return '3';
        break;

    case 57:
        return '4';
        break;

    case 58:
        return '5';
        break;

    case 59:
        return '6';
        break;

    case 60:
        return '7';
        break;

       case 61:
        return '8';
        break;

    case 62:
        return '9';
        break;

    case 63:
        return ' ';
        break;

    case 64:
        return '!';
        break;

    case 65:
        return '#';
        break;

    case 66:
        return '%';
        break;

    case 67:
        return '?';
        break;

    case 68:
        return '@';
        break;

    case 69:
        return '(';
        break;

    case 70:
        return ')';
        break;

    case 71:
        return '.';
        break;    

    default:
        return ' ';
        break;
    }
}

void main(){
    char inputString[STR_SIZE];
    char outputString[STR_SIZE];
    int convertedString[STR_SIZE];
    int strLength;
    int inv[2][2]={69,3,3,67};
    int plainText[2][STR_SIZE];
    int cipherText[2][STR_SIZE];
    int convertedText[STR_SIZE];
    int column=0;

    //Input
    printf("Enter the string you want to input:\n");
    scanf("%s", &inputString);
    strLength=strlen(inputString);
    printf("The Length of your string is: %d\n",strLength);

    //String to Number Logic
    for(int i=0;i<strLength;i++){
        convertedString[i]=changeNum(inputString[i]);
        printf("%d ",convertedString[i]);
    }
    for(int i=strLength;i<STR_SIZE;i++){
        convertedString[i]=0;
    }
    printf("\n");

    //Number Array to 2-D Array
     for(int i=0;i<strLength;i+=2){
        if(convertedString[i]== 0){
            plainText[1][column]=0;
        }else{
        plainText[0][column]=convertedString[i];
        plainText[1][column]=convertedString[i+1];
        }
        column++;
   }
   printf("The no. of columns of ciphertext matrix is %d\n", column);

    //Printing Plain Text Array
    printf("The ciphertext matrix is:\n");
   for(int i=0;i<KEY_SIZE;i++){
        for(int j=0;j<column;j++){
            printf("[%d]",plainText[i][j]);
        }
        printf("\n");
   }

   //Multiplying by Key Matrix
    for(int i=0;i<KEY_SIZE;i++){
        for(int j=0;j<column;j++){
            cipherText[i][j]=0;
            for(int k=0; k<KEY_SIZE;k++){
            cipherText[i][j] += inv[i][k]*plainText[k][j];
            }
        }
   }

    //Printing the cipher Text Array
    printf("The plaintext matrix is:\n");
   for(int i=0;i<KEY_SIZE;i++){
        for(int j=0;j<column;j++){
            printf("[%d]",cipherText[i][j]);
        }
        printf("\n");
   }

   //Returning ciphertext array to 1D array
   int c2=0;
    for(int i=0;i<column*KEY_SIZE;i+=2){
        convertedText[i]=cipherText[0][c2];
        convertedText[i+1]=cipherText[1][c2];
        c2++;
    }

    //Modulus of array
    for (int i = 0; convertedText[i]!=0; i++)
    {
        if(convertedText[i]<0){
            convertedText[i]= convertedText[i]*-1;
        }
    }

    //checking Remainder of cipher text array
    printf("\nThe converted 1D array is:\n");
    for (int i = 0; convertedText[i]!=0; i++)
    {
        convertedText[i]=convertedText[i]%71;
        printf("%d ",convertedText[i]);
    }

    //Number to String
    int lengthString=0;
    printf("\nThe Output string is:");
        for(int i=0;convertedText[i]!=0;i++){
        outputString[i]=changeLetter(convertedText[i]);
        lengthString++;
    }
    lengthString++;
   /*  outputString[lengthString]="\0"; */
    printf("%s ",outputString);
}