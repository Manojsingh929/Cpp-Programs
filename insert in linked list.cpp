#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
void insert(int item, int lo);
struct node *first = NULL;
struct node *last = NULL;
void create(int a[],int size);
int count();
int search(int item);
void display();
void create(int a[],int size)
{
    first=(struct node*)malloc(size*sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<size;i++)
    {
        struct node *temp = (struct node*)malloc(size*sizeof(struct node));
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

}

void display()
{
    struct node *p = first;
    while(p!=NULL)
    {
        cout<<"\n"<<p->data;
        p = p->next;
    }
}
int count()
{
    int c = 0;
    struct node *p = first;
    while(p!=NULL)
    {
        p=p->next;
        c++;
    }
    return c;
}

void insert(int item, int lo)
{
    struct node *p = first;
    if(p->data == lo)
    {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = item;
        temp->next = first;
        first = temp;
    }
    else if(last->data ==lo)
    {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = item;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
    else
    {
        struct node *s;
        s=p;
        p=p->next;
        while(p!=NULL)
        {
            if(p->data == lo)
            {
                struct node *temp = (struct node*)malloc(sizeof(struct node));
                temp->data = item;
                temp->next = p;
                s->next = temp;
            }
            else{
                s=s->next;
                p=p->next;
            }
        }
    }
}
int main()
{
    int ar[] = {1,2,3,4,5,6};
    create(ar,6);
    insert(12,5);
    display();
    //display();
    //int a =count();
    //cout<<"\n"<<a;
    //int l = search(4);
    //cout<<"\n"<<l;
}
