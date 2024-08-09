#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
typedef struct s_stack_node
{
	int data;
	struct s_stack_node *next;
	struct s_stack_node *prev;
} t_stack_node;

t_stack_node *stack_store(char **tabs);

int ft_atoi(const char *str)
{
	int result = 0, sign = 1, i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
void print_stack(t_stack_node *stack)
{
	while (stack != NULL)
	{
		printf("*%d\n", stack->data);
		stack = stack->next;
	}
}
t_stack_node *node_add(t_stack_node *new_node, char *tabs, t_stack_node *head)
{
	new_node->data = ft_atoi(tabs);
	new_node->next = NULL;
	new_node->prev = head;
	return (new_node);
}
t_stack_node *stack_store(char **tabs)
{
	t_stack_node *new_node = NULL, *stack = NULL, *head = NULL;
	int i = 0;
	while (i < 4)
	{
		new_node = (t_stack_node *)malloc(sizeof(t_stack_node));
		if (!new_node)
			return (NULL);
		new_node = node_add(new_node, tabs[i], head);
		if (head)
			head->next = new_node;
		else
			stack = new_node;
		head = new_node;
		i++;
	}
	return (stack);
}

// OPERATIONS
// SWAP
t_stack_node *sw(t_stack_node *stack)
{
	t_stack_node *second;

	if (!stack || !stack->next) // Ensure there are at least two nodes
		return stack;

	second = stack->next;
	stack->next = second->next;

	if (second->next)
		second->next->prev = stack;

	second->next = stack;
	second->prev = stack->prev;
	stack->prev = second;

	return second; // The new head of the stack
}
// S_SWAP
void ss(t_stack_node **sa, t_stack_node **sb)
{
	if (sa && *sa && (*sa)->next) // Check if stack 'sa' has at least two nodes
		*sa = sw(*sa);			  // Swap the top two nodes of 'sa'

	if (sb && *sb && (*sb)->next) // Check if stack 'sb' has at least two nodes
		*sb = sw(*sb);			  // Swap the top two nodes of 'sb'
}

// ROTATE
t_stack_node *rs(t_stack_node *stack)
{
	t_stack_node *last;
	t_stack_node *new_head;

	if (!stack || !stack->next) // Ensure there are at least two nodes
		return stack;

	last = stack;
	while (last->next)
		last = last->next;

	new_head = stack->next; // New head is the second node
	stack->next = NULL;		// Detach the first node
	stack->prev = last;		// First node's previous is now the last node
	last->next = stack;		// Last node's next is now the first node

	return new_head; // The new head of the stack
}
// R_ROTATE
void rr(t_stack_node **sa, t_stack_node **sb)
{
	if (sa && *sa && (*sa)->next) // Check if stack 'sa' has at least two nodes
		*sa = rs(*sa);			  // Rotate 'sa'

	if (sb && *sb && (*sb)->next) // Check if stack 'sb' has at least two nodes
		*sb = rs(*sb);			  // Rotate 'sb'
}

// REVERSE_ROTATE
t_stack_node *rrs(t_stack_node *stack)
{
	t_stack_node *last;
	t_stack_node *second_last;

	if (!stack || !stack->next) // Ensure there are at least two nodes
		return stack;

	// Traverse to the last and second-last nodes
	last = stack;
	while (last->next)
		last = last->next;
	second_last = last->prev;

	// Update pointers to reverse rotate the stack
	second_last->next = NULL; // Detach the last node from the end
	last->prev = NULL;		  // The last node will become the first, so no previous node
	last->next = stack;		  // The last node points to the old head
	stack->prev = last;		  // The old head's previous node is now the last node

	return last; // The last node is now the new head of the stack
}
// R_REVERSE_ROTATE
void rrrs(t_stack_node **sa, t_stack_node **sb)
{
	if (*sa)
		*sa = rrs(*sa); // Reverse rotate stack A
	if (*sb)
		*sb = rrs(*sb); // Reverse rotate stack B
}

void ps(t_stack_node **src, t_stack_node **dest)
{
	t_stack_node *temp;

	if (!src || !(*src)) // Check if source stack is empty
		return;

	temp = *src;		 // Point to the top node of the source stack
	*src = (*src)->next; // Move the top of the source stack to the next node
	if (*src)
		(*src)->prev = NULL; // Set the new top's previous pointer to NULL

	temp->next = *dest; // Link the node to the top of the destination stack
	if (*dest)
		(*dest)->prev = temp; // Set the old top of the destination stack's previous pointer

	*dest = temp;	   // Move the node to the top of the destination stack
	temp->prev = NULL; // Set the new top's previous pointer to NULL
}

void diff(t_stack_node *sa, t_stack_node *sb)
{
	printf("-> stack a:\n");
	print_stack(sa);
	printf("-> stack b:\n");
	print_stack(sb);
	printf("\n");
}

int main(void)
{
	t_stack_node *sa = NULL;
	t_stack_node *sb = NULL;
	char *argv[4];
	argv[0] = "8";
	argv[1] = "7";
	argv[2] = "1";
	argv[3] = "2";
	sa = stack_store(argv);

	// start
	sa=rrs(sa);
	sa=rrs(sa);
	diff(sa, sb);

	return (0);
}
