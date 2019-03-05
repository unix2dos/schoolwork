//
//  main.c
//  calc
//
//  Created by liuwei on 2019/3/13.
//  Copyright © 2019年 liuwei. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b; char op;
    while (scanf("%d%c%d", &a, &op, &b)) {
        switch (op) {
            case '+':
                printf("%d%c%d=%d\n", a, op, b, a+b);
                break;
            case '-':
                printf("%d%c%d=%d\n", a, op, b, a-b);
                break;
            case '*':
                printf("%d%c%d=%d\n", a, op, b, a*b);
                break;
            case '/':
                if (b == 0) {
                    printf("divisor can't be zero\n");
                    break;
                }
                printf("%d%c%d=%.1lf\n", a, op, b, a*1.0/b);
                break;
            default:
                printf("unsupport operator\n");
                break;
        }
    }
    return 0;
}
