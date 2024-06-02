char s[]="  hello\0wb\0:|!I~!d\" !              \"  ^  !     9! `        `                             `  X  !           !     %                    `           `        k!          k!          +K          \\$    bG%!     hE%^! `        ~D    HH t4%\\     lE!*K =z\")'#8/#bv C/#6'# < ";
#include <stdio.h>
int main() {
  FILE* o=fopen(s+2, s+8);
  for (int i=11;i<sizeof(s);i+=3) {
    int n=s[2+i]*9025+s[1+i]*95+s[i]-291872;
    *(unsigned short*)s=n&65535;
    fwrite(s,1,2,o);
  }
}