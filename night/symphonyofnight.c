extern int putchar (int __c);

#define n0 for (int t=0, osc=0; t<8000; t++, osc+=1) { putchar(osc&0x80); }
#define n1 for (int t=0, osc=0; t<8000; t++, osc+=2) { putchar(osc&0x80); }
#define n2 for (int t=0, osc=0; t<8000; t++, osc+=3) { putchar(osc&0x80); }
#define n3 for (int t=0, osc=0; t<8000; t++, osc+=4) { putchar(osc&0x80); }
#define n4 for (int t=0, osc=0; t<8000; t++, osc+=5) { putchar(osc&0x80); }
#define n5 for (int t=0, osc=0; t<8000; t++, osc+=6) { putchar(osc&0x80); }
#define n6 for (int t=0, osc=0; t<8000; t++, osc+=7) { putchar(osc&0x80); }
#define n7 for (int t=0, osc=0; t<8000; t++, osc+=8) { putchar(osc&0x80); }

int main()
{
  while (1) {
    n2
    n3
    n7
    n5
    n6
    n5
    n4
    n5
  }
}
