		int sumofcoloum[coloum]={0}	;
	
     	for(int i=0; i<row ; i++)
	{
		for (int j=0; j<coloum ; j++)
		{
			sumofcoloum[j]+=arr[i][j];
		}
	}
	
	for (int j=0;j<coloum; j++)
	{
		cout<<"coloum "<< j+1 <<" sum "<< ":" <<sumofcoloum[j]<<endl;
	}

