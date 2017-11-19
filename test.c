#include <stdio.h>
#include <cpuid.h>
#include <stdint.h>

void myprint(uint32_t ebx,uint32_t ecx,uint32_t edx){
 	
 printf("%c",ebx&0x000000FF);
 printf("%c",(ebx&0x0000FF00)>>8);
 printf("%c",(ebx&0x00FF0000)>>16);
 printf("%c",(ebx&0xFF000000)>>24);

 printf("%c",edx&0x000000FF);
 printf("%c",(edx&0x0000FF00)>>8);
 printf("%c",(edx&0x00FF0000)>>16);
 printf("%c",(edx&0xFF000000)>>24);

 printf("%c",ecx&0x000000FF);
 printf("%c",(ecx&0x0000FF00)>>8);
 printf("%c",(ecx&0x00FF0000)>>16);
 printf("%c",(ecx&0xFF000000)>>24); 
 printf("\n");	
}

int
main(int argc, char **argv)
{
 uint32_t eax, ebx, ecx, edx;

 //__cpuid(0x4fffffff, eax, ebx, ecx, edx);

 __cpuid(0x0, eax, ebx, ecx, edx);
 myprint(ebx,ecx,edx);

 //printf("CPUID(0x0).EAX=0x%x\n", eax);
 //printf("CPUID(0x0).EBX=0x%x\n", ebx);
 //printf("CPUID(0x0).ECX=0x%x\n", ecx);
 //printf("CPUID(0x0).EDX=0x%x\n", edx);
 
 return 0;
}


