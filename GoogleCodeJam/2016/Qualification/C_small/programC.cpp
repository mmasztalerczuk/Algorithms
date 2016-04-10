#include<iostream>
#include<string>
#include<bitset>
#include<gmp.h>
int main()
{
	int N;
	int T;
	int J;
	
	std::cin >> T;
	std::cin >> N;
	std::cin >> J;
	const unsigned long int b = N; 
	long long int a = 1 << N;
	a--;
	long long int i = 1 << (N-1);
	i++;
	long long int ans = J;	
	printf("Case #1: \n");
	for(; i<= a; i+=2)
	{
	std::string s;
		if(b==16)
			s = std::bitset< 16 >( i ).to_string();
		else
			s = std::bitset< 32 >( i ).to_string();		
	
	
	 mpz_t a2, a3, a4, a5, a6, a7, a8, a9, a10;                 		

  	mpz_init_set_str (a2, s.c_str(), 2);	/* Assume decimal integers */
	mpz_init_set_str (a3, s.c_str(), 3);	/* Assume decimal integers */
	mpz_init_set_str (a4, s.c_str(), 4);	/* Assume decimal integers */
	mpz_init_set_str (a5, s.c_str(), 5);	/* Assume decimal integers */
	mpz_init_set_str (a6, s.c_str(), 6);	/* Assume decimal integers */
	mpz_init_set_str (a7, s.c_str(), 7);	/* Assume decimal integers */
	mpz_init_set_str (a8, s.c_str(), 8);	/* Assume decimal integers */
	mpz_init_set_str (a9, s.c_str(), 9);	/* Assume decimal integers */
	mpz_init_set_str (a10, s.c_str(), 10);	/* Assume decimal integers */


	mpz_t one, ite, zero;
	mpz_init_set_str (one, "1", 2);
	mpz_init_set_str (zero, "0", 2);



	if (mpz_probab_prime_p(a2, 50) == 0 &&
	    mpz_probab_prime_p(a3, 50) == 0 &&
		mpz_probab_prime_p(a4, 50) == 0 &&
		mpz_probab_prime_p(a5, 50) == 0 &&
		mpz_probab_prime_p(a6, 50) == 0 &&
		mpz_probab_prime_p(a7, 50) == 0 &&
		mpz_probab_prime_p(a8, 50) == 0 &&
		mpz_probab_prime_p(a9, 50) == 0 &&
                mpz_probab_prime_p(a10, 50) == 0)
	{
		printf("%s ", s.c_str());
		ans--;

		int div = 9;
		mpz_init_set_str (ite, "3", 10);
		mpz_t rem;
		mpz_init_set_str (rem, "0", 2);

mpz_init_set_str (rem, "0", 2);
//printf("TEst 1\n");
		for(;mpz_cmp(ite, a2) < 0;)
		{
			mpz_mod(rem, a2, ite);
			if (mpz_cmp(rem, zero) == 0)

			{
				printf("%s ", mpz_get_str (NULL, 10, ite));break;
			}			
			mpz_add(ite, ite, one);					
		}
mpz_init_set_str (ite, "3", 10);
		for(;mpz_cmp(ite, a3) < 0;)
		{
			mpz_mod(rem, a3, ite);
			if (mpz_cmp(rem, zero) == 0)

			{
				printf("%s ", mpz_get_str (NULL, 10, ite));break;
			}			
			mpz_add(ite, ite, one);					
		}
mpz_init_set_str (ite, "3", 10);
		for(;mpz_cmp(ite, a4) < 0;)
		{
			mpz_mod(rem, a4, ite);
			if (mpz_cmp(rem, zero) == 0)

			{
				printf("%s ", mpz_get_str (NULL, 10, ite));break;
			}			
			mpz_add(ite, ite, one);					
		}
mpz_init_set_str (ite, "3", 10);
		for(;mpz_cmp(ite, a5) < 0;)
		{
			mpz_mod(rem, a5, ite);
			if (mpz_cmp(rem, zero) == 0)

			{
				printf("%s ", mpz_get_str (NULL, 10, ite));break;
			}			
			mpz_add(ite, ite, one);					
		}
mpz_init_set_str (ite, "3", 10);
		for(;mpz_cmp(ite, a6) < 0;)
		{
			mpz_mod(rem, a6, ite);
			if (mpz_cmp(rem, zero) == 0)

			{
				printf("%s ", mpz_get_str (NULL, 10, ite));break;
			}			
			mpz_add(ite, ite, one);					
		}
mpz_init_set_str (ite, "3", 10);
		for(;mpz_cmp(ite, a7) < 0;)
		{
			mpz_mod(rem, a7, ite);
			if (mpz_cmp(rem, zero) == 0)

			{
				printf("%s ", mpz_get_str (NULL, 10, ite));break;
			}			
			mpz_add(ite, ite, one);					
		}
mpz_init_set_str (ite, "3", 10);
		for(;mpz_cmp(ite, a8) < 0;)
		{
			mpz_mod(rem, a8, ite);
			if (mpz_cmp(rem, zero) == 0)

			{
				printf("%s ", mpz_get_str (NULL, 10, ite));break;
			}			
			mpz_add(ite, ite, one);					
		}
mpz_init_set_str (ite, "3", 10);
		for(;mpz_cmp(ite, a9) < 0;)
		{
			mpz_mod(rem, a9, ite);
			if (mpz_cmp(rem, zero) == 0)

			{
				printf("%s ", mpz_get_str (NULL, 10, ite));break;
			}			
			mpz_add(ite, ite, one);					
		}
mpz_init_set_str (ite, "3", 10);
for(;mpz_cmp(ite, a10) < 0;)
		{
			mpz_mod(rem, a10, ite);
			if (mpz_cmp(rem, zero) == 0)

			{
				printf("%s ", mpz_get_str (NULL, 10, ite));break;
			}			
			mpz_add(ite, ite, one);					
		}		
		printf("\n");
if(ans==0)
		return 0;
	}
	}
	
	return 0;
}
