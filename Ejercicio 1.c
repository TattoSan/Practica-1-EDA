#include<stdio.h>
#define verdadero 1
#define falso 0

int verifica(int acomodados[5],int num);
int main()
{
	int numero[5];
	int acomodados[5];
	int i,num,contador;
	for(i=0;i<5;i++)
	{
		printf("Ingresa el numero [%d]:",i+1);
		scanf("%d",&numero[i]);
	}

		for(i=0;i<5;i++)
		{
			num=numero[i];
			while(verifica(acomodados,num)== falso)
			{
				num=numero[i];
			}
			acomodados[i]=num;
		}
	for(i=0;i<5;i++)
	{
		printf("%d\n",acomodados[i]);
	}
	return 0;
}
int verifica(int acomodados[5],int num)
{
	int i;
	for( i = 0 ; i < 10 ; i++ )
	{

		
			if( num == acomodados[i] )
			{
				return falso;
			}
		
	}
	return verdadero;
}
