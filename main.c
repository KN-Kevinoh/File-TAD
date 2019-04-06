#include <stdio.h>
#include "queue.h"

int main(void)
{
	if(is_empty_queue())
			printf("La file est vide.\n");
	else
			printf("La file est non vide.\n");	
			
	printf("\nLa taille de la file est : %d\n",nb_elements);	
	
	print_queue();	
	
	add_queue(2);
	add_queue(10);
	add_queue(20);
	
	printf("\t---Après enfilement---\n");
	print_queue();
	
	get_queue();
	
	printf("\t---Après défilement---\n");
	print_queue();	
    return 0;
}
