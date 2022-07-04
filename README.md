# VIN Projekt (Ročna zavora za video igre)
 
## Ideja

Ideja je izdelati ročno zavoro, ki bi se uporabljala pri igranju video iger. Prvotna ideja je bila uporabiti Arduino nano, ki sem ga imel na zalogi in "KY 024 magnetic hall sensor", vendar sem nato Arduino nano zamenjal z Arduino pLeonardo, saj se ta (in arduino micro) obnaša kot kontroler. Ročna zavora deluje tako, da KY 024 senzor zaznava magnetno polje magneta, ki je prilepljen na ročno zavoro in pošilja analogne podatke v arduino. Arduino pa nato te podatke pretvori v število od 0 do 255 in s pomočjo knjižnice Joystick pošlje v računalnik.

## Slike

![slika](https://user-images.githubusercontent.com/57689730/177004583-6dbb1cf1-87c6-465c-a4f9-cc3cd545ec72.png)
![slika](https://user-images.githubusercontent.com/57689730/177004597-8ea6dad7-d5a2-4698-a3fb-26a0623654e3.png)

## Video demonstracija

https://user-images.githubusercontent.com/57689730/177004536-5bd3b701-8246-4e05-a22f-4fdf2c5f7d6e.mp4


## Shema vezja

![slika](https://user-images.githubusercontent.com/57689730/177056433-dabffcd0-64c6-4fd2-ab3d-77d918ccdd77.png)

## Komponente

- Arduino Leonardo
- KY 024 hall sensor
- magnet
- LEGO za izdelavo ročne

## Opis komponent

### Arduino Leonardo

![slika](https://user-images.githubusercontent.com/57689730/177056451-1042d554-bf54-4bc3-b044-b4fc839e623b.png)

**Je mikrokrmilnik, ki nam omogoča nadzorovanje vhodno izhodnih naprav. Ima pin za napajanje (VCC), pin za ozemljitev (GND), digitalne pine in analogne pine. Njegova pomembnejša lastnost zakaj sem se zanj odločil je ta, da se obnaša kot vhodna naprava kontroler (oz. tipkovnica ali miška). Zelo je podoben Arduinu UNO z nekaj manjšimi spremembami kot npr. pin 13 ni PWM medtem, ko na Arduinu UNO je. PWM (Pulse Width Modulation) so načeloma digitalni pini, vendar imajo možnost simulirati analogni izhod z vklaplanjem in izklaplanjem napetosti.**

### KY 024 magnetic hall senzor

![slika](https://user-images.githubusercontent.com/57689730/177004134-f98efff2-c650-4b80-b732-0b6d090e7054.png)

**Senzor reagira na magnetno polje, ki je v bližini. Vsebuje tudi potenciometer za uravnavanje senzitivnosti. Ima analogni in digitalni izhodni pin. Digitalni sporoča le če je magnetno polje zaznano ali ne, analogno pa koliko močno je to polje in njegovo polarnost.
Uporabljati ga je možno v prostoru z temperaturo nižjo od 150 °C. Vsebuje regulator napetosti za operiranje z vhodnimi napetostmi od 4.5 V do 24 V, varovalno diodo proti obratni polarnosti, generator napetosti iz magnetnega polja in manjše dele vezja. Vsebuje tudi 2 LED diodi. Prva prikazuje, če je zaznana vhodna napetost, druga pa če je magnetno polje bilo zaznano (digitalni pin oddaja podatke tako kot ta led dioda).
**
