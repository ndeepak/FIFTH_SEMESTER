#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<conio.h> 
//Construct a random key 
void build_key (char *key, char *ch) {  	
	int i;  
	i = strlen(ch);  	
	key[i]='\0';  	
	i = 0; 
	while (key[i]!='\0'){ 
 	 	key[i]=rand()%26; 
	 	i++; 
	 	} 
} 

void encrypt (char *key, char *ch) {  	
	int i = 0; 
	while (ch[i]!='\0') { 
 	 	ch[i] = (ch[i]^key[i]);   
		i++; 
	 	} 
} 
void decrypt (char *key, char *ch) { 
 	int i=0;  	
	while(ch[i]!='\0') { 
		ch[i] = (ch[i]^key[i]); 
		i++; 
	 	} 
} 
 
int main() { 
 	char ch[100] ; //store information  	
	char key[100] ; //store the key  	
	printf("Please input a message \n"); 
 	gets(ch);  	//Get a random key  	
	build_key(key,ch);  	  	
	encrypt(key,ch); 	//Encryption
	printf("encrypted information: %s \n\n",ch); 
	decrypt(key,ch);  	//Decryption
 	printf("decrypted information: %s \n",ch);
 
} 

