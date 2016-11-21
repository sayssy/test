#include <stdio.h>
void quick_sort(int n[],int left,int right)  
{
	int tmp=n[left];
	int i=left,j=right;
	int t=0;
	if (i>j)            //i>j则已经完成 
	{
		return;
	}
	while (i<j)         //两个哨兵i,j还未碰头时 
	{
		while (n[j]>=tmp && i<j)
		{
			j--;      //哨兵j从右往左找到第一个比tmp小的数 
		}
		while (n[i]<=tmp && i<j)
		{
			i++;     //哨兵i从左往右找到第一个比tmp大的数 
		}
		if (i<j){
			t=n[j];n[j]=n[i];n[i]=t;	//交换那两个数 
		}
	}
	n[left]=n[i]; //回归中间数 
	n[i]=tmp;
	quick_sort(n,left,i-1);//对左端进行相同操作 

	quick_sort(n,i+1,right);//对右端进行相同操作 
	for (int i=0;i<5;i++)
 	{
	 	printf("%d ",n[i]);
 	}
}
int main()
{
	int cnt=5,n[5]={0,4,3,5,2};
 	quick_sort (n,0,cnt-1);
 	for (int i=0;i<cnt;i++)
 	{
	 	printf("%d ",n[i]);
 	}
 	printf("\n"); 
    return 0;
}
