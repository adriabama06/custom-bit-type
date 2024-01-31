# OPERATORS
# Important / Used for this project:


## |
**| or know as OR**: If x || y  
Example:
```
0 || 0 -> 0  

1 || 1 -> 1  
1 || 0 -> 1  
0 || 1 -> 1  
```

### Whit bits:
```c
x     = 01100010
y     = 10111010
x | y = 11111010
```



## &
**& or know as AND**: If x == y -> 1  
Example:
```
0 == 1 -> 0  
1 == 0 -> 0  

1 == 1 -> 1  
0 == 0 -> 1  
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
```
0 != 1 -> 1  
1 != 0 -> 1  

1 != 1 -> 0  
0 != 0 -> 0 
```

### Whit bits:
```c
x     = 01100010
y     = 10111010
x ^ y = 11011000 
```

[lab6.pdf](./lab6.pdf) source: https://www.cs.clemson.edu/course/cpsc210/Labs/lab2/lab6.pdf
