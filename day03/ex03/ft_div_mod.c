void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int res_div;
	int res_mod;
	
	res_div = a/b;
	div =&res_div;
	res_mod= a%b;
	mod=&res_mod;
}
