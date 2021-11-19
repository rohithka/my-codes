 #include <iostream>
using namespace std;

void swap(int *x,int *y)
{
int t=*x;
*x=*y;
*y=t;
}

int partition(int arr[],int low,int high)
	{
		int i,j,pivot;
		pivot=arr[high];
		i=(low-1);
		for(int j=low;j<=high-1;j++)
			{
				if(arr[j]<=pivot)
					{
						i++;
						swap(&arr[i],&arr[j]);
					}
			}
	swap(&arr[i+1],&arr[high]);
	return(i+1);
	}

void quicksort(int arr[],int low,int high)
{
	if(low<high)
		{
			int pp=partition(arr,low,high);
			quicksort(arr,low,pp-1);
			quicksort(arr,pp+1,high);
			
			}
	} 
	
void printarray(int arr[],int size)
{
	int i;
	for (i=0;i<size;i++)
		cout<<arr[i];
		cout<<"\n";
	}
	
int main()
{
	int arr[]={5,8,2,4,7,1};
	int n=6;
	for (int i=0;i<n;i++)
		cout<<arr[i]<<""<<endl;;
		quicksort(arr,0,n-1);
		cout<<"sorted list"<<endl;
		for(int i=0;i<n;i++)
		cout<<arr[i]<<""<<endl;
}
