# memory allocate

## 1 memory/linux_memory/docu_mem_manage_screen 

### 1.1 exec

```
gcc -shared -fpic malloc.c -o libmalloc.so
gcc test.c -L./ libmalloc.so   
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:xxx/docu_mem_manage_screen
./a.out
```
