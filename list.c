#include <stdio.h>
#include "list.h"

void print_list (struct node * n) {
  printf ("[ ");
  struct node * now = n ;
  while (now -> next != NULL) {
    printf ("%d ", now->i);
    now = now->next;
  }
  printf ("]\n);
}

struct node * insert_front (struct node * n, int x) {
  struct node * new = calloc(sizeof (n));
  new->i = x;
  new->next = n;
  return new;
}

struct node * free_list (struct node * n) {
  struct node * was = n;
  while (now -> next != NULL) {
    free (now);
    now = now -> next;
  }
  free (n);
  return was;
}

struct node * remove (struct node * front, int data) {
  struct node * now = front;
  if (front -> value == data && start -> next == NULL) {
    free (front);
  }
  else {
    remove (start -> next, (start -> next) -> i );
  }
  return now;
}
