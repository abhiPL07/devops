# Chapter 22
## 22.5 Line I/O
### Output Functions
```c
int fputs(const char * restrict s, FILE * restrict stream);
int puts(const char *s);
```
*puts* writes to stdout. *fputs* doesn't write a newline character by default. Both return EOF if write error occurs, else return nonnegative.

---
### Input Functions
```c
char *fgets(char * restrict s, int n, FILE * restrict stream);
char *gets(char *s);
```
Both return null pointer if no characters are read before reaching the end of input stream or an error occurs. fgets can store newline char. Both store null char at the end.

---
## 22.6 Block I/O
```c
size_t fread(void * restrict ptr, size_t size, size_t nmemb, FILE * restrict stream);
size_t fwrite(const void * restrict ptr, size_t size, size_t nmemb, FILE * restrict stream);
```
```c
fwrite(a, sizeof(a[0]), sizeof(a) / sizeof(a[0]), fp);
```
Read/write multiple array elements from/to a file.
Returns the number of elements read. If error occurs, number is less than the third argument (EOF/read error, or write error). Might need pointer for *ptr* if variable isn't an array (can be struct, etc.).

---
## 22.7 File Positioning
