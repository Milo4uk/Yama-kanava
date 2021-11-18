#include <stdio.h>
#include <string.h>
#include <math.h>

char Num[8];
int Base1, Base2;
char Numbers[16] = { '0','1','2','3','4','5','6','7','8','9','A', 'B', 'C', 'D', 'E', 'F' };


void input(char N, int B1, int B2) {
    printf("Write your number:\n");
    scanf_s("%s", &N, 8);
    printf("Write the base:\n");
    scanf_s("%d", &B1);
    printf("Write the new base:\n");
    scanf_s("%d", &B2);
}

/*int str_len(char* ch) {
    int len;
    for (len = 0; *ch; len++) {
        printf("%c\n", ch[len]);
        ch++;
    };
    return len; 
}*/

int convertation_dec(const char* N, int B1) {
    int result = 0;
    int n = strlen(N); //кол-во цифр в числе
    int dig = 0; //разряд
    for (int i = 8; i > 0; i--) {
        printf("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF\n");
        for (int b = 0; b < 3; b++) {
            if (N[n - i] == Num[b]) {
                dig = b;
                break;
            }
        }
        result = result + dig * pow(B1, i - 1);
    }
    return result;
}

char convertation_newBase() {
    char p;
    int remainder, i = 0, l;
    char M;

    int Cont[] = { 'A', 'B', 'C', 'D', 'E', 'F' };

    p = convertation_dec(Num, Base1);
    remainder = p;

    if (Base2 < 10) {
        do {
            p = (remainder % Base2);
            scanf("%s", &M[i++]); // записываем в массив
            remainder = (p / Base2);
        } while ((remainder / Base2) > Base1);

    }
    else do {
        if (Base2 > 10 && Base2 <= 16) {
            if (p = (remainder % Base2) > 9) {
                p = (remainder % Base2);
                l = p % 10;
                p = Cont[l];
                //сделать * на место в массиве как варик...
            }
            scanf("%s", &M[i++]);
            remainder = (p / Base2);
        }
    } while ((remainder / Base2) > Base1);

    p = strrev(M);
    return p;
}

int main() {
    input(Num[7], Base1, Base2);
    //printf("%d\n", str_len(Num));
    printf("%d", convertation_dec(Num, Base1, Numbers));
    return 0;
}