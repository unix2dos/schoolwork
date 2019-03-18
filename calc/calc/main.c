//
//  main.c
//  calc
//
//  Created by liuwei on 2019/3/13.
//  Copyright © 2019年 liuwei. All rights reserved.
//

#include <stdio.h>

void clean_buffer(void);

int main(int argc, char * argv[]) {
    
    printf("please input calc formula:\n");
    
    while (1) {

        float a, b; char op;
        if (scanf("%f%c%f", &a, &op, &b) != 3){
            if (getchar() == 'q') {
                return 0;
            } else {
                printf("usage:\n"
                "\t1. input: 5-2 or 5/2\n"
                "\t2. input q to exit\n");
            }
            goto CLEAN;
        }

        switch (op) {
            case '+':
                printf("%.1f%c%.1f=%.1f\n", a, op, b, a+b);
                break;
            case '-':
                printf("%.1f%c%.1f=%.1f\n", a, op, b, a-b);
                break;
            case '*':
                printf("%.1f%c%.1f=%.1f\n", a, op, b, a*b);
                break;
            case '/':
                if (b == 0) {
                    printf("divisor can't be zero\n");
                    break;
                }
                printf("%.1f%c%.1f=%.1f\n", a, op, b, a*1.0/b);
                break;
            default:
                printf("unsupport operator\n");
                break;
        }
    CLEAN:
        clean_buffer();
    }

    return 0;
}


// clean input buffer
void clean_buffer() {
    while (getchar() != '\n') {
        continue;
    }
}

