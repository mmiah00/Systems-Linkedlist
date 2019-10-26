
#include<stdlib.h>
#include<stdio.h>
#include "list.h"

int main() {
  struct node * test = calloc (sizeof (struct node));
  test = NULL;
  printf ("Print empty list: \n");
  print_list(list);
  printf ("Adding 0 - 20 to the list: \n");
  for(int i = 0; i < 20; i++) {
    list = insert_front(list,i);
  }
  print_list(list);
  printf("Removing value 2 from the list:");
  list = remove_node(list, 2);
  print_list(list);
  printf("Freeing List: \n");
  list = free_list(list);
  print_list(list);
  return 0; 
}
