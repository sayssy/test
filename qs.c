#include <stdio.h>
void quick_sort(int n[],int left,int right)  
{
	int tmp=n[left];
	int i=left,j=right;
	int t=0;
	if (i>j)            //i>j���Ѿ���� 
	{
		return;
	}
	while (i<j)         //�����ڱ�i,j��δ��ͷʱ 
	{
		while (n[j]>=tmp && i<j)
		{
			j--;      //�ڱ�j���������ҵ���һ����tmpС���� 
		}
		while (n[i]<=tmp && i<j)
		{
			i++;     //�ڱ�i���������ҵ���һ����tmp����� 
		}
		if (i<j){
			t=n[j];n[j]=n[i];n[i]=t;	//������������ 
		}
	}
	n[left]=n[i]; //�ع��м��� 
	n[i]=tmp;
	quick_sort(n,left,i-1);//����˽�����ͬ���� 

	quick_sort(n,i+1,right);//���Ҷ˽�����ͬ���� 
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
