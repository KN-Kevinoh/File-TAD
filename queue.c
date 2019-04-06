#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

bool is_empty_queue(void)
{
	if( first == NULL && last == NULL)
	{
		return true;
	}
	return false;
}
/*-----------------------------------------------------*/
int queue_length(void)
{
	return nb_elements;
}
/*-----------------------------------------------------*/
int queue_first(void)
{
	if(is_empty_queue())
		exit(1);
		
	return first->value;	
}
/*-----------------------------------------------------*/
int queue_last(void)
{
	if(is_empty_queue())
		exit(1);
	
	return last->value;	
}
/*-----------------------------------------------------*/
void print_queue(void)
{
	if(is_empty_queue())
	{
		printf("\nRien à afficher,la file est vide.\n");
		return;
	}	
		
	QueueElement *temp	= first;
	
	while(temp != NULL)
	{
		printf("\tElement %d \n",temp->value);
		temp = temp->next;
	}
	return;
}
/*-----------------------------------------------------*/
void add_queue(int x)
{
	QueueElement *element;
	
	element = malloc(sizeof(element));
	
	if(element == NULL)
	{
		fprintf(stderr,"Erreur : problème d'allocation dynamique\n");
		exit(EXIT_FAILURE);
	}
	element->value = x;
	element->next = NULL;
	
	if(is_empty_queue())
	{
		first = element;
		last = element;
	}
	else
	{
		last->next = element;
		last = element;
	}
	
	nb_elements++;	
	
	return;
}
/*---------------------------------------------------------*/
void get_queue(void)
{
	
	if(is_empty_queue())
	{
		fprintf(stderr,"Rien à traiter, la file est vide \n");
		return;
	}
	
	QueueElement *temp = first;	
	
	if(first == last)
	{
		first = NULL;
		last = NULL;
	}
	else
	{	
		first = first->next;
	}
	
	nb_elements--;
	
	return;
}	
/*-----------------------------------------------------------*/
void clear_queue(void)
{
	if(is_empty_queue())
	{
		printf("Rien à nettoyer , la file est vide.\n");
		return;
	}
	
	while(!is_empty_queue())
	{
		get_queue(); 
	}
}
