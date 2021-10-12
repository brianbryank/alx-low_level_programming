0x13. C - More singly linked lists
Resource
Read about data structures first.
Linked Lists 2008 UNSW Lecture.
Linked Lists Youtube Playlist I created.
All the *-main.c files will be stored in the main directory.

Use this data structure.

 /**
  * struct listint_s - singly linked list
  * @n: integer
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  * 
  */
 typedef struct listint_s
 {
 	int n;
 	struct listint_s *next;
 } listint_t;