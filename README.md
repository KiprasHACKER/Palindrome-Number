# Palindrome-Number
This repository check if palindrome number

Problema
Gavus sveiką skaičių pasakyk ar jis palindromas

Analizė
Man reikia patriktint ar pirmas ir paskutinis skaitmenys yra tokie patys, tai man reiks sukurti du kintamuosius, kurie atstovaus pirmąjį ir antrajį skaitmenis ir tuomet sulygint juos.
Kintamieji:
Ivestis ir pirmas skaitmuo - skaicius
Antras skaitmuo - AntrasSkaicius
Isvestis: "Taip, sis skaicius yra palindromas!"/"Ne, sis skaius nera palindromas..."

Formulės
1. AntrasSkaicius = AntrasSkaicius - skaicius / 10 * 10
2. while (skaicius > 9)
{
skaicius = skaicius / 10;
}

Algoritmo konstravimas/projektavimas
1. Irasau kokį skaičių noriu, kad patikrintų 
2. Suskaičiuoja pirmąjį ir antrąjį skaitmenį
3. int main'e patikrina ar skaitmenys lygūs vienas kitam ir isveda atsakyma.
