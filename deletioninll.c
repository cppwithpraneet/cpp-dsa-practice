#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void linkedlisttraversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    
}
struct Node * deletefirst(struct Node *head){//case1
struct Node *ptr=head;
head=head->next;
free(ptr);
return head;
}
struct Node * deleteatindex(struct Node *head,int index){//case2
struct Node*p=head;
struct Node*q=head->next;
for(int i=0;i<index-1;i++){
    p=p->next;
    q=q->next;
}
p->next=q->next;
free(q);
return head;
}
//case3
struct Node * deleteatlast(struct Node *head){
    struct Node*p=head;
struct Node*q=head->next;
while(q->next!=NULL){
    p=p->next;
    q=q->next;
}
p->next=NULL;
free(q);
return head;
}


int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=27;
    third->next=fourth;
    fourth->data=56;
    fourth->next=NULL;
    printf("link list before deletion\n");
    linkedlisttraversal(head);
  //  head=deletefirst(head);
  //head=deleteatindex(head,2);
  head=deleteatlast(head);
    printf("link list after deletion\n");
    linkedlisttraversal(head);
    return 0;

}