# OZNACZENIA
$M$ - zbiór liczb naturalnych dodatnich,\
$(m_0, m_1, ...)$ - liczby ze zbioru $M$,\
$R$ - zbiór liczb rzeczywistych,\
$(r_0, r_1, ...)$ - liczby ze zbioru $R$

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
Wykonanie prób dzielenia $m_0$ przez liczby $2$, $3$, a następnie przez liczby postaci $6m_5 \mp 1$ pozwala odszukać dzielnik $m_0$ ograniczając liczbę prób dzielenia $m_0$ do $r_0 \approx \frac{\sqrt{m_0}}{3}$. Twierdzenie o liczbach pierwszych pozwala na ograniczenie liczby prób dzielenia $m_0$ do $r_1 \approx \frac{\sqrt{m_0}}{ln(\sqrt{m_0})}$. Zatem iloraz $\frac{r_0}{r_1} \approx \frac{ln(\sqrt{m_0})}{3}$ oznacza, ile razy więcej prób dzielenia $m_0$ wykonuje opisany algorytm względem teoretycznej liczby prób dzielenia $m_0$.

### BIBLIOGRAFIA
Riesel H., Prime numbers and computer methods for factorization, ISBN: 978-0-8176-8297-2

TODO TERAZ
## FERMAT
### ALGORYTM
wejście: $m_0 \geq 10^{20}$\
wyjście: $m_1, m_2$ - dzielniki $m_0 = m_1m_2$, gdzie $m_1 \leq m_2$\
\
jeśli $2 \mid m_0$ to\
&emsp;koniec: $m_1 = 2$, $m_2 = \frac{m_0}{2}$\
$m_3 = \lceil \sqrt{m_0} \rceil$\
$n_0 = (m_3)^2 - m_0$\
$r_0 = \sqrt{n_0}$\
wykonuj dopóki $r_0 \notin N$\
&emsp;$n_0 = n_0 + 2m_3 + 1$\
&emsp;$r_0 = \sqrt{n_0}$\
&emsp;$m_3 = m_3 + 1$\
koniec: $m_1 = m_3 - r_0$, $m_2 = m_3 + r_0$

### OPIS 
Z $m_0 = (m_3)^2 - (r_0)^2$ wynika $(r_0)^2 = (m_3)^2 - m_0$, a więc znalezienie $m_3$, dla której $r_0 \in N$ pozwala odszukać dzielniki $m_0$. Liczba kroków algorytmu to $\frac{m_1 + m_2}{2} - \lceil \sqrt{m_0} \rceil \approx \frac{(\sqrt{m_1} - \sqrt{m_2})^2}{2} \approx \frac{(m_1 - \sqrt{m_0})^2}{2m_1}$, gdzie $m_3 = \lceil \sqrt{m_0} \rceil$ jest wartością początkową, $m_3 = \frac{m_1 + m_2}{2}$ jest wartością końcową. Jeśli $m_1 = r_1\sqrt{m_0}$ to liczba kroków algorytmu przedstawia się w postaci $\frac{(r_1-1)^2}{2r_1}\sqrt{m_0}$, gdzie $0 < r_1 < 1$, co ukazuje, że algorytm jest niepraktyczny dla $r_1 < \frac{4 - \sqrt{7}}{3}$ osiągając większą liczbę kroków algorytmu niż $\frac{\sqrt{m_0}}{3}$.

### BIBLIOGRAFIA