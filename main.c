#include "sha256.h"

#include <string.h>
#include <stdio.h>

int main(void) {

   unsigned char key[32] =
   {
       0xE5, 0xE2, 0x78, 0xAA, 0x1E, 0xE3, 0x40, 0x82, 0xA0, 0x88, 0x27, 0x9C, 0x83, 0xF9, 0xBB, 0xC8,
       0x06, 0x82, 0x1C, 0x52, 0xF2, 0xAB, 0x5D, 0x2B, 0x4A, 0xBD, 0x99, 0x54, 0x50, 0x35, 0x51, 0x14,
   } ;

   char title[0x10];                                             
   char uniqdata[0x20];
   unsigned char result[0x20];
   int i;                                       
                                 
   memset(uniqdata,0,0x20);
   memset(result,0,0x20);
   memset(title,0,0x10);
   
   printf("Enter title id name (PCSA00000):"); scanf("%s", title);

   sprintf(uniqdata,"np_%s", title );
   
   // use a standard implementation of a sha256 hmac
   hmac_sha256(key,0x20,uniqdata,strlen(uniqdata),result);
   
   printf("https://gs-sec.ww.np.dl.playstation.net/pl/np/%s/", title);
   for(i=0;i<0x20;i++) {
      printf("%02x", result[i]);
   }
   printf("/%s-ver.xml\n", title);
   
   return 0;
}
// Test Example
// Enter title id name (PCSA00000):PCSA00007
// https://gs-sec.ww.np.dl.playstation.net/pl/np/PCSA00007/86d7c3b64d554b9639c5ad69aac20e16ea34c2f513d412f38329257f4ad15782/PCSA00007-ver.xml
