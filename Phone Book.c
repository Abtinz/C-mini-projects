#include<stdio.h>

struct phone
{
    long int no;
    long long int phone;
    struct phone *next;
};
struct phone *head=NULL;
struct phone *tail=NULL;
int mainmenu(void);
struct phone *addnode(void);
void removenode(struct phone *head);
void list(struct phone *head);
int main()
{
    mainmenu();
}

int mainmenu(void)
{
    printf("1) Add\n");
    printf("2) Remove\n");
    printf("3) List\n");
    printf("4) Quit\n");
    int choise;
    scanf("%d",&choise);
    if(choise==1)
    addnode();
    else if(choise==2)
    removenode(head);
    else if(choise==3)
    list(head);
    else if(choise==4)
        return 0;
    else
        mainmenu();

}
struct phone *addnode(void)
{
    long int no;
    long long int phone;
    struct phone *newnode;
    newnode=(struct phone*)malloc(sizeof(struct phone));
    printf("No: ");
    scanf("%ld",&no);
    printf("Phone: ");
    scanf("%lld",&phone);
    newnode->no=no;
    newnode->phone=phone;
    if(head==NULL)
    {
        head=newnode;
        head->next=NULL;
        tail=head;
    }
    else if(head!=NULL)
    {
        tail->next=newnode;
        tail->next->next=NULL;
        tail=tail->next;;
    }
   mainmenu();
}
void removenode(struct phone *head)
{
    long int no;
    printf("No: ");
    scanf("%ld",&no);
    struct phone *current;
    current=(struct phone*)malloc(sizeof(struct phone));
    int k=0;
    for(current=head;current!=NULL;current=current->next)
    {
        if(current->no==no)
        {
         k=1;
         free(current);
         current=current->next;
         break;
        }
    }
        if(k==1)
            printf("%ld  has been removed\n",no);
        else if(k==0)
            printf("%ld does not exist\n",no);
            mainmenu();
}
void list(struct phone *head)
{
    struct phone *current;
    current=(struct phone*)malloc(sizeof(struct phone));
    int i=1;
    for(current=head;current!=NULL;current=current->next,i++)
    {
        printf("%d)\n",i);
        printf("No: %ld\n",current->no);
        printf("Phone: %lld\n",current->phone);
        mainmenu();
    }
}
