#include <iostream>
#include <cstdio>

int main()
{
  	std::string line;
	int p = 1;
	while (std::getline(std::cin, line))
	  {
	    	for(int i = 0; i<line.size();i++)
		  {
		    if (line[i] != '\"')
		      {
			printf("%c", line[i]);
		      }
		    else if (p)
		      {
			printf("``");
			p = 0;
		      }
		    else{
		      printf("\'\'"); p=1; }
		  }
		printf("\n");
	  }
	return 0;
}
