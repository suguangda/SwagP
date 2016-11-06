#include <iostream>
#include <cmath>
using namespace std;

int convertToIntArray(int argc, char* argv[],float array[]);

int slideAvg(float Voltage[],int sampleSize, int windowSize,float SlidingAvg[]){
    if ((sampleSize-windowSize+1)>0){
        for (int i=0;i<sampleSize-windowSize+1;i++){
            float sum=0;
            for (int j=0;j<windowSize;j++){
                sum+=Voltage[i+j];
            }
            SlidingAvg[i]=sum/windowSize;
        }
        return sampleSize-windowSize+1;
    }
    else{
        return -1;
    }
}


void displayHistogram(int numElements,float array[]){
    int voltDisplay=100;
    for (int i=0;i<8;i++){
        cout <<voltDisplay<<"V------";
        voltDisplay+=5;
    }
    cout <<"140V"<<endl;
    for (int j=0;j<numElements;j++){
        int temp=array[j]-100;
        if (temp>=0&&temp<=40){
            cout <<"#";
            if (temp-floor(temp)==0){
                for (int k=0;k<(temp/0.5);k++){
                    cout <<"#";
                }
            }
            else{
                if(temp-floor(temp)>0.5){
                    temp=ceil(temp);
                    for (int k=0;k<(temp/0.5);k++){
                        cout <<"#";
                    }
                }
                else{
                    temp=ceil(temp)-0.5;
                    for (int k=0;k<(temp/0.5);k++){
                        cout <<"#";
                    }
                }
            }
            cout <<endl;
        }
        else if (temp<0){
            cout <<"!"<<endl;
        }
        else{
            for (int z=0;z<81;z++){
                cout <<"#";
            }
            cout <<"+"<<endl;
        }
    }
}



int main(int argc,char* argv[]){
    if (argc<=22){
        float array[20]={0};
        if(convertToIntArray(argc,argv,array)<0||argc<=2){
            cerr <<"Error :Argument "<<convertToIntArray(argc,argv,array)*-1<<" is not an integer.";
        }
        else{

            float sliding[20]={0};
            convertToIntArray(argc,argv,array);
            int window =array[0];
            for (int i=0;i<argc-2;i++){
                array[i]=array[i+1];
            }
            int sample=argc-2;
            if (slideAvg(array,sample,window,sliding)>0){
                displayHistogram(sample,array);
                for (int i=0;i<slideAvg(array,sample,window,sliding);i++){
                    cout <<sliding[i]<<" ";
                }
                cout <<"\n\n";
                displayHistogram(slideAvg(array,sample,window,sliding),sliding);
            }
            else{
                cerr <<"Error: Invalid window size";
            }
        }
    }
    else{
        cerr <<"Error: too many input arguments; maximum 20 permitted. ";
    }

}



int convertToIntArray(int argc, char* argv[],float array[]){

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
