# Linux Sample Kernel Module
this module print `Hello world!` after starting and print `Goodbye world!` after closing

## BUILD
you can change module in `lkm_example.c` file as you wish
<br/>
after changing you should run:
<br/>

```
> make
```
this will generate kernel ready file to execute on system

## RUN
after making required files, you can run module with:

```
> sudo insmod lkm_example.ko
```
<br/>
to check the module output use run:

```
> sudo dmesg
```
<br/>
To remove the module, run:

```
sudo rmmod lkm_example
```

### screenshots

![Alt text](screenshots/1.png?raw=true)
<br/><br/>
![Alt text](screenshots/2.png?raw=true)
<br/><br/>
![Alt text](screenshots/3.png?raw=true)