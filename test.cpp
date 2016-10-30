#include <iostream>
using namespace std;

int main(){
  int input=2;
  for (int loop=0;loop<input;loop++){
    int x[8]={0,1,2,3,4,5,6,7};
    for (int i=0;i<61;i++){

      char y[60];
      for (int j=0;j<60;j++){
        y[j]=' ';}

      y[x[0]]='!';
      y[x[1]]='E';
      y[x[2]]='C';
      y[x[3]]='E';
      y[x[4]]='1';
      y[x[5]]='5';
      y[x[6]]='0';
      y[x[7]]='!';

      for (int j=0;j<60;j++){    //print top border
        cout <<"=";
      }
      cout <<endl;

      for (int z=0;z<60;z++){
        cout <<y[z];
      }
      cout <<endl;

      for (int j=0;j<60;j++){    //print top border
        cout <<"=";
      }
      cout <<endl;

      int k=0;
      while (k<8){
        x[k]++;
        if (x[k]==60){
          x[k]=x[k]-60;
        }
        k++;
      }
      //system("clear");
      for (int i =0;i<1000000;i++){   //slowing display
        i=(i+i)/2;
      }
      }
    }
  }
