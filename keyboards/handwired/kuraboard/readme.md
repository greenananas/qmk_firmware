# kuraboard

![kuraboard](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [greenananas](https://github.com/greenananas)
* Hardware Supported: [QMK Proton C](https://qmk.fm/proton-c/)
* Hardware Availability:
    *   [Clueboard](https://clueboard.co/parts/qmk-proton-c) (US-West)
    *   [Keebio](https://keeb.io/products/qmk-proton-c) (US-East)
    *   [NovelKeys](https://novelkeys.xyz/products/qmk-proton-c) (US-East)
    *   [SpaceCat](https://spacecat.design/products/proton-c-by-qmk) (US-East)
    *   [1upkeyboards](https://www.1upkeyboards.com/shop/controllers/qmk-proton-c/) (US-East)
    *   [Oh, Keycaps!](https://ohkeycaps.com/products/proton-c) (US-Midwest)
    *   [Mykeyboard](https://mykeyboard.eu/catalogue/qmk-proton-c-rev-2_1246/) (EU)
    *   [Daily Clack](https://dailyclack.com/products/qmk-proton-c) (AUS)

## Pinout

The following pins are used:
* Columns:
    * Column 0: A0
    * Column 1: A1
    * Column 2: A2
    * Column 3: A4
    * Column 4: A5
    * Column 5: A6
    * Column 6: A7
    * Column 7: A8
    * Column 8: B8
    * Column 9: B13
    * Column 10: B14
    * Column 11: B15
    * Column 12: B9
    * Column 13: B10
    * Column 14: B11
    * Column 15: B12
* Rows:
    * Row 0: B0
    * Row 1: B1
    * Row 2: B2
    * Row 3: B3
    * Row 4: B4

## Compilation and flashing

Make example for this keyboard (after setting up your build environment):

    make kuraboard:default

Flashing example for this keyboard:

    make kuraboard:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
