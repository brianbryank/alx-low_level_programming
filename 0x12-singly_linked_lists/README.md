0x12. C - Singly linked lists

Resource
Read about data structures first.
Linked Lists 2008 UNSW Lecture.
Linked Lists Youtube Playlist I created.
All the *-main.c files will be stored in the main directory.

Use this data structure.

 /**
  * struct list_s - singly linked list
  * @str: string - (malloc'ed string)
  * @len: length of the string
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  * for Holberton project
 */
 typedef struct list_s
 {
 	char *str;
 	unsigned int len;
 	struct list_s *next;
 } list_t;