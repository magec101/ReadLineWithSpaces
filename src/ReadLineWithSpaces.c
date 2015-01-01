#include <stdio.h>
#include <string.h>

void readLineWithSpacesMain(int argc, char** argv) {
	if(argc == 3) {
		printf("Hello %s %s", argv[1], argv[2]); 
	} else {
		char first[50], second[100];
		
		printf("Enter first name: ");
		scanf("%s", first);
		
		printf("Enter second name: ");
		char ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        fgets(second, 80, stdin);

        int i = strlen(second)-1;
        if( second[i] == '\n')
        second[i] = '\0';
		
		printf("Hello %s %s", first, second);
	}
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
		char name[50];
	int i;
	int j;
	char ch;
	
	scanf("%d", &i);
	scanf("%d", &j);
	
//	printf("1. Enter your name: ");
	while ((ch = getchar() != '\n') && ch != EOF);
	fgets(name, 100, stdin);
	if (name[strlen(name)-1] == '\n')
         name[strlen(name)-1] = '\0';
    printf("%s\n", name);
    
  //  printf("2. Enter your name: ");
	fgets(name, 100, stdin);
	if (name[strlen(name)-1] == '\n')
         name[strlen(name)-1] = '\0';
    printf("%s\n", name);
    

//	printf("3. Enter your name: ");
	fgets(name, 100, stdin);
	if (name[strlen(name)-1] == '\n')
         name[strlen(name)-1] = '\0';
    printf("%s\n", name);
    
    scanf("%d", &j);
    
//    printf("4. Enter your name: ");
	while ((ch = getchar() != '\n') && ch != EOF);
	fgets(name, 100, stdin);
	if (name[strlen(name)-1] == '\n')
         name[strlen(name)-1] = '\0';
    printf("%s", name);
	
    //readLineWithSpacesMain(argc, argv);
    return 0;
}

#endif