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
  struct node * was = n;
  struct node * now;
  while (n -> i != '\0') {
    int *x = malloc (sizeof (int));
    free (n -> now);
    now = now -> next;
  }
  return was; 
}
