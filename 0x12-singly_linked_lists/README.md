### Project 0
> Write a function that prints all the elements of a list_t list.

- Prototype: size_t print_list(const list_t *h);
- Return: the number of nodes
- Format: see example
- If str is NULL, print [0] (nil)
- You are allowed to use printf
```c
list_t *pt, int nnode
1. SET nnodes = 0
2. if(h != NULL)
3. SET pt = h
4. while(pt != NULL)
   1. IF pt->str == NULL
      1. PRINT "[0] (nil)"
   2. ELSE
      1. PRINT "[%d] %s", pt->len, pt->str
   3. SET nnodes = nnodes + 1
   4.  SET pt = pt->next
5. RETURN nnodes
```

### Project 1 - List length
> Write a function that returns the number of elements in a linked list_t list.
- Prototype: size_t list_len(const list_t *h);
```c
1. SET *pt TO h
2. SET len TO 0
3. WHILE pt != NULL
   1. SET len = len + 1
   2. SET pt TO pt->next
4. RETURN len
```

### Project 2 - Add node
> Write a function that adds a new node at the beginning of a list_t list.

- Prototype: **list_t *add_node(list_t **head, const char *str)**;
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup

```c
1. SET temp TO *head
2. SET node TO new memory address using malloc
3. IF node != NULL
   1. SET node->str to str (duplicate string)
   2. SET node->len to strlen(str)
   3. SET node->next to temp
   4. SET *head TO node
   5. RETURN *head
4. RETURN NULL
```


### Project 3 - Add node at the end
> Write a function that adds a new node at the end of a list_t list.

- Prototype: list_t *add_node_end(list_t **head, const char *str);
- Return: the address of the new element, or NULL if it failed
- str needs to be duplicated
- You are allowed to use strdup

```c
list_t *temp
list_t *node

1. SET temp TO *head
2. SET node TO new memory address using malloc
3. IF node != NULL
   1. COPY str TO node->str
   2. SET node->len TO string length (strlen(str))
   3. SET node->next TO NULL
   4. IF temp != NULL
      1. WHILE temp->next != NULL
         1. SET temp = temp->next
      2. temp->next = node
   5. ELSE
      1. SET *head TO node
   6. RETURN node
4. RETURN NULL
```

### Project 4 - Free list
> Write a function that frees a list_t list.
- Prototype: void free_list(list_t *head);

```c
1. DECLARE current
2. DECLARE next
3. IF head != NULL
   1. SET current TO head
   2. SET next TO head->next
   3. WHILE next != NULL
      1. FREE current->str
      2. FREE current
      3. SET current TO next
      4. SET next to next->next
   4. FREE current->str
   5. FREE current
```
