#include <stdio.h>

int main() 
{
	int grade, tens;
	
	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	
	tens = (grade / 10) % 10;
	if (tens == 0) {
		if(grade == 100) { 
			tens = 9;
		}
	}
	
	if(grade < 0 || grade > 100) {
		printf("Please enter a grade between 0-100");
	} else {
	    switch (tens) {
		    case 9: printf("Letter grade: A"); break;
		    case 8: printf("Letter grade: B"); break;
		    case 7: printf("Letter grade: C"); break;
		    case 6: printf("Letter grade: D"); break;
		    case 5: case 4: case 3: 
		    case 2: case 1: case 0: printf("Letter grade: F");	break;
	    }
    }
	
	return 0;
}
