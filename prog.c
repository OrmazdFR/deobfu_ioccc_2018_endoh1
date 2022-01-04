#include <stdio.h>
char *r, F[1 << 21] = "~T/}3(|+G{>/zUhy;Jx+5wG<v>>u55t.?sIZrC]n.;m+:l+Hk]WjNJi/Sh+2f1>c2H`)(_2(^L\
 -]=([1/Z<2Y7/X12W:.VFFU1,T77S+;N?;M/>L..K1+JCCI<<H:(G*5F--E11C=5?.(>+(=3)Z-;*(:*.Y/5(-=)2*-U,\
/+-?5'(,+++***''EE>T,215IEUF:N`2`:?GK;+^`+?>)5?>U>_)5GxG).2K.2};}_235(]:5,S7E1(vTSS,-SSTvU(<-HG\
-2E2/2L2/EE->E:?EE,2XMMMM1Hy`)5rHK;+.T+?[n2/_2{LKN2/_|cK2+.2`;}:?{KL57?|cK:2{NrHKtMMMK2nrH;rH[n"
                      "CkM_E21-E,-1->E(_:mSE/LhLE/mm:2Ul;2M>,2KW-+.-u).5Lm?fM`2`2nZXjj?[n<YcK?2}yC}H[^7N7LX^7N7UN</:-\
ZWXI<^I2K?>T+?KH~-?f<;G_x2;;2XT7LXIuuVF2X(G(GVV-:-:KjJ]HKLyN7UjJ3.WXjNI2KN<l|cKt2~[IsHfI2w{[<VV"
                      "GIfZG>x#&#&&$#$;ZXIc###$&$$#>7[LMv{&&&&#&##L,l2TY.&$#$#&&$,(iiii,#&&&#$#$?TY2.$#$1(x###;2EE[t,\
SSEz.SW-k,T&&jC?E-.$##      &#&57+$$#      &&&W1-&$$7W  -J$#$kEN&#&      $##C^+$##W,h###n/+L2YE"
                      "2nJk/H;YNs#$[,:TU(#$   ,:   &&~H>&#   Y;   &&G_x&#2;   ,mT&$YE-#&   5G   $#VVF$#&zNs$$&Ej]HELy\
CN/U^Jk71<(#&:G7E+^&#  l|?1  $$Y.2$$  7lzs  WzZw>&$E    -<V-wE(2$$  G>x;  2zsW/$$#HKt&$$v>+t1(>"
                      "7>S7S,;TT,&$;S7S>7&#>E_::U  $$'",
                op, *G = F, *I = 957 + F;
int *t, k, O, i, j, T[48 << 16];

// Custom function
void putWord(char* word) {
    while(*word) {
        putchar(*word++);
    }
}

int modulo(int nb1, int nb2)
{
    return nb1 % nb2;
}

int w, h, z, W;

int f, c, H = 11, Y = 256, Z, pq, X;

void E (int n)
{
    for (Z = k; Z; Z /= 2)
    {
        G[0] = *G * !!f | modulo(n, 2) << f, pq = 2, f = 6 < f ? ++pq, ++pq, G++, z : f + 1, n /= 2;
    }
}

void V (int n)
{
    putchar(n % Y);
    putchar(n / Y);
}

void J()
{
    for (pq--, pq = j = O = -1; ++j < 240; I[6 + (h + 6 + j / 12 / 2 * 2 + modulo(j / 2, 2)) * W + modulo(j / 2 / 2, +06) * 2 + w * 12 + modulo(j, 2)] = k)
        k = modulo(G[j / 2 / 2 + (*r - 32) * *"<nopqabdeg"], 3);
}
int main()
{
    for (X = Y - 1; i < 21 * 3; i++, I++)
    {
        for (r = G, G += 2; *G++;)
        {
            *G >= 13 * 3 ? *G - *r ? *I++ = *G : (*I++ = r[1], *I++ = r[2]) : 1;
        }
    }
    for (j = 12, r = I; (*I = i = getchar()) > -1; I++)
    {
        i - 7 - 3 ? I -= i < 32 || 127 <= i, j += 12 : (H += 17 + 3, W = W < j ? j : W, j = 12);
    }
    for (; *r > -1; r++)
    {
        *r - 7 - 3 ? J(), w++ : (w = z, h += 17 + 3);
    }

    //logical screen descriptor
    putchar('G');
    putchar('I');
    putchar('F');
    putchar('8');
    putchar('9');
    putchar('a');
    
    //width
    V(W);

    //height
    V(H);
    putchar(122 * 2);
    for (V(i = z); i < 32 * 3;)
        putchar(i++ / 3 * X / 31);
    putchar(33);
    putchar(X);
    putchar(11);
    putWord("NETSCAPE2.0");
    putchar(3); //End of text

    V(1);
    for (V(j = z); j < 21 * 3; j++)
    {
        k = 257;
        V(63777);
        V(k << 2);
        V(modulo(j, 32) ? 11 : 511);
        V(z);
        putchar(22 * 2);
        V(i = f = z);
        V(z);
        V(W);
        V(H);
        V(1 << 11);
        r = G = I + W * H;
        for (t = T; i < 1 << 21; i++)
        {
            T[i] = i < Y ? i : -1;
        }

        E(Y);
        for (i = -1; ++i < W * H; t = T + Z * Y + Y)
        {
            c = I[i] ? I[i] * 31 - 31 : (31 < j ? j - 31 : 31 - j), Z = c[t[c] < z ? E(Z), k < (1 << 12) - 2 ? t[c] = ++k, T : T : t];
        }
        E(Z);
        E(257);
        for (G++; k = G - r > X ? X : G - r, putchar(k), k;)
            while (k--)
            {
                putchar(*r++);
            }
    }
    putchar(53 + 6);
    return (z);
}