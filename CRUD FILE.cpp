#include<iostream>
using namespace std;

int i=0; //Global variable
void add(int a[])
{
	cout<<"enter the number that you want to add";
    cin>>a[i];
	i++;
	cout<<"added successfully"<<endl;
}

void exit(int a[])
{
	
}
void search(int a[])
{
	int n;
	cout<<"enter the numberyou want to search"<<endl;
	cin>>n;
	for(int j=0; j<i; j++)
	{
		if(n==a[j])
		{
			cout<<"your search value="<<a[j]<<endl;
		}
	}
}
void update(int a[])
{
	int n;
	cout<<"enter the number that you want to search"<<endl;
	cin>>n;
	for(int j=0; j<i; j++)
	{
		if(n==a[j])
		{
			cout<<"your new value is"<<a[j]<<endl;
			cin>>a[j];
		}
	}
	
}

void del (int a[])
{
	int n;
	cout<<"Enter the number you want to delete"<<endl;
	cin>>n;
	for(int j=0; j<i;j++)
	{
		if(n==a[j])
		{
			for(int k=j; k<j; k++)
			{
			 a[k]=a[k+1];
	 	    }
		
	}i--;
	break;
	}
}
void show(int a[])
{
	for(int j=0; j<i;j++)
	{
	cout<<""<<a[j];	
	}
	
}
int main()
{
	//first we create menu using switch statment
	cout<<"press 1 for add"<<endl;
	cout<<"press 2 for search"<<endl;
	cout<<"press 3 for delete"<<endl;
	cout<<"press 4 for update"<<endl;
	cout<<"press 5 for show"<<endl;
	cout<<"press 6 for exit"<<endl;
	
	p:	
	int choice;
	cout<<"enter your choice"<<endl;
	cin>>choice;
	int a[20];
	
	switch(choice)
	{
		case 1:
		add(a);
		break;
		case 2:
		search(a);
		break;
		case 3:
		delete(a);
		break;
		case 4:
		update(a);
		break;
		case 5:
		show(a);
		break;
		default:
		cout<<"Invalid entry"<<endl;
		
				
			
	}
	goto p;
	
}
