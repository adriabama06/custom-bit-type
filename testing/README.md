# OPERATORS
# Important / Used for this project:


## |
**| or know as OR**: If x || y  
Example:
```
x == 0 || y == 0 -> 0

x == 1 || y == 1 -> 1
x == 1 || y == 0 -> 1
x == 0 || y == 1 -> 1
```

### Whit bits:
```c
x     = 01100010
y     = 10111010
x | y = 11111010
```



## &
**& or know as AND**: If x == 1 && y == 1 -> 1 
Example:
```
x == 0 && y == 1 -> 0
x == 1 && y == 0 -> 0
x == 0 && y == 0 -> 0

x == 1 && y == 1 -> 1
```

### Whit bits:
```c
x     = 01100010
y     = 10111010
x & y = 00100010
```



# Extra:
## ~

**~ or know as COMPLEMENT**: Invert the bits or in other words convert 1 to 0 and 0 to 1 (the same as invert bits)

### Whit bits:
```c
x  = 01100010
~x = 10011101
```



## ^
**^ or know as XOR**: If bit x != y -> 1
Example:
```c
x = 4
y = 3

x != y -> 1

x = 8
y = 8

x != y -> 0
```

### Whit bits:
```c
x     = 01100010
y     = 10111010
x ^ y = 11011000 
```

[lab6.pdf](./lab6.pdf) source: https://www.cs.clemson.edu/course/cpsc210/Labs/lab2/lab6.pdf
