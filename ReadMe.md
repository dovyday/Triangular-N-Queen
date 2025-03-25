# Trikampės lentos N-karalienių problema

## Aprašymas
Ši programa sprendžia trikampę N-karalienės problemą. Ji nustato maksimalų karalienių skaičių, kurį galima išdėstyti trikampėje lentelėje taip, kad jos viena kitos negrėstų. Programa nuskaitys N reikšmę iš failo, apskaičiuos optimalų karalienių išdėstymą ir išves lentelę su pažymėtomis karalienėmis.

## Naudojimas



### 1. Paleidimas
Programa gali būti paleidžiama su numatytuoju arba nurodytu failo pavadinimu:
```
Go.cmd
```

### 2. Duomenų formatas
Įvesties failas turėtų turėti vieną ar daugiau eilučių su sveikaisiais skaičiais, kurie žymi N reikšmę (trikampio dydį). Pavyzdys:
```
3
5
7
```

## Programos veikimas
1. Programa nuskaito `N` reikšmę iš failo.
2. Ji apskaičiuoja, kiek maksimaliai galima išdėstyti karalienių be grėsmių.
3. Rezultatas išvedamas į konsolę:
   - Spausdinama `N` reikšmė ir apskaičiuotas maksimalus karalienių skaičius.
   - Spausdinamos karalienių koordinatės trikampinėje lentelėje.
   - Grafinė trikampinės lentelės atvaizdavimo forma su `Q` simboliais vietose, kur yra karalienės.

## Pavyzdys
**Įvestis:**
```
3
```
**Išvestis:**
```
3 2
[2,2] [3,1]
  .  
 . Q 
Q . .
```

## Struktūra
- `main.c` – pagrindinė programos vykdymo dalis, atidaro failą ir iškviečia `solve` funkciją.
- `Queen.h` ir `Queen.c` – apibrėžia `Queen` struktūrą ir gali turėti papildomų pagalbinių funkcijų.
- `solve` funkcija sprendžia uždavinį ir spausdina rezultatą.

## Klaidų tvarkymas
- Jei įvesties failas nerandamas, programa parodys klaidą.
- Jei įvesties duomenys yra netinkami, gali būti rodomi įspėjimai arba klaidos pranešimai.


