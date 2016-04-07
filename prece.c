#include"header.h"

int precedence(int ch)
{	int pr;
    switch(ch)
	{case '+':
 	 case '-':pr=2;
          break;
 	 case '*':pr=3;
  	break;
 	case '/':pr=3;
          break;
 	case '^':pr=4;
          break;
 	default :
                  pr =-1;
                  break;
	}
return pr;
}

