#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

ElementType Median( ElementType A[], int N )
{
	//ð�ݷ�������		
	for(int j=0; j<N-1; j++) //��ѭ��ϲ��N-1�� 
	{
		for(int i=0; i<N-j-1; i++ )//��ѭ��ϲ��N-j��,����ѭ��ÿ�ΰ����ֵ�����ײ�,����N-j�� 
		{
			if( A[i] > A[i+1])
			{
				ElementType k = A[i];
				A[i] = A[i+1];
				A[i+1] = k;
			}
		}
	}
	return  A[ N/2 ];
}
