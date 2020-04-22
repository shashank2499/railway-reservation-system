#include"struct.h"
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void cancel_ticket(struct passenger **head1_ref1,struct passenger **head2_ref2,int pnr)
{
    struct passenger *y=*head1_ref1;
    struct passenger *x=*head2_ref2;
    struct passenger *prev;
    struct passenger *prev1;
    struct passenger *prev3;
    struct passenger *temp;
    if(x->pnr_no=pnr)
    {
        *head2_ref2=x->next;
        free(x);
        printf("done");
    }
    else{
    while(x->next!=NULL)
    {
        if(x->pnr_no==pnr)
        {
            if(x->next==NULL)
            {
                x=NULL;
                printf("cancelled");
                }
            else
            {
             prev->next=x->next;
             printf("YOUR SEAT HAS BEEN CANCELLED\n");
             printf("WE WISH TO SERVE YOU AGAIN");
             break;
            }
        }
        prev=x;
        x=x->next;
       }
       if(x->pnr_no==pnr)
       {
           prev->next=NULL;
           printf("cancel");
       }
    }
       /*if(y->pnr_no==pnr)
       {
           if(x!=NULL)
           {
               temp=x;
               y=temp;
               *head2_ref2=x->next;
               free(x);
               printf("can");
           }
           else
{
            *head1_ref1=y->next;
            free(y);
           }
           printf("cancel");
       }
       else
       {
    while(y->next!=NULL)
    {
        if(y->pnr_no==pnr)
        {
            if(head2_ref2==NULL)
            {
                prev1->next=y->next;
                printf("Seat cancelled succesfully");
            }
            else
            {
                while(x->next!=NULL)
                {
                    prev3=x;
                    x=x->next;
                }
                prev1->next=x;
                x->next=y->next;
                prev3->next=NULL;
                printf("delete");
            }
        }
        prev1=y;
        y=y->next;
    }
}*/
}
