#include <iostream>
#include "Sorting.h"
using namespace std;



void displayNames(int numNames,char* firstName[],char* lastName[], int age[])
{
    for (int i=0; i<numNames; i++)
    {
		cout <<firstName[i]<<" "<<lastName[i]<<" "<<age[i]<<endl;
    }
}

int stringCmp(char str1[], char str2[])
{
	int i=0;
	int check=0;
	while (str1[i]!='\0' && str2[i]!='\0'){
		if (str1[i]<str2[i]){
			check=1;
			break;
		}
		else if (str1[i]>str2[i]){
			check=-1;
			break;

		}
		else{
			i++;
		}
	}

	if (check==1){
		return 1;
	}
	else if (check==-1){
		return -1;
	}
	else{
		if (str1[i]=='\0'&& str2[i]=='\0'){
			cout <<str1[i]<<"   "<<str2[i];
			return 0;
		}
		else if (str1[i]=='\0'){
			return 1;
		}
		else{
			return -1;
		}
	}
}
void stringSwap(char* &str1, char* &str2){
	char *temp = str1;
	str1 = str2;
	str2 = temp;
}

void bubbleSort(int numNames,char* firstName[],char* lastName[], int age[]){
	int counter =numNames-1;
	while(counter !=0){
		for (int i=0;i<counter;i++){
			if (stringCmp(lastName[i],lastName[i+1])==-1){
				stringSwap(lastName[i],lastName[i+1]);
				stringSwap(firstName[i],firstName[i+1]);
				int temp=age[i];
				age[i]=age[i+1];
				age[i+1]=temp;
			}
			else if (stringCmp(lastName[i],lastName[i+1])==0){
				if (stringCmp(firstName[i],firstName[i+1])==-1){
					stringSwap(firstName[i],firstName[i+1]);
					int temp0=age[i];
					age[i]=age[i+1];
					age[i+1]=temp0;
				}
			}
		}
		counter--;
	}

}
