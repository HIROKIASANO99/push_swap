#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void *duplicate_content(void *content) {
    return strdup((char *)content);
}

void print_content(void *content) {
    printf("%s\\n", (char *)content);
}

int main(void) {
    char *content1 = strdup("World");
    char *content2 = strdup("Hello");
    char *content3 = strdup("42");

    t_list *head = ft_lstnew(content1);
    t_list *node2 = ft_lstnew(content2);
    t_list *node3 = ft_lstnew(content3);

    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    t_list *new_list = ft_lstmap(head, duplicate_content, free);

    ft_lstiter(new_list, print_content);

    // メモリ解放
    ft_lstclear(&head, free);
    ft_lstclear(&new_list, free);

    return 0;
}
