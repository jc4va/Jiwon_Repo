// Name: Jiwon Cha
// ID: jc4va
// Date: 11/16/17
// Name: linkedlist.c

#include<stdio.h>

struct list_item {
  struct list_item *prev, *next;
  void *datum;
};

struct list {
  struct list_item *head, *tail;
  unsigned length;
};

int main(){

  // Set up
  int num;
  printf("Enter how many values to input: \n");
  scanf("%d", &num);
  struct list *l = (struct list*) malloc(sizeof(struct list));
  l->head = NULL; l->tail = NULL;

  // Get values
  int i;
  for (i = 0; i < num; i++){
    int input;
    printf("Enter value %d: \n", i);
    scanf("%d", &input);
    struct list_item *t = (struct list_item*) malloc(sizeof(struct list_item));
    t->datum = input;
    t->next = l->head;
    l->head = t;
    l->length++;
  }
    struct list_item *itr = l->head;
    while(itr){
      printf("%d", itr->datum);
      itr = itr->next;
    }
    printf("\n");
    free(l); 
    return 0;
}

