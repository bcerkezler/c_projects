//Cafer Berk Cerkezler 17011050
//BBG Odev 2
#include<stdio.h>


int main()
{
	
	
	int counter = 0, i, j, k, N, M, dif, min_dif = 6, maxi, maxj, tmp;
	int mtr[40][40] , buslines[40][2], busstops[40][2];
	
    printf("Number of bus lines   N:");
	scanf("%d",&N);
	printf("Number of bus stops   M:");
	scanf("%d",&M);
	
	printf("Enter the matrix that represents stops of a bus line :\n");
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("[%d][%d]: ", i+1, j+1);
			scanf("%d", &mtr[i][j]);
		}
	}
	
	
	printf("\n");
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			printf("%d ",mtr[i][j]);
		}	
		printf("\n");
	}
		

//SORU A	
	//Her bir otobus hattinin durdugu durak sayisini bulan dongu.
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			if(mtr[i][j] == 1)
				counter++;
		}
	        buslines[i][0] = i;
	        buslines[i][1] = counter;
		    counter = 0;
	}
	
	
	//Otobus hatlarini durak sayisina gore siralayan dongu.
	for(i=0; i<N-1; i++)
	{
		for(j=0; j<N-i-1; j++)
		{
			if(buslines[j][1] > buslines[j+1][1])
		   	{	
	            tmp = buslines[j+1][1];
			    buslines[j+1][1] = buslines[j][1];
			    buslines[j][1] = tmp;

	            tmp = buslines[j+1][0];
			    busstops[j+1][0] = buslines[j][0];
			    busstops[j][0] = tmp; 		
			}
		}	
	}
	
	//Otobus hatlarini siralanmis halde ekrana yazdiran dongu.
	printf("\n");
    for(i=N-1; i>=0; i--)				  
		printf("Bus Line %d: %d stops\n" , buslines[i][0]+1, buslines[i][1]);
    printf("\n\n");
	
	
//SORU B
    //Her bir duraktan kac otobus hatti gectigini bulan dongu.	
	for(i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
		{
			if(mtr[j][i] == 1)
				counter++;
		}
		busstops[i][0] = i;
		busstops[i][1] = counter;
		counter = 0;
	}
	
   //Otobus duraklarini gecen hat sayisina gore siralayan dongu.
   	
	for(i=0; i<N-1; i++)
	{
		for(j=0; j<N-i-1; j++)
		{
			if(busstops[j][1] > busstops[j+1][1])
			{	
				tmp = busstops[j+1][1];
				busstops[j+1][1] = busstops[j][1];
			    busstops[j][1] = tmp;

				tmp = busstops[j+1][0];
			    busstops[j+1][0] = busstops[j][0];
			    busstops[j][0] = tmp;
			}
		}
	}
	
	//En yogun ve en az yogun otobus duraklari ekrana
	//yazdirilir.
	printf("The most busy bus stop(s) : ");
	printf("Stop %d ", busstops[M-1][0]+1);
	for(i=M-2; i>=0; i--)
	{
		if(busstops[M-1][1] == busstops[i][1])
			printf("and Stop %d ", busstops[i][0]+1);
	}
	
	printf("\nThe least busy bus stop(s) : ");
	printf("Stop %d ", busstops[0][0]+1);
	for(i=1; i<M; i++)
	{
		if(busstops[0][1] == busstops[i][1])
			printf("and Stop %d ", busstops[i][0]+1);
	}

	printf("\n\n");



	
//SORU C
	
	
	
	//Durduklari duraklari en cok benzeyen iki
	//otobus hattini bulan algoritma.
 
	for(i=0 ; i<N ; i++)
	{
	   for(j=i+1; j<N; j++)
	   {
	   	   dif = 0;
		   for(k=0; k<M; k++)
		   {
		   	    if(mtr[i][k] ^ mtr[j][k])
	   		       dif++;
		   }			  
	       if(min_dif > dif)
		   {
		   	min_dif = dif;
		   	maxi = i;
		   	maxj = j;
	       }
	   }
   }
	//Birbirine en cok benzeyen hatlarin ekrana yazdirilmasi.
	printf("The most identical bus lines : Bus Line %d and Bus Line %d", maxi+1, maxj+1);
	
	return 0;
}
