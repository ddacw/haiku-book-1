**01**. For me, this is the shortest solution. Using `for` would still be longer. I got rid of typing by simply copy-pasting each line `:\`. 

**03**. I was completely baffled when the program only printed out `0.000000`. It turned out that I was using long double with `%lf`, which was not necessary because the result was not that big.

**05**. We can fulfill the requirements by using other format specifiers (`%x` for hex and `%o` for octa).

**10**. First time that I have ever write a c++ program to interact with `argv` / using `FILE`. For learning algorithms I was only required to use `freopen()`.
