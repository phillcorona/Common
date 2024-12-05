#include <stddef.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

/**
 * Calculates the size of a linked list.
 * @param begin_list Pointer to the first element of the list.
 * @return The number of elements in the list.
 */
int ft_list_size(t_list *begin_list)
{
    int count = 0;
    t_list *current = begin_list;

    while (current != NULL) // Traverse the list until the end.
    {
        count++;           // Increment the counter for each node.
        current = current->next; // Move to the next node.
    }
    return count; // Return the total count of elements.
}
