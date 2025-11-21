#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _node node_t;
struct _node {
    char *data;
    node_t *next;
};

void add_to_front(node_t **head_ptr, char *data) {
  node_t *node = (node_t *) malloc(sizeof(node_t));
  node->data = (char *) malloc(strlen(data) + 1); // null-terminator
  strcpy(node->data, data);        // copies null terminator as well
  node->next = *head_ptr;
  *head_ptr = node;
}

void print_list(node_t *head) {
  for (node_t *curr = head; curr != NULL; curr = curr->next) {
    printf("\"%s\" -> ", curr->data);
  }
  printf("NULL\n");
}

void free_list(node_t *head){
  while (head != NULL) {
    node_t *temp = head->next;
    free(head->data);
    free(head);
    head = temp;
  }
}

int main() {
  node_t *head = NULL;
  add_to_front(&head, "aaardvark");
  add_to_front(&head, "bat");
  add_to_front(&head, "cat");
  add_to_front(&head, "dog");

  print_list(head);

  free_list(head);
  return 0;
}
