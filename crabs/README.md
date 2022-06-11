# Crab Pride Flag Generation

This flags are too complicated to be easily done as vectors (they need dithering), so this script generates them.

# To run:

``` python planize.py```

This will generate crabs.cpp and crabs.h from crabgay256.png and crabtran256.png

# Requirements
It uses Python 2.7 and [Pillow](https://pillow.readthedocs.io/en/stable/)

# Useful commands:

``` 
convert crabgay.png -colors 256 crabgay256.png
python planize.py
```