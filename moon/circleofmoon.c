extern int putchar (int __c);

// see etude in c minor
int main()
{
  while (1) {
    for (int t=0, osc=0; t<8000; t++, osc+=14) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<4000; t++, osc+=14) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<4000; t++, osc+=14) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<8000; t++, osc+=14) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<4000; t++, osc+=14) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<4000; t++, osc+=14) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<8000; t++, osc+=21) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<2000; t++, osc+=21) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<2000; t++, osc+=21) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<4000; t++, osc+=7) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<8000; t++, osc+=18) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<2000; t++, osc+=18) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<2000; t++, osc+=18) {
      putchar(osc&0x80);
    }
    for (int t=0, osc=0; t<4000; t++, osc+=6) {
      putchar(osc&0x80);
    }
  }
}
