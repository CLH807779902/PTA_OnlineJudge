#include<stdio.h>
#include<math.h>

int IsTheNumber(const int N);

int main()
{
	 int n1, n2, i, cnt;
				
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);
    
	return 0;
}

int IsTheNumber(const int N)
{
	int flag = 0 ;
	int k, m, temp;
	 m = N;	
	k = (int) sqrt(N);
	if(k*k == N)
	{
		int a[10]={0}; //����Ӧ�ö���num�ĳ���Ϊ10����Ϊ�����������ÿλ��������0~~9�������Ǵ�������λ����
		while( m>0)
		{
			temp = m%10; 
			for(int i=0; i<10; i++) //����N��ÿһλ�ϵ����֣�����Ӧ���������Լ� �����һ������Ԫ�ص���2 ˵��������2��λ�ϵ�����ͬ
			{
				if(temp == i) 
					a[i]++;
				if(a[i] == 2)
				{
					flag = 1;
					break;
				}
			}
			
			if( flag )	break;
			m /= 10;
		}
	}
	
	return flag;
}

