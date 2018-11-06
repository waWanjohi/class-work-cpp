#include<iostream>

using namespace std;

int main(){
int i,a[10],no,pos;
	cout<<"Enter data in array";
	cout<<"Hint=>> insert a (-)before the numbers to separate them ;)";
	
	
	for(i=0;i<10;++i){
	cout<<"\nEnter number:  "<<i+1<<".";cin>>a[i];
	}
	
	cout<<"\n\nStored data in Array...";
	
	

	for (i=0;i<10;i++){
		for (x = 0; x <=10; ++x)
		{
			cout<<"\n";
			cout<<a[i];
	
		}
	}
	cout<<"\n\nEnter pos. of the element to Delete: ";
	cin>>pos;


	if (pos>9){
	cout<<"\n\nThis value is out of range!";
	} 
	  else{
	  	
		  --pos;
		  for(i=pos;i<=9;i++){
		  a[i]=a[i+1];
		  }

		  cout<<"\n\nNew Data in Array: ";
		  for (i=0;i<9;i++){
		  	cout<<"\n";
			  cout<<a[i];
		  }
	  }
return 0;
}
