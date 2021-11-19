#include <iostream>
using namespace std;
template<class T>
class ArrayList
{
private:
	T * array;
	int capacity;
	int size;
	void resize();
public:
	ArrayList();
	ArrayList(int c);
	void add(const T &item);
	void insert(const T &item,int index);
	void remove(const T &item);
	void removeat(int index);
	T findkth(int index)const;
	int find(const T &item) const;
	int getsize()const{return size;}
	void printlist()const;
	void makeempty();
};
template <class T>
ArrayList<T>::ArrayList()
	{
		capacity=10;
		size=0;
	}
template <class T>
ArrayList<T>::ArrayList(const int c)
{
	capacity=c;
	size=0;
	array=new T[capacity];
	}
template <class T>
void ArrayList<T>::add(const T &item)
{
	if(size>=capacity);
	{
		resize();
		}
		array[size++]=item;
	}
template <class T>
void ArrayList<T>::remove(const T&item)
{
	int removed=0;
	for(int i=0;i<size;i++)
	{
		if(array[i]==item)
		{
			removeat(i);
			i--;
			removed=1;
			}
		}
	}
template <class T>
void ArrayList<T>::removeat(const int index)
{
	if(index<0 || index>size)
	{
		cout<<"index out of bonds";
	}
	else
	{
		for(int i=index;i<size-1;i++)
		{
			array[i]=array[i+1];
			}
			--size;
		}
}
template <class T>
void ArrayList<T>::insert(const T&item,const int index)
{
	if(index<0 || index>size)
	{
		cout<<"index out of bonds";
		}
		else
		{
			if(size>=capacity)
			{
				resize();
				}
				++size;
				for(int i=size-1;i>index;--i)
				{
					array[i]=array[i+1];
					}
					array[index]=item;
			}
}
template <class T>
void ArrayList<T>::makeempty()
{
	size=0;
	}
template <class T>
int ArrayList<T>::find(const T&item)const
{
	for(int i=0;i<size;++i)
	{
		if(array[i]==item)
		{
			return 1;
			}
		
		}
		return -1;
	}
template <class T>
void ArrayList<T>::resize()
{
	T * const newstorage=new T[capacity=2];
	for(int i=0;i<size;++i)
	{
		newstorage[i]=array[i];
		}
		T * oldstorage=array;
		array=newstorage;
		delete[]oldstorage;
	}
template <class T>
T ArrayList<T>::findkth(int index)const
{
	if(index<0 || index>size)
	{
		cout<<"out of bonds";
		}
		else
		{
			return array[index];
			}
	}
template <class T>\
void ArrayList<T>::printlist() const
{
	for (int i=0;i<size;++i)
	{
		cout<<array[i]<<"\t";
		}
		cout<<"\n";
	}
int main()
{
	ArrayList<int>alist(11);
	int opt,val,pos;
	do
	{
		cout<<"1.add item at end"<<endl; 
		cout<<"2.insert item"<<endl;
		cout<<"3.remove item"<<endl;
		cout<<"4.remove item from position"<<endl;
		cout<<"5.find item in position"<<endl;
		cout<<"6.find item"<<endl;
		cout<<"7.makeempty"<<endl;
		cout<<"8.printsize"<<endl;
		cout<<"9.printlist"<<endl;
		cout<<"10.exit"<<endl;
		cout<<"enter your choice:"<<endl;
		cin>>opt;

		switch(opt)
		{
			case 1:
					cout<<"enter the value to add:";
					cin>>val;
					alist.add(val);
					break;
			case 2:
					cout<<"enter the value to insert:";
					cin>>val;
					cout<<"enter the position:";
					cin>>pos;
					alist.insert(val,pos);
					break;
			case 3:
					cout<<"enter the value to be deleted:";
					cin>>val;
					alist.remove(val);
					break;
			case 4:
					cout<<"enter the position to delete:";
					cin>>pos;
					alist.removeat(pos);
					break;
			case 5:
					cout<<"enter the position to find value from:";
					cin>>pos;
					cout<<"value at"<<pos<<"is"<<alist.findkth(pos)<<endl;
					break;
			case 6:
					cout<<"enter the value to search:";
					cin>>val;
					cout<<"found"<<val<<"at"<<alist.find(val)<<endl;
					break;
			case 7:
					alist.makeempty();
					break;
			case 8:
					cout<<"current size of the list:"<<alist.getsize()<<endl;
					break;
			case 9:
					alist.printlist();
					break;
			default:
					cout<<"invalide entry exited"<<endl;
		}
		
	}while(opt!=10);
}
