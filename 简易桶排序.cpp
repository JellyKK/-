#include <stdio.h> 
int main()//����һ��Ͱ���� 
{
	int bucket[100],i,j,k,n;
	
	for(i=0;i<=100;i++)
	bucket[i]=0;
	
	scanf("%d",&n);//Ҫ����ĸ���
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		bucket[k]++;
	}
	for(i=100;i>=0;i--)
	{
		for(bucket[i];bucket[i]>=1;bucket[i]--)
		printf("%d ",i);
	}
	return 0;
 } 
