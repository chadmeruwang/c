#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* nxt;
}; 

int main() {
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->val = 0;
    head->nxt = NULL;
    struct node* p = head;
    for (int i = 1; i < 7; i++) {
        p->nxt = (struct node*)malloc(sizeof(struct node));
        p->nxt->val = i;
        p->nxt->nxt = NULL;
        p = p->nxt;
    }
    p = head;
    while (p != NULL) {
        printf("%d ", p->val);
        p = p->nxt;
    }
    printf("\n");
}