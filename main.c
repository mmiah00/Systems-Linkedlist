
#include<stdlib.h>
#include<stdio.h>
#include "list.h"

int main() {
  struct node * test = calloc (sizeof (struct node), 1);
  test = NULL;
  printf ("Print empty list: \n");
  print_list(test);
  printf ("Adding 0 - 20 to the list: \n");
  for(int i = 0; i < 20; i++) {
    test = insert_front(test,i);
  }
  print_list(test);
  printf("Removing value 2 from the list:");
  test = remove_node(test, 2);
  print_list(test);
  printf("Freeing List: \n");
  test = free_list(test);
  print_list(test);
  return 0;
}
