#!/usr/bin/python3

i: integer
q : boolean
a[8]  # of boolean;
b[2..16]  # of boolean;
c[-7..7]  # of boolean;
x[8]   #of integer;

def 8queens(i: integer, q: bool):
    j : int = 0
    while q or j == 8:
        j = j + 1
        q = false;
        if a[j] and b[i + j] and c[i - j]:
            x[i] = j
            a[j] = False
            b[i + j] = False
            c[i -  j] = False
            if i < 8:
                try( i + 1, q);
                if not q:
                    a[j] = True
                    b[i + j] = True
                    c[i - j] = True;
        else:
            q := true

if __name__ == "__main__":
   for i in range(8):
       a[i] = True
   for i := 2 to 16:
       b[i] = True
   for i := 7 to  7:
       c[i] = True;
   try( 1, q);
   if q:
       for i in range(8):
           x[i]:4)
    #writeln ???
