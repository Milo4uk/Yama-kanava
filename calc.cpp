#include <stdio.h>
#include <iostream>
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

int str_len(char* s) {
    int len;
    char* p = s;
    for (len = 0; *p; p++, len++);
    return len; 
}

int convertation_decBase(char* N, int B1) {
    int result = 0;
    int n = str_len(N); //кол-во цифр в числе
    int digit; //разряд

    for (int i = n; i > 0; i--)
    {
        for (int b = 0; b < B1; b++)
        {
            if (N[n - i] == Numbers[b])
            {
                digit = b;
                break;
            }
        }
        result = result + digit * pow(B1, i - 1);

    }
    return result;
}

/*char convertation_newBase() {

}*/

int main() {
    input(Num[7], Base1, Base2);
    printf("%d", convertation_decBase(Num, Base1));
    return 0;
}