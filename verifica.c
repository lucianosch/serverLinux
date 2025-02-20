#include <stdio.h>
#include <string.h>

void conta(char[]);
void trascrivi(char[], char[]);
void complinverso(char[], char[]);
int hamming(char[], char[]);
void posizioni(char[], char[]);

int main(){
	char s[] = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC";
	conta(s);

	char t[] = "GATGGAACTTGACTACGTAAATT";
	char u[strlen(t)+1]; 
	trascrivi(t,u);

	char s1[]="AAAACCCGGT";
	char cs1[strlen(s1)+1];
	complinverso(s1,cs1);

	char s2[] = "GAGCCTACTAACGGGAT";
	char t2[] = "CATCGTAATGACGGCCT";
	int dHamming = hamming(s2,t2);
	printf("\nEsercizio 4\n");
	printf("%d\n",dHamming);

	char s3[] = "GATATATGCATATACTT";
	char t3[] = "ATAT";
	posizioni(s3,t3);
	return 0;
}

void conta(char s[]){
/*
 * Una stringa è semplicemente una raccolta ordinata di simboli selezionati
 * da un alfabeto che forma una parola; la lunghezza di una stringa è
 * il numero di simboli che contiene.
 * Un esempio di una stringa di DNA di lunghezza 21 (il cui alfabeto
 * contiene i simboli 'A', 'C', 'G' e 'T') è "ATGCTCAGAAAGGTCTTACG".
 * Input: una stringa di DNA lunga al massimo 1000.
 * Output: quattro numeri interi (separati da spazi) che contano il
 * rispettivo numero di volte in cui i simboli 'A', 'C', 'G' e 'T'
 * ricorrono in s.
 *
 * Set di dati di esempio
 * AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC
 *
 * Risultato atteso
 * 20 12 17 21
 */
	int ls = strlen(s);
	int nA = 0, nC = 0, nG = 0, nT = 0;
	for (int i=0; i<ls; i++){
		switch(s[i]){
			case 'A' : nA++; break;
			case 'C' : nC++; break;
			case 'G' : nG++; break;
			case 'T' : nT++; break;
		}
	}
	printf("Esercizio 1\n");
	printf("%d %d %d %d\n",nA, nC, nG, nT);
}

void trascrivi(char t[], char u[]){
/*
 * Una stringa RNA è una stringa formata dall'alfabeto contenente
 * 'A', 'C', 'G' e 'U'.
 * Data una stringa di DNA t corrispondente a un filamento codificante,
 * la sua stringa di RNA trascritta u è formata sostituendo tutte le
 * occorrenze di 'T' in t con 'U' in u
 *
 * Input: Una stringa di DNA t avente una lunghezza massima di 1000 simboli
 *
 * Output: la stringa di RNA trascritta di t
 *
 * Set di dati di esempio
 * GATGGAACTTGACTACGTAAATT
 *
 * Risultato atteso
 * GAUGGAACUUGACUACGUAAAUU
 */
	int lt = strlen(t);
	for (int i=0; i<lt; i++)
	{
		if (t[i] == 'T')
			u[i] = 'U';
		else
			u[i] = t[i];
	}
	u[lt]='\0';
	printf("\nEsercizio 2\n");
	printf("%s\n%s\n",t,u);
}

void complinverso(char s[], char cs[]){
/*
 * Nelle stringhe di DNA, i simboli "A" e "T" sono complementari l'uno
 * dell'altro, così come "C" e "G". Il complemento inverso di una stringa
 * di DNA s è la stringa sc formata invertendo i simboli di s,
 * quindi prendendo il complemento di ciascun simbolo (ad esempio, il
 * complemento inverso di "GTCA" è "TGAC").
 *
 * nput: una stringa di DNA di lunghezza massima di 1000 caratteri.
 *
 * Output: Il complemento inverso sc di s.
 *
 * Set di dati di esempio
 * AAAACCCGGT
 *
 * Risultato atteso
 * ACCGGGTTTT
 */
	int ls = strlen(s);
	for (int i=0; i<ls; i++){
		char c = s[i];
		cs[ls]='\0';
		switch(c){
			case 'A': cs[ls-1-i] = 'T'; break;
			case 'C': cs[ls-1-i] = 'G'; break;
			case 'G': cs[ls-1-i] = 'C'; break;
			case 'T': cs[ls-1-i] = 'A'; break;
		}
	}
	printf("\nEsercizio 3\n");
	printf("%s\n%s\n",s,cs);
}

int hamming(char s[], char t[]){
/*
 * Date due stringhe  s e t di uguale lunghezza, si definisce distanza
 * di Hamming tra s e t, indicata con dH(s,t), il numero di simboli
 * corrispondenti (nella stessa posizione) che differiscono in s e t
 *
 * Input: Due stringhe DNA s e  t di uguale lunghezza (max 1000 caratteri)
 *
 * Output: La distanza di Hamming dH(s,t)
 *
 * Set di dati di esempio
 * GAGCCTACTAACGGGAT
 * CATCGTAATGACGGCCT
 *
 * Risultato atteso
 * 7
 */
    int dh = 0;
    int ls = strlen(s);
    for (int i=0; i<ls; i++){
		if (s[i] != t[i])
			dh++;
	}
	return dh;
}

void posizioni(char s[], char t[]){
/*
 * Date due stringhe s e t, t è sottostringa di s se t è contenuta in s
 * (t non può essere più lunga di s).
 * La posizione della sottostringa è data dalla posizione del suo primo
 * carattere all’interno di s. Per esempio le posizioni della ‘U’ nella
 * stringa "AUGCUUCAGAAAGGUCUUACG" sono 2, 5, 6, 15, 17, e 18.
 *
 * Una sottostringa di s può essere rappresentata come s[j:k], dove j e k
 * rappresentano, rispettivamente la prima posizione e l’ultima posizione.
 * Per esempio, se s = "AUGCUUCAGAAAGGUCUUACG", allora s[2:5] = "UGCU".
 *
 * La posizione della sottostringa s[j:k] corrisponde alla sua posizione
 * iniziale j; tenere presente che t in s può essere ripetuta più volte.
 *
 * Input: due stringhe DNA s e t (len(t) ≤ len(s)) (max lunghezza 1000 caratteri)
 *
 * Output: tutte le posizioni di t in s
 *
 * Set di dati di esempio
 * s = GATATATGCATATACTT
 * t = ATAT
 *
 * Risultato atteso
 * 2 4 10
 */
	int ls = strlen(s);
	int lt = strlen(t);
	char ss[lt+1];
	printf("\nEsercizio 5\n");
	for (int i=0; i<ls-lt; i++){
		for (int k=0; k<lt; k++){
			ss[k] = s[i+k];
		}
		ss[lt]='\0';
		if (strcmp(ss,t) == 0)
			printf("%d ",i+1);
	}
	printf("\n");
}
