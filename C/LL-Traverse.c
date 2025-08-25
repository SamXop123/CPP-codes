void traverseList(struct Node* head) {
    struct Node* current = head;
    
    printf("Linked list: ");
    
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
    
    printf(" -> NULL\n");
}
