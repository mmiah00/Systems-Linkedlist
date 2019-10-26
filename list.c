#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list (struct node * n) {
  printf ("[ ");
  struct node * now = n ;
  while (now -> next != NULL) {
    printf ("%d ", now->i);
    now = now->next;
  }
  printf ("]\n");
}

struct node * insert_front (struct node * n, int x) {
  struct node * new = calloc(sizeof (n),1);
  new->i = x;
  new->next = n;
  return new;
}

struct node * free_list (struct node * n) {
  struct node * was = n;
  struct node * now = n;
  while (now -> next != NULL) {
    free (now);
    now = now -> next;
  }
  free (n);
  return was;
}

struct node * remove_node (struct node * front, int data) {
  struct node * now = front;
  if (front -> i == data && front -> next == NULL) {
    free (front);
  }
  else {
    remove_node (front -> next, (front -> next) -> i );
  }
  return now;
}
