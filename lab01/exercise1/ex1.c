#include <string.h>
#include "ex1.h"
#include <stdio.h>

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    /* TODO: implement num_occurances */
	int i;
	int cnt = 0;
	if (strlen(str) <= 0) {
		printf("Please enter a string.\n");
		return 0;
	}
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == letter) {
			cnt += 1;
		}
	}
    	return cnt;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
    /* method1:*/
	int i = 0;
	dna_seq->A_count = 0, dna_seq->C_count = 0, dna_seq->G_count = 0, dna_seq->T_count = 0;
	while(dna_seq->sequence[i] != 0) {
		switch(dna_seq->sequence[i]) {
			case 'A': dna_seq->A_count += 1; break;
			case 'C': dna_seq->C_count += 1; break;
			case 'G': dna_seq->G_count += 1; break;
			case 'T': dna_seq->T_count += 1; break;
			default: printf("Error: It's not a DNA sequence.\n"); return;
		}
		++i;
	}
    	return;
    	/* method2:*/
    	/*dna_seq->A_count = num_occurrences(dna_seq->sequence, 'A');
    	dna_seq->C_count = num_occurrences(dna_seq->sequence, 'C');
    	dna_seq->G_count = num_occurrences(dna_seq->sequence, 'G');
    	dna_seq->T_count = num_occurrences(dna_seq->sequence, 'T');
    	return;*/
}
