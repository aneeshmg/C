#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
  int data;
  struct node *next;
} node;

int trace = 0;
int sample_data = 0;

node new_node(void);
void print(void);
void add(node*, node*);
void display(node*);

node new_node() {
  node *t;
  t = malloc(sizeof(node));
  t->data = ++sample_data;
  t->next = NULL;
  return *t;
}

void print() {
  printf("check %d",++trace);
}

void add(node *head, *new) {
  node *temp = head;
  if(head->next == NULL)
    head->next = new;
  else {
    while(temp->next != NULL)
      temp = temp->next;
  }
  temp->next = new;
}

void display(node* head) {
  node *temp;
  *temp = *head;
  while(temp->next != NULL) {
    printf("%d\n", temp->data);
    temp = temp->next;
  }
}

int main(){

  node *head, *sample;
  *head = new_node();
  *sample = new_node();
  add(head, sample);
  free(sample);
  *sample = new_node();
  add(head, sample);
  free();

}
