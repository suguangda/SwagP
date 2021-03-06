# include <iostream>
# include <climits>
# include <cmath>
using namespace std;

int convertToIntArray(int argc, char* argv[],int array[]){

  int i=1;
  while (i<argc)
  {
    int j=0;
    int count=0;
    int number=0;
    int negCheck=0;
    int numCheck=0;

    while(*(argv[i]+count)!='\0')
    {
      count++;
    }

    count--;

    while(*(argv[i]+j)!='\0'){
        switch(*(argv[i]+j)){
            case '-': negCheck=1;
            break;
            case '0': number += 0*pow(10,count);

            break;
            case '1': number += 1*pow(10,count);
                      numCheck +=1;
            break;
            case '2': number += 2*pow(10,count);
                      numCheck +=2;
            break;
            case '3': number += 3*pow(10,count);
                      numCheck +=3;
            break;
            case '4': number += 4*pow(10,count);
                      numCheck +=4;
            break;
            case '5': number += 5*pow(10,count);
                      numCheck +=5;
            break;
            case '6': number += 6*pow(10,count);
                      numCheck +=6;
            break;
            case '7': number += 7*pow(10,count);
                      numCheck +=7;
            break;
            case '8': number += 8*pow(10,count);
                      numCheck +=8;
            break;
            case '9': number += 9*pow(10,count);
                      numCheck +=9;
            break;
            default: goto OUT;

      }
      count--;
      j++;
    }
      if (numCheck>46){
          goto OUT;
      }
      else if (negCheck==0){
          array[i-1]=number;
      }
      else{
          array[i-1]=-1*number;
      }
      i++;


   }
   return i-1;
   OUT: return -1*i;
 }

int findMax(int array[],int numElements){
     int tempMax=INT_MIN;
     for (int i=0;i<numElements;i++){
         if(array[i]>tempMax){
             tempMax=array[i];
         }
     }
     return tempMax;
 }

int findMin(int array[],int numElements){
     int tempMin=INT_MAX;
     for (int i=0;i<numElements;i++){
         if (array[i]<tempMin){
             tempMin=array[i];
         }
     }
     return tempMin;
 }

float average(int array[],int numElements){
    float sum=0;
    for (int i=0;i<numElements;i++){
        sum+=array[i];
    }
    return sum/numElements;
}

int main(int argc, char* argv[]){

    int temp0=argc;
    char** temp1=argv;
    int array[20]={0};
    convertToIntArray(temp0,temp1,array);

    if (argc<=20){
        if(convertToIntArray(temp0,temp1,array)<0||temp0<=1){
            cerr <<"Error :Argument "<<convertToIntArray(temp0,temp1,array)*-1<<" is not an integer.";
        }
        else{
            cout <<"Maximum: "<<findMax(array,convertToIntArray(temp0,temp1,array))<<endl;
            cout <<"Minimum: "<<findMin(array,convertToIntArray(temp0,temp1,array))<<endl;
            cout <<"Average: "<<average(array,convertToIntArray(temp0,temp1,array))<<endl;
        }

    }
    else{
        cerr <<"Error: too many input arguments; maximum 20 permitted. ";
    }
}
