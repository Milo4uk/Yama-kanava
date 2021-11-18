//
//  calc.c
//  Space
//
//  Created by Mila ✨ on 16.11.2021.
//

#include <stdio.h>
#include <string.h>

char Num;
int Base1, Base2;
char Numb[16] = { '0','1','2','3','4','5','6','7','8','9','A', 'B', 'C', 'D', 'E', 'F'};


void input(N, B1, B2) {
    printf("Write your number:\n");
    scanf_s("%s", &N);
    printf("Write the base:\n");
    scanf_s()("%d", &B1);
    printf("Write the new base:\n (2,)");
    scanf_s()("%d", &B2);
}

int convertation_dec() {
    return 0;
}

char convertation_newBase() {
    //приходит int потом делаем %Base2 и после записываем это как стринг
    char p;
    int remainder, i = 0, l;
    char M[i];
    int Cont[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    
    p = convertation_dec(Numb, Base1);
    remainder = p;
    
    if (Base2<10){
        do {
            p = (remainder%Base2);
            scanf("%s", &M[i++]); // записываем в массив
            remainder = (p/Base2);
        } while ((remainder/Base2)>Base1);
    
    } else do {
        if (Base2>10 && Base2<=16){
        if (p = (remainder%Base2)>9) {
            p = (remainder%Base2);
            l = p % 10;
            p = Cont[l];
            //сделать * на место в массиве как варик...
        }
        scanf("%s", &M[i++]);
        remainder = (p/Base2);
    }
    } while ((remainder/Base2)>Base1);
    
    p = strrev(M);
    return p;
    }

