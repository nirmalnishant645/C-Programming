#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int no;
    float at, bt, pc, tat, wt, rt, rd;
    struct node *next;
} NODE; // Calling struct as NODE

void create_insert(NODE **p, int no, float at, float bt, float *fr)
{
    // CREATE NODE
    NODE *q, *r = *p;
    q = (NODE *)malloc(sizeof(NODE));
    q->no = no;
    q->at = at;
    q->bt = bt;
    q->rt = *fr - at;
    q->pc = *fr + bt;
    q->tat = q->pc - at;
    q->wt = q->tat - bt;
    q->rd = q->tat / bt;
    *fr = *fr + bt; // Update First Response for next NODE

    // INSERT NODE AT END (Queue)
    q->next = NULL;
    if (*p == NULL)
        *p = q;
    else
    {
        while (r->next != NULL)
            r = r->next;
        r->next = q;
    }
}

void gantt_chart(NODE *p, int process)
{
    int i;
    NODE *r = p;
    printf("\n\nGannt Chart:\n");
    for (i = 1; i <= process; i++)
        printf("----------------");
    printf("\n");

    for (i = 1; i <= process; i++)
    {
        printf("|\tP%d\t", p->no);
        p = p->next;
    }
    printf("|\n");

    for (i = 1; i <= process; i++)
        printf("----------------");

    printf("\n");
    printf("%.1f      \t", r->at);
    for (i = 1; i <= process; i++)
    {
        printf("%.1f      \t", r->pc);
        r = r->next;
    }
}

void display(NODE *p, int process)
{
    float ttat, twt, trd, trt, tbt;
    ttat = twt = trd = trt = tbt = 0;
    printf("\n\n\nProcess Details:");
    while (p != NULL)
    {
        printf("\n Process %d: \n", p->no);
        printf("\tArrival Time: %.2f\n", p->at);
        printf("\tBurst Time: %.2f\n", p->bt);
        printf("\tTurn Around Time: %.2f\n", p->tat);
        printf("\tWaiting Time: %.2f\n", p->wt);
        printf("\tRelative Delay: %.2f\n", p->rd);
        printf("\tResponse Time: %.2f\n", p->rt);
        // Storing the Total value for average
        ttat += p->tat; // ttat = ttat + p->tat
        twt += p->wt;
        trd += p->rd;
        trt += p->rt;
        tbt += p->bt;

        p = p->next;
    }
    printf("\n\n\nOverall Details:\n");
    printf(" Throughput: %.2f\n", process / tbt);
    printf(" Average Turn Around Time: %.2f\n", ttat / process);
    printf(" Average Waiting Time: %.2f\n", twt / process);
    printf(" Average Relative Delay: %.2f\n", trd / process);
    printf(" Average Response Time: %.2f\n", trt / process);
}

void main()
{
    NODE *head = NULL;
    int process, i;
    float arrival_time, burst_time, first_response;
    printf("Enter the no. of Process: ");
    scanf("%d", &process);
    for (i = 1; i <= process; i++)
    {
        printf("\nEnter the Details for Process %d: \n", i);
        printf("\tArrival Time: ");
        scanf("%f", &arrival_time);
        printf("\tBurst Time: ");
        scanf("%f", &burst_time);
        if (i == 1 && arrival_time == 0)
            first_response = arrival_time;
        create_insert(&head, i, arrival_time, burst_time, &first_response);
    }

    printf("\n<-------------------------------------------------  START ------------------------------------->\n");
    gantt_chart(head, process);
    display(head, process);
    printf("\n<--------------------------------------------------  END -------------------------------------->\n");
}