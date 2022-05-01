# recur_sweep
Description : This snippet can generate N-dimension sequence by recur_sweep()
               fucntion.
N: how many digits you want to sweep.
W: the weights for each digit. e.g.: 2 for binary, 10 for decimal.
weights[N]: the weights for each digit. By default, we use W.
            You can also specify your own weights.

If you specify N=2, W=2, weights[N] = {2, 2}
you will get
00

01

10

11


if you specify N=3, W=3, weights[N] will be {3, 3, 3}
you will get
0 0 0 

0 0 1 

0 0 2 

0 1 0 

0 1 1 

0 1 2 

0 2 0 

0 2 1 

0 2 2 

1 0 0 

1 0 1 

1 0 2 

1 1 0 

1 1 1 

1 1 2 

1 2 0 

1 2 1 

1 2 2 

2 0 0 

2 0 1 

2 0 2 

2 1 0 

2 1 1 

2 1 2 

2 2 0 

2 2 1 

2 2 2 

