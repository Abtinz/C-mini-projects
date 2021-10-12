#include <stdio.h>
#include <stdlib.h>
int cnt=10;
struct point
{
    int x;
    int y;
};
struct node
{
    struct point data;
    struct node *next;
};
struct node xy;
struct node *head = NULL;
struct node *after = NULL;
int x,y;
struct node * addnode(void);
struct node * checknode(struct node *head);
struct node * removenode(int x,int y);
void printnode(struct node *head);
int main()
{
    for(int i=0; i<10; i-=-1)
        addnode();
    checknode(head);
    printnode(head);
}
struct node *addnode(void)
{
    scanf("%d %d",&x,&y);
    struct node *nodexy = NULL;
    nodexy = (struct xy*)malloc(sizeof(struct node));
    nodexy->data.x=x;
    nodexy->data.y=y;
    if (head != NULL)
    {
        after->next =nodexy;
        after->next->next = NULL;
        after =after->next;
    }
    if (head == NULL)
    {
        head = nodexy;
        head->next= NULL;
        after = head;
    }

}
struct node * checknode(struct node *head)
{
    struct node *currx;
    struct node *curry;
    for (currx= head; currx!= NULL; currx = currx->next)
        for (curry=head; curry!= NULL; curry=curry->next)
            if ( currx->data.x==curry->data.x )
            {

                if (currx->data.y < curry->data.y )
                {
                    cnt--;
                    removenode(curry->data.x,curry->data.y);
                }

                else if (currx->data.y > currx->data.y)
                {
                    cnt--;
                    removenode(currx->data.x,currx->data.y);
                }
            }
}
struct node * removenode(int x,int y)
{

    if ((head->data.x == x) && (head->data.y == y))
    {
        free(head);
        head = head->next;
    }

    else
    {
        if ((head->next->data.x == x) && (head->next->data.y == y))
        {
            free(head->next);
            head->next=head->next->next;
        }
        else
        {
            if ((head->next->next->data.x == x) && (head->next->next->data.y == y))
            {
                free(head->next->next);
                head->next->next=head->next->next->next;
            }
            else
            {
                if ((head->next->next->next->data.x == x) && (head->next->next->next->data.y == y))
                {
                    free(head->next->next->next);
                    head->next->next->next=head->next->next->next->next;
                }
                else
                {
                    if ((head->next->next->next->next->data.x == x) && (head->next->next->next->next->data.y == y))
                    {
                        free(head->next->next->next->next);
                        head->next->next->next->next=head->next->next->next->next->next;
                    }
                    else
                    {
                        if((head->next->next->next->next->next->data.x == x) && (head->next->next->next->next->next->data.y == y))
                        {
                            free(head->next->next->next->next->next);
                            head->next->next->next->next->next=head->next->next->next->next->next->next;
                        }
                        else
                        {
                            if((head->next->next->next->next->next->next->data.x == x) && (head->next->next->next->next->next->next->data.y == y))
                            {
                                free(head->next->next->next->next->next->next);
                                head->next->next->next->next->next->next=head->next->next->next->next->next->next->next;
                            }
                            else
                            {
                                if((head->next->next->next->next->next->next->next->data.x == x) && (head->next->next->next->next->next->next->next->data.y == y))
                                {
                                    free(head->next->next->next->next->next->next->next);
                                    head->next->next->next->next->next->next->next=head->next->next->next->next->next->next->next->next;
                                }
                                else
                                {
                                    if((head->next->next->next->next->next->next->next->next->data.x == x) && (head->next->next->next->next->next->next->next->next->data.y == y))
                                    {
                                        free(head->next->next->next->next->next->next->next->next);
                                        head->next->next->next->next->next->next->next->next=head->next->next->next->next->next->next->next->next->next;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void printnode(struct node *head)
{
    for(int i=0; i<cnt; i-=-1)
    {
        if(head->data.y!=NULL)
            printf("%d %d\n",head->data.x,head->data.y);
        head=head->next;
    }
}
