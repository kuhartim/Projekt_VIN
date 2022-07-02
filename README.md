# VIN Projekt (Ročna zavora za video igre)
 
## Ideja

Ideja je izdelati ročno zavoro, ki bi se uporabljala pri igranju video iger. Prvotna ideja je bila uporabiti Arduino nano, ki sem ga imel na zalogi in "KY 024 magnetic hall sensor", vendar sem nato Arduino nano zamenjal z Arduino pro micro, saj se ta (in arduino leonardo) obnaša kot kontroler. Ročna zavora deluje tako, da KY 024 senzor zaznava magnetno polje magneta, ki je prilepljen na ročno zavoro in pošilja analogne podatke v arduino. Arduino pa nato te podatke pretvori v število od 0 do 255 in s pomočjo knjižnice Joystick pošlje v računalnik.

## Video demonstracija

https://user-images.githubusercontent.com/57689730/177004536-5bd3b701-8246-4e05-a22f-4fdf2c5f7d6e.mp4

video

## Shema vezja

![slika](https://user-images.githubusercontent.com/57689730/177003943-c5508ec3-91bd-417a-a187-72d6d8fcd08d.png)

## Komponente

- Arduino pro micro
- KY 024 hall sensor
- magnet
- LEGO za izdelavo ročne

## Opis komponent

### Arduino PRO Micro

![slika](https://user-images.githubusercontent.com/57689730/177004008-267f0de5-e137-4c73-adfa-b723676df422.png)

**Je mikrokrmilnik, ki nam omogoča nadzorovanje vhodno izhodnih naprav. Ima pin za napajanje (VCC), pin za ozemljitev (GND), digitalne pine in analogne pine. Njegova pomembnejša lastnost zakaj sem se zanj odločil je ta, da se obnaša kot vhodna naprava kontroler (oz. tipkovnica ali miška).**

### KY 024 magnetic hall senzor

![slika](https://user-images.githubusercontent.com/57689730/177004134-f98efff2-c650-4b80-b732-0b6d090e7054.png)

**Senzor reagira namagnetno polje, ki je v bližini. Vsebuje tudi potenciometer za uravnavanje senzitivnosti. Ima analogni in digitalni izhodni pin. Digitalni sporoča le če je magnetno polje zaznano ali ne, analogno pa koliko močno je to polje in njegovo polarnost.**
