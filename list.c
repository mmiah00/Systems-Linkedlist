#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list (struct node * n) {
  printf ("[ ");
  if (n != NULL) {
    struct node * now = n ;
    while (now -> next != NULL) {
      printf ("%d ", now->i);
      now = now->next;
    }
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
  if (front == NULL) {
    return NULL;
  }
  if (front -> i == data) { //if node you want to remove is the first node
    struct node *second = front -> next;
    free (front);
    return second;
  }
  else {
    struct node *now = front;
    struct node *nxt = front -> next;
    while (nxt -> next != NULL) {
      if (nxt -> i == data) {
        now -> next = nxt -> next;
        free (nxt);
      }
      now = now -> next;
      nxt = now -> next; 
    }
  }
  return front;
}
