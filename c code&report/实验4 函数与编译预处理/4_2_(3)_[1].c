#include<stdio.h> 
int main(void)
{
    int i,k;
    long sum=0,fabonacci(int n);
    printf("Inut n:");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        sum+=fabonacci(i);
        printf("i=%d\tthe sum is %ld\n",i,sum);
    }
    return 0;
}
long fabonacci(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return fabonacci(n-1)+fabonacci(n-2);
}	
/*������5���۲��ִ����"scanf("%d",&k);"���ʱ��sum��k��ֵ�Ƕ��٣�sum=0 k=5
2�ڴ�main������һ�ν���fabonacci����ǰ��һ�̣��۲��������ֵ�Ƕ��٣����غ����ͣ�����ĸ�����ϣ� 
i=1 k=5 sum=0 printf 
3�ڴ�main������һ�ν���fabonacci�������һ�̣��۲������main����"sum+=fabonacci(i);"�����������
printf
4��fabonacci�����ڲ�����ִ�У��۲캯���ĵݹ�ִ�й��̡����ݹ鷽ʽʵ�ֵļ��������������������ģ�
���ر�ע��ʲôʱ�̽����ݹ飬Ȼ��ֱ�Ӵӵ�һ��return��䷵�ص������
�ڼ����� n-1 n-2֮�� ����if�ж� 
5��fabonacci�����ݹ�ִ�й����й۲����n�ı仯��������ش�Ϊʲôk��sum��fabonacci�����ڲ����ɼ���
k sum���ⲿ����	*/


