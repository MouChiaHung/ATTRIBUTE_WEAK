# Implement C override mechanism using __attribute__ weak and alias

1.Run `make OVERRIDE=0` for calling no override handler.

![image](https://github.com/MouChiaHung/ATTRIBUTE_WEAK/blob/master/no_override.jpg)

2.Run `make OVERRIDE=1` for calling the override handler.

![image](https://github.com/MouChiaHung/ATTRIBUTE_WEAK/blob/master/override.jpg)

3.Run `nm` to see weak and strong symbols

![image](https://github.com/MouChiaHung/ATTRIBUTE_WEAK/blob/master/nm.JPG)
