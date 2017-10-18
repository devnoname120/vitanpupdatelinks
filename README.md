# VitaNPUpdateLinks

This tool shows how to calculate the update XML link for any games. [All credits go to Proxima.](http://wololo.net/talk/viewtopic.php?f=54&t=44091)

## Compilation

```
mkdir build && cd build && cmake .. && make
```

## Note

The embedded sha256 calculation library comes from [here](http://web.mit.edu/freebsd/head/contrib/wpa/src/ap/), I've badly stitched it up in this repo so don't use it for other stuff.