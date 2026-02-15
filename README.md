# OZNACZENIA
$M$ - zbiór liczb naturalnych dodatnich,\
$(m_0, m_1, ...)$ - liczby ze zbioru $M$,

# FAKTORYZACJA
## PRÓBNE DZIELENIE
### ALGORYTM
wejście:&nbsp; $m_0 \geq 10^{20}$\
wyjście:&nbsp; $m_1, m_2$ - dzielniki $m_0 = m_1m_2$, gdzie $m_1 \leq m_2$\
\
jeśli $2 \mid m_0$ to\
&emsp;koniec:&nbsp; $m_1 = 2$, $m_2 = \frac{m_0}{2}$\
jeśli $3 \mid m_0$ to\
&emsp;koniec:&nbsp; $m_1 = 3$, $m_2 = \frac{m_0}{3}$\
$m_3 = \lfloor \sqrt{m_0} \rfloor$\
wykonuj dla $m_4 = 5$ dopóki $m_4 \leq m_3$ aktualizując co krok $m_4 = m_4 + 4$\
&emsp;jeśli $m_4 \mid m_0$ to\
&emsp;&emsp;koniec:&nbsp; $m_1 = m_4$, $m_2 = \frac{m_0}{m_4}$\
&emsp;$m_4 = m_4 + 2$\
&emsp;jeśli $m_4 \mid m_0$ to\
&emsp;&emsp;koniec:&nbsp; $m_1 = m_4$, $m_2 = \frac{m_0}{m_4}$\
koniec:&nbsp; $m_1 = 1$, $m_2 = m_0$

### OPIS 
Wykonanie prób dzielenia $m_0$ przez liczby $2$, $3$, a następnie przez liczby postaci $6m_5 \mp 1$ pozwala odszukać dzielniki $m_0$.\
\
Liczba kroków algorytmu to $r_0 \approx \frac{\sqrt{m_0}}{3}$. Niezbędna liczba kroków algorytmu wynosi $r_1 \approx \frac{\sqrt{m_0}}{ln(\sqrt{m_0})}$, a więc $\frac{r_0}{r_1} \approx \frac{ln(\sqrt{m_0})}{3}$ ukazuje ile razy więcej kroków algorytmu zostanie wykonanych.

### BIBLIOGRAFIA
Białynicki-Birula A., Algebra, ISBN: 978-83-01-15817-0

Mazurkiewicz S., Podstawy rachunku prawdopodobieństwa, Instytut Matematyczny Polskiej Akademii Nauk, Warszawa, 1956, Monografie Matematyczne, Tom 32

Narkiewicz W., Teoria liczb, ISBN: 83-01-14015-1
Riesel H., Prime numbers and computer methods for factorization, ISBN: 978-0-8176-8297-2

Sierpiński W., Teoria liczb, Instytut Matematyczny Polskiej Akademii Nauk, Warszawa-Wrocław, 1950, Monografie Matematyczne, Tom 19

Starzyński S., Atlas matematyczny, ISBN: 978-83-283-4760-1