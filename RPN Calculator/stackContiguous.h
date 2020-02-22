//
// Created by dilu on 1/4/20.
//

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wimplicit-function-declaration"
#ifndef DATASTRUCT_EXERICE_STACKCONTIGUOUS_H
#define DATASTRUCT_EXERICE_STACKCONTIGUOUS_H

#endif //DATASTRUCT_EXERICE_STACKCONTIGUOUS_H

#include <stdio.h>
#include <jmorecfg.h>
#include <stdbool.h>

#define MAXSTACK 10

typedef double stackEntry;

typedef struct {
    int top;
    stackEntry entry[MAXSTACK];
}Stack;

void createStack(Stack *s){
    s->top = -1;
}

bool stackEmpty(Stack *s) {
    if(s->top == -1)
        return 1;
    else
        return 0;
}

double pop(Stack *s){
    if(stackEmpty(s)){
        printf("Stack Empty");
        exit(1);
    } else
        return s->entry[s->top--];
}

bool stackFull(Stack *s) {
    if(s->top == MAXSTACK-1)
        return 1;
    else
        return 0;
}

void push(stackEntry e, Stack *s){
    if(stackFull(s)){
        printf("stack full");
        exit(1);
    } else
        s->entry[++s->top] = e;
}

void clear(Stack *s){
    s->top = -1;
}

double top(Stack *s){
    return s->entry[s->top];
    //clear(s);
}

#pragma clang diagnostic pop
