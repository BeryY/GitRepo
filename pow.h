double pow(double a, unsigned int to) 
{
	 double res = 0;
	 for(int i = 0; i < to; ++i)
		res += a;
		
	return res;
}