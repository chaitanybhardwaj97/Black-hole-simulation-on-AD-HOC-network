#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int n=0,num=0;

struct node
{
	int num;
	int next[10];
	int seq;
}nodes[10],start1,end1,temp;
node create_node(int i)
{       //randomize();
	node temp;
	temp.num=i;
	srand(time(NULL));
	temp.seq=rand()%200;

	temp.next[0]=-1;
	return temp;
}
void topology(int top[10][10],int mal,int num_nodes)
{
	int i=0;
	while(n<num_nodes)
	{       i=0;
		if(n!=mal-1)
		{
			while(top[n][i]!=-1)
			{	nodes[n].next[i]=top[n][i];
				nodes[n].next[i+1]=-1;
				i++;
				cout<<"Not malicious\n";
			}
		}
		else
		{	nodes[n].seq=999;
			while(top[n][i]!=-1)
			{	nodes[n].next[i]=top[n][i];
				nodes[n].next[i+1]=-1;
				i++;
				cout<<"malicious\n";
			}
		}
		cout<<"node number :- "<<num+1<<" seq "<<nodes[n].seq<<endl;
		n++;
		num++;
	}

}

int main()
{       //clrscr();
	int num_nodes,mal=0,s=0,e=0,top[10][10],j=0,x=0,next1[10];
	char ch='y';
	cout<<"Enter the number of nodes: ";
	cin>>num_nodes;
	cout<<"Enter the topology: \n";

	for(int i=0;i<num_nodes;i++){
		for(int j=0;j<num_nodes;j++){
			top[i][j]=-1;
		}
	}

	for(i=0;i<num_nodes;i++)
	{	cout<<"Node "<<i+1<<": ";
		nodes[i]=create_node(i);
		cin>>x;
		top[i][0]=x-1;
		j=0;
		ch=1;
		if(top[i][0]!=-1)
		{  	while(1)
			{       cout<<"Is there another node after "<<i+1<<" (y/n) : ";
				cin>>ch;
				if(ch=='n')
				{	break;
				}
				else
				{
					cout<<"Enter another node: ";
					cin>>x;
					top[i][++j]=x-1;
				}
			}

		}
	}

	for(i=0;i<num_nodes;i++)
	{    	j=0;
		while(top[i][j]!=-1)
		{	cout<<top[i][j]+1<<"\t";
			j++;
		}
		cout<<endl;
	}
	cout<<endl<<"Enter the malicious node: ";
	cin>>mal;
	topology(top,mal,num_nodes);
	cout<<endl<<"Enter the start node: ";
	cin>>s;
	cout<<"Enter the end node: ";
	cin>>e;
	start1=nodes[s-1];
	end1=nodes[e-1];
	temp=start1;
	i=0;
	j=0;
	int flag=0;
	temp=start1;
	cout<<"Start\n";
	while(temp.seq!=end1.seq && !flag)
	{	cout<<temp.num+1<<" \t";
		cout<<"Outer loop\t";
		j=0;
		while(temp.next[j]!=-1)
		{
			next1[j]=temp.next[j];
			j++;
		}
		next1[j]=temp.next[j];
		j=0;
		int index=nodes[temp.next[0]].num;
		int lar=nodes[next1[0]].seq;
		while(next1[j]!=-1 && !flag )
		{	cout<<"Inner loop\t";

			if(lar < nodes[next1[j]].seq){
				lar=nodes[next1[j]].seq;
				index=nodes[next1[j]].num;


			}

			if(lar==999){
				cout<<"exit \n"<<nodes[next1[j]].num+1;
				flag=1;
			}
			j++;

		}

		temp=nodes[index];

	}

	if(flag!=0){
		cout<<"FAIL\n";
	}else{
		cout<<"SUCCESS\n";
	}
	getch();
return 0;
}
