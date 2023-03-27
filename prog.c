#include <stdio.h>
// F has a size of 2Mio
char F[2097152] = "~T/}3(|+G{>/zUhy;Jx+5wG<v>>u55t.?sIZrC]n.;m+:l+Hk]WjNJi/Sh+2f1>c2H`)(_2(^L\
 -]=([1/Z<2Y7/X12W:.VFFU1,T77S+;N?;M/>L..K1+JCCI<<H:(G*5F--E11C=5?.(>+(=3)Z-;*(:*.Y/5(-=)2*-U,\
/+-?5'(,+++***''EE>T,215IEUF:N`2`:?GK;+^`+?>)5?>U>_)5GxG).2K.2};}_235(]:5,S7E1(vTSS,-SSTvU(<-HG\
-2E2/2L2/EE->E:?EE,2XMMMM1Hy`)5rHK;+.T+?[n2/_2{LKN2/_|cK2+.2`;}:?{KL57?|cK:2{NrHKtMMMK2nrH;rH[n"
"CkM_E21-E,-1->E(_:mSE/LhLE/mm:2Ul;2M>,2KW-+.-u).5Lm?fM`2`2nZXjj?[n<YcK?2}yC}H[^7N7LX^7N7UN</:-\
ZWXI<^I2K?>T+?KH~-?f<;G_x2;;2XT7LXIuuVF2X(G(GVV-:-:KjJ]HKLyN7UjJ3.WXjNI2KN<l|cKt2~[IsHfI2w{[<VV"
"GIfZG>x#&#&&$#$;ZXIc###$&$$#>7[LMv{&&&&#&##L,l2TY.aa#aa&aa,aaiaa,aa&aa$aa?aa2aa#aa(aa#aa2aa[aa\
SaazaaWaa,aa&aa?aa.aa#aa aa aa&aa+aa#aa aa aa&aa-aa$aa aaJaa$aaNaa&aa aa aa#aa+aa#aahaa#aa+aaYa"
"anaa/aaYaa#aa,aaUaa$aa aa aa&aaHaa#aa aa aa&aa_aa#aa aa,aa&aaEaa&aa aa aa$aaVaa#aaNaa$aajaaEaa\
CaaUaakaa<aa&aa7aa^aa aa|aa aa$aa2aa aalaa aazaa>aaEaa aa<aawaa2aa aa>aa aazaa/aa#aataa$aa+aa(a"
                      "a>aaSaaTaa&aaSaa>aa#aa_aaUaa$aa";
char *r;
char *G = F;
char *I = 957 + F;
int *t;
int k;
int i;
int j;
// T has a size of 3Mio
int T[3145728];

// Custom function
void putWord(char* word) {
    while(*word) {
        putchar(*word++);
    }
}

// Test function
void saveIntToFile(int myvar)
{
    FILE *file = fopen("testFile.txt", "a+");
    if (file == NULL) {
        printf("Failed to open file.\n");
    }

    fprintf(file, "%d\n", myvar);

    fclose(file);
}

void saveCharToFile(char mychar) {
    FILE *file = fopen("charFile.txt", "a+");
    if (file == NULL) {
        printf("Failed to open file.\n");
    }

    fprintf(file, "%c\n", mychar);

    fclose(file);
}

int modulo(int nb1, int nb2)
{
    return nb1 % nb2;
}

int w;
int h;

int frameAmount = 21 * 3;
int f;
int c;
int imageWidth;
int imageHeight = 11;
int X = 255;
int Y = 256;
int Z;
int z = 0;

void E (int n)
{
    for (Z = k; Z; Z /= 2)
    {
        G[0] = *G * !!f | modulo(n, 2) << f;
        if (6 < f) {
            G++;
            f = z;
        } else {
            f = f+1;
        }
        n /= 2;
    }
}

void hexEncode (int n)
{
    putchar(n % Y);
    putchar(n / Y);
}

void generateCharactersPixels()
{
    // Each character is displayed in a 12*16 grid = 192px. 4 "pixels" make a full pixel (UL -> UR -> BL -> BR)
    // There are 24 empty pixels (12*2) at the top, and 4 empty pixels (2*2) at the bottom right
    for (j = 0; j < 192; j++)
    {
        char characterSymbol = *r - 32;

        // k = 1 if a pixel must be placed, otherwise 0
        k = modulo(G[j / 4 + (characterSymbol * 60)], 3);
        // *r - 32 -> changing 32 to 31 : TELUGU becomes UFMVHV
        I[6 + (h + 6 + j / 24 * 2 + modulo(j / 2, 2)) * imageWidth + modulo(j / 4, 6) * 2 + w * 12 + modulo(j, 2)] = k;
    }
}

void function1() {
    for (int frame = 0; frame < frameAmount; frame++, I++) {
        for (r = G, G += 2; *G++;) {
            if (*G >= 13 * 3) {
              if (*G - *r) {
                *I++ = *G;
              } else {
                *I++ = r[1];
                *I++ = r[2];
              }
            }
        }
    }
}

// Own refacto
void defineImageDimensions() {
    r = I;
    int testedCharacter;
    for (int rowWidth = 12; (*I = testedCharacter = getchar()) > -1; I++) {
        if (testedCharacter == '\n') {
            imageHeight += 20; // a character is 14px tall, +3px above, +3px bellow => 20px
            if (imageWidth < rowWidth) {
              imageWidth = rowWidth;
            }
            rowWidth = 12;
        } else {
            // Ensures it's a valid ASCII character, otherwise takes it off
            I -= testedCharacter < 32 || 127 <= testedCharacter;
            rowWidth += 12;
        }
    }
}


int main()
{
    function1();

    defineImageDimensions();

    while (*r != -1)
    {
        if (*r == '\n') {
            w = z;
            h += 20;
        } else {
            generateCharactersPixels();
            w++;
        }
        r++;
    }

    ////// https://www.w3.org/Graphics/GIF/spec-gif89a.txt
    //// 17. Header
    // Signature
    putWord("GIF");
    // Version
    putWord("89a");

    //// 18. Logical Screen Descriptor
    // Logical Screen imageWidth
    hexEncode(imageWidth);
    // Logical Screen imageHeight
    hexEncode(imageHeight);
    // Packed fields
    /*  - 1   : A Global Color Table will immediately follow, the Background Color Index field is meaningful.
        - 111 : All colours will be used
        - 0   : Sort Flag - Global Color Table is not sorted
        - 100 : Size of Global Color Table */
    putchar(244); //11110100
    // Background Color Index
    putchar(0);
    // Pixel Aspect Ratio
    putchar(0);

    // Global Color Table (there will be 32 colours)
    for (i = 0; i < 32 * 3; i++)
    {
        putchar(i / 3 * X / 31); // Puts 0,0,0 8,8,8...255,255,255 which are RGB values. The first one (0,0,0) is also the color of the text
    }

    //// 26. Application Extension
    // Extension Introducer (0x21)
    putchar(33);
    // Extension Label (0xFF)
    putchar(X);
    // Block size (0x0B)
    putchar(11);
    // Application Identifier
    putWord("NETSCAPE");
    // Appl. Authentication Code
    putWord("2.0");

    putchar(3);
    hexEncode(1);
    hexEncode(0);
    for (int frame = 0; frame < frameAmount; frame++) {
        k = 257;
        //// 23. Graphic Control Extension
        // Extension Introducer (0x21)
        putchar(33);
        // Graphic Control Label (0xF9)
        putchar(249);
        // Block Size (4)
        putchar(4);
        // <Packed Fields> (Disposal : Do not dispose. The graphic is to be left)
        putchar(4); // 00000100
        // Delay time
        hexEncode(modulo(frame, 32) ? 11 : 511); // default : 11 : 511
        // Block terminator
        hexEncode(0);

        //// 20. Image Descriptor.
        // Image Separator (0x2C)
        putchar(44);
        // Image Left Position (0)
        hexEncode(z);
        // Image Top Position (0)
        hexEncode(z);
        // Image Width
        hexEncode(imageWidth);
        // Image Height
        hexEncode(imageHeight);
        // Packed Fields
        hexEncode(2048);
        r = G = I + imageWidth * imageHeight;
        i = 0;
        f = 0;
        for (t = T; i < 1 << 21; i++)
        {
            if (i < Y) {
                T[i] = i;
            } else {
                T[i] = -1;
            }
        }

        E(Y);
        for (i = -1; ++i < imageWidth * imageHeight; t = T + Z * Y + Y)
        {
            if (I[i]) {
                c = I[i] * 31 - 31;
            } else {
                if (31 < frame) {
                    c = frame - 31;
                } else {
                    c = 31 - frame;
                }
            }

            if (t[c] < z) {
                E(Z);
                if (k < (1 << 12) - 2) {
                    t[c] = ++k;
                    Z = c[T];
                } else {
                    Z = c[T];
                }
            } else {
                Z = c[t];
            }
        }
        E(Z);
        E(257);
        for (G++; k = G - r > X ? X : G - r, putchar(k);)
        {
            while (k > 0)
            {
                putchar(*r++);
                k--;
            }
        }
    }
    putchar(59);
    return (z);
}