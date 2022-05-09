#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <string.h> // gia tin xrhsh tou strlen

int main(int argc, char *argv[]) {
	system("chcp 1253"); //gia tous ellinikous xaraktires
	srand(time(NULL));  //gia na allazoun oi kwdikoi me tin wra
	int lenpass;  //posous xaraktires tha xei o new password
	char xaraktires[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890"; //xaraktires pou tha xei o neos kwdikos
	printf("Παρακαλώ δώστε πόσους χαρακτήρες θέλετε να έχει ο καινούργιος σου κωδικός: "); 
	scanf("%i",&lenpass); 
	char password[lenpass]; //pinakas xaraktirwn me diastasi tin eisodo tou xrhsth
	int i; 
	printf("\n\n\tO νέος κωδικός είναι ο "); 
	for (i=0; i<lenpass; i++){ 
		password[i] = xaraktires[rand() % strlen(xaraktires)]; //sti kathe thesi tou pinaka 'password' vazw xaraktires apo to 'q' ews to len tou pinaka 'xaraktires'  
		printf("%c",password[i]); //ektipwsi kathe xaraktira tou neou kwdikou 
	}
		
	return 0;
}
