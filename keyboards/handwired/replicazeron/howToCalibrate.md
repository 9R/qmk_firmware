# How to calibrate joystick rest, min, max values

Start with the following values:
```
#define _Xrest 512
#define _Yrest 512
#define _Xmin 0
#define _Ymin 0
#define _Xmax 1023
#define _Ymax 1023
```

1. With the device plugged in, go to settings layer.
1. Open QMK Toolbox > HID Console or Terminal and type
```
qmk console
```
3. With the stick at rest, check the current X and Y values from the console.
1. Rotate the stick in all directions multiple times.
1. exit settingr layer.
1. Check the min max X and Y values.

Eg.

|axis|min|rest|max|
|----|---|----|---|
|x|-283|58|511|
|y|-443|56|511|

To get the calibrated value, add 512 to values you got.
|axis|min|rest|max|
|----|---|----|---|
|x|-283 + 512|58 + 512|511+512|
|y|-443 + 512|56 + 512|511+512|

|axis|min|rest|max|
|----|---|----|---|
|x|229|570|1023|
|y|69|568|1023|

7. Adjust the values for rounding/jitter.

```
#define _Xrest 570
#define _Yrest 570
#define _Xmin 210
#define _Ymin 50
#define _Xmax 1023
#define _Ymax 1023
```