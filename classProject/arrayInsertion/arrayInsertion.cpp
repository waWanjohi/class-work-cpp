#include<iostream>

using namespace std;

int main(){
	int arr[10][10],row,col,i,j;
	cout<<"Enter size of row: ";cin>>row;
	cout<<"\nEnter size of column: ";cin>>col;

	

	cout<<"\nEnter elements of matrices (row size): "<<endl;


	for (i=0;i<row;i++)
		for (j=0;j<col;j++)
		cin>>arr[i][j];
	
	cout<<"\nDisplaying matrix ...\n"<<endl;
		for(i=0;i<row;i++)

		{
			for(j=0;j<col;j++)
				cout<<arr[i][j]<<" ";
				cout<<endl;
		
		}
	
		getchar();
		return 0;

}
