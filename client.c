#include "mini_talk.h"

int   melt(int pid, char* msg)
{
   size_t   i;
   int      j;
   int      bit;

   i = 0;
   while (i <= ft_strlen(msg))
   {
      j = 8;
      while (j)
      {
         bit = msg[i] >> (--j) & 1;
         if(bit)
         {
            if(kill(pid,SIGUSR1)== -1)
                  ft_printf("n deu dog 1"); 
         }else
         {
               if(kill(pid,SIGUSR2)== -1)
                  ft_printf("n deu dog 0"); 
         }
         usleep(200);
      }
      i++;
   }
   return(i);
}

int main (int honc,char ** honey) {
   // int   client;

   //  if(honc != 3 || !(100 <= ft_atoi(honey[1]) && ft_atoi(honey[1]) <= 99998))
   //    return (1);
   (void)honc;
   // client = getpid();
   if(melt(ft_atoi(honey[1]), honey[2]))
   {
      ft_printf("po vai sdar smp positivo\n");
      // melt(client, "\n");
   }
   
   return(0);
}