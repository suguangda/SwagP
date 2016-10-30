#include <iostream>
using namespace std;

int main(){
  int list[6]={0};


  cout <<"Enter 5 ID:";


  for (int i=1;i<6;i++){
    cin >>list[i];
  }

  if (cin.good()){

  int counter;

  for (int j=6;j>0;j--){
    for (int z=1;z<(j-1);z++){
      if (list[z]<list[z+1]){
        int temp=list[z+1];
        list [z+1]=list[z];
        list [z]=temp;
        counter++;
      }
    }

  }
  cout <<"Sorted ID:";
  for (int i=1;i<6;i++){
    cout <<list[i]<<" ";
  }
  cout <<endl;

  cout <<"Swap count: "<<counter<<endl;

  cout <<"Enter another input: ";

  cin >>list[0];
  int x=list[0];

  int counter1=0;

  for (int j=6;j>0;j--){
    for (int z=0;z<(j-1);z++){
      if (list[z]<list[z+1]){
        int temp=list[z+1];
        list [z+1]=list[z];
        list [z]=temp;
        counter1++;
      }
      else if(list[z]==list[z+1]){
        cerr <<"Error: This ID exists.";
      }
    }

  }
  cout <<endl;
  cout <<"The value "<<x<<" is in position "<<counter1<<endl;


}
  else{
    cerr <<"Error: Invalid input";
  }
}
