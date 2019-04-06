#ifndef _QUEUE_
#define _QUEUE_

/* Définition du type booléen	*/

typedef enum 
{
	false,
	true
}bool;
/*	Définition de la file	*/
typedef struct QueueElement
{
	int value;
	struct QueueElement *next;
}QueueElement, *Queue;	

/*	Paramètres de la file	*/
static QueueElement *first = NULL;
static QueueElement *last = NULL;
static int nb_elements = 0 ;

/*	Prototypes	*/
bool is_empty_queue(void);
int queue_length(void);
int queue_first(void);
int queue_last(void);
void print_queue(void);
void add_queue(int x);
void get_queue(void);
void clear_queue(void);
#endif

