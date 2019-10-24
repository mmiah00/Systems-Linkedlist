#include <stdio.h>
#include "list.h"

void print_list (struct node * n) {
  printf ("[ ");
  struct node * now = n ;
  while (now -> i != '\0') {
    printf ("%d ", now->i);
    now = now->next;
  }
  printf ("]");
}

struct node * insert_front (struct node * n, int x) {
  struct node * new;
  new->i = x;
  new->next = n;
  return new;
}

struct node * free_list (struct node * n) {
  struct node * start = n;
  struct node * now = n;
  while (now -> i != '\0') {
    free (n -> next);
    now = now -> next;
  }
  return n;
}
