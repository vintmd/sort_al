//#include<stdio.h>
//
//void ShellSort(int arr[],int nLength)
//{
//	int nGap;
//	int j;
//	int i;
//	int k;
//	int temp;
//	if(arr == NULL || nLength <=0)return;
//
//	//������
//	for(nGap = nLength/2;nGap >=1;nGap/=2)
//	{
//		//�����ڲ�������
//		for(i = 0;i<nGap;i++)
//		{
//			//��������
//			//��������
//			for(j = i+nGap;j<nLength;j+=nGap)
//			{
//				k = j-nGap;//������������һ��
//				temp = arr[j];//��������ĵ�һ��
//				while(arr[k] > temp&&k>=0)
//				{
//					arr[k+nGap] = arr[k];
//					k-=nGap;
//				}
//
//				arr[k+nGap] = temp;
//			}
//		}
//	}
//
//}
//
//void ShellSort2(int arr[],int nLength)
//{
//	int nGap;
//	int j;
//	int k;
//	int temp;
//	if(arr == NULL || nLength <=0)return;
//
//	//������
//	for(nGap = nLength/2;nGap >=1;nGap/=2)
//	{
//		//�����ڲ�������
//		//��������
//		//��������
//		for(j = nGap;j<nLength;j++)
//		{
//			k = j-nGap;//������������һ��
//			temp = arr[j];//��������ĵ�һ��
//			while(arr[k] > temp&&k>=0)
//			{
//				arr[k+nGap] = arr[k];
//				k-=nGap;
//			}
//
//			arr[k+nGap] = temp;
//		}
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = {10,3,16,7,29,19,8,57,100,130,160};
//	int i;
//
//	ShellSort2(arr,sizeof(arr)/sizeof(arr[0]));
//
//	for(i = 0;i<sizeof(arr)/sizeof(arr[0]);i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	return 0;
//}