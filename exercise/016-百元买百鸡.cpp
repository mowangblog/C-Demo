# include <stdio.h>

int main()
{
	int cock,hen,chink;
	for(cock=0;cock<=20;++cock)
	{
		for(hen=0;hen<=33;++hen)
		{
			for(chink=3;chink<100;++chink)
			{
				if(cock*5+hen*3+chink/3==100)
				{
					if(cock+hen+chink==100)
					{
						if(chink%3==0)
						{
							printf("¹«¼¦%d£¬Ä¸¼¦%d£¬Ð¡¼¦%d\n",cock,hen,chink);
						}
					}
				}
			}
		}
	}
	return 0;
 } 
