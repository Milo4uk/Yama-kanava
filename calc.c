//
//  calc.c
//  Space
//
//  Created by Mila ✨ on 16.11.2021.
//

#include <stdio.h>
#include <iostream>
#include <string.h>

char Num;
int Base1, Base2;
char Numb[16] = { '0','1','2','3','4','5','6','7','8','9','A', 'B', 'C', 'D', 'E', 'F'};


void input(N, B1, B2) {
    printf("Write your number:\n");
    scanf_s("%s", &N);
    printf("Write the base:\n");
    scanf_s("%d", &B1);
    printf("Write the new base:\n (2,)");
    scanf_s("%d", &B2);
}

int convertation_dec() {

}

char convaertation_newBase() {
    //приходит int потом делаем %Base2 и после записываем это как стринг
    char p;
    int remainder,i ,j =0;
    char M[i];
    
    if (Base2<10){
        while ((remainder/Base2)>Base1) {
            p = (remainder%Base2);
            scanf("%s", &M[i++]); // записываем в массив
            remainder = (p/Base2);
        }
    
    } else if (Base2>10){
        
    }
    
    p = strrev(M[i]);
        
    }
    return p;
}

