/*Write a C program that demonstrates basic file-handling operations using a text file named sample.txt. The program should perform the following tasks:

a) Declare and implement a function named writeToFile() that prompts the user to enter a sentence and writes it into sample.txt. The file should be opened in write mode. (5 Marks)

b) Declare and implement a function named readFromFile() that opens sample.txt in read mode and displays its contents on the screen, reading and displaying one character at a time. (5 Marks)

c) Declare and implement a function named appendToFile() that prompts the user to enter an additional sentence and appends it to the existing contents of sample.txt without deleting the previously stored data. (5 Marks)

d) In the main() function:
- Call writeToFile() to write the first sentence into the file.
- Call readFromFile() to display the file contents.
- Call appendToFile() to add another sentence.
- Call readFromFile() again to display the updated file contents. (5 Marks)*/

//file handling


#include <stdio.h>//fprintf(), scanf(),
#include <stdlib.h>//exit()

void writeToFile();
void readFromFile();
void appendToFile();


int main(int argc, char** argv)
{
	writeToFile();
  //  readToFile();
	appendToFile();
    readFromFile();
	
	return 0;
}

void writeToFile(){
	char sentence[300];
	FILE *max;
	max = fopen("C:\\Users\\HP\\OneDrive\\Desktop\\file\\sample.txt","a");
	
	if(max == NULL){
		printf("Error opening the file.\n");
		exit(1);
	}
	printf("Enter a paragraph\n");
	fgets(sentence,sizeof(sentence),stdin);
	// we do not use scanf because it does not allow spacing of sentence and only one word
	fputs(sentence,max);
	 // or fprintf(max, "%s",sentence);
	
    printf("paragraph succesfully written to file.\n");
	fclose(max);
}

void readFromFile(){
	int ch;
    char sentence[300];
	FILE *max;
	max = fopen("C:\\Users\\HP\\OneDrive\\Desktop\\file\\sample.txt","r");
	
	if(max == NULL){
		printf("Error creating file (path)");
		exit(1);
		
		//read from file null character 
		while((ch = getc(max))!=EOF)
		{
		putchar(ch);
		}
	}
    printf("Informartion succesfully added to file.\n");
	fclose(max);
}

void appendToFile(){
	char sentence[300];
	FILE *max;
	max = fopen("C:\\Users\\HP\\OneDrive\\Desktop\\file\\sample.txt","a");
	
	if(max == NULL){
		printf("Error opening the file");
		exit(1);
	}
	printf("Informartion succesfully added to file.\n");
	fclose(max);	
}