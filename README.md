# LINKED-LIST-IMPLEMENTATION

*COMPANY*: CODETECH IT SOLUTIONS

*NAME*: SURVI.SHIVA CHARAN

*INTERN ID*: CT04DM865

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH KUMAR


This is a C program that simulates the fundamental operations of a singly linked list, such as creation, insertion at the front and rear, deletion from the front and rear, and printing the list. The program begins with the declaration of a struct node, which contains two members: an integer data and a pointer next to the next node within the list. The CreateNode function dynamically allocates space for a new node, stores the specified value in its data field, makes its next pointer NULL, and returns the created node. The InsertAtBegin function inserts a new node at the front of the list. When the list is empty, the new node is set as the head. Otherwise, the new node refers to the head, and then the head is set to the new node. The InsertAtEnd method inserts a new node at the end of the list. It checks first if the list is empty, in which case the new node is made the head. Otherwise, it moves to the end and points the new node to the last node's next pointer.The deletion operations are performed by DeletionAtBegin and DeletionAtEnd. The DeletionAtBegin procedure first checks whether the list is empty or not. If not, it keeps the head node in a temporary pointer, changes the head to the next node, unlinks the deleted node, and frees its memory. The DeletionAtEnd procedure also checks for an empty list and treats the case when only one node is present. Then it moves to the second last node, sets its next to NULL, and frees the memory of the last node. The Display function traverses the list and prints data of each node followed by an arrow (->) to represent visually the structure of the list, finishing with NULL.The CreateList function provides a mechanism to create a list with a given number of values. It asks for the number of nodes and their values from the user, and it constructs the list using InsertAtEnd. The menu function displays a menu of operations the user can execute. The main function has an infinite loop that repeatedly displays the menu, reads user input, and calls the corresponding linked list operation depending on the user's selection. It processes every case with a switch statement, modifying the list and printing its status after every operation. If the user inputs a number that is not one of the menu choices, the default case executes and the loop repeats.Overall, this program illustrates how dynamic data can be handled using pointers and linked structures in C. It assists in the development of a solid background in memory management and pointer manipulation. It is also a great educational exercise to learn how linked lists operate in actual applications such as queues, stacks, and memory allocation system.

