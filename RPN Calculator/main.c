#include <stdio.h>
#include "cmake-build-debug/stackContiguous.h"

void main(){
    char ch;
    Stack s;

    createStack(&s);
    printf("Enter the expression in this format:\n ?a?b+= instead of a+b= \n");
    while (true) {

    scanf("%c", &ch);

        switch (ch) {
            double num;
            double out;
            case '?':
                //printf("Enter Number ");
                scanf("%lf", &num);
                push(num, &s);
                break;

            case '+':
                out = pop(&s) + pop(&s);
                push(out, &s);
                break;

            case '-':
                out = pop(&s) - pop(&s);
                push(out, &s);
                break;

            case '*':
                out = pop(&s) * pop(&s);
                push(out, &s);
                break;

            case '/':
                out = pop(&s) / pop(&s);
                push(out, &s);
                break;

            case '=':
                printf("%.1f", top(&s));
                break;

            default:
                printf("\nEnter the expression in this format:\n ?a?b+= instead of a+b= \n");


        }
    }


}
