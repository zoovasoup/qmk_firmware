# paket-double-34k

![zoovasoup](https://i.imgur.com/BkpEBQjh.jpg)

A 34-key split ortholinear column stagger keyboard that uses mx switches and an exposed controller. Case files available [here](https://github.com/joe-scotto/scottokeebs).

-   Keyboard Maintainer: [zoova](https://github.com/zoovasoup)
-   Hardware Supported: promicro
-   Hardware Availability: [Amazon](https://amazon.com)

# Compiling

Make example for this keyboard (after setting up your build environment):

    make handwired/zoovasoup/paket-double-34k:default

Flashing example for this keyboard:

    make handwired/zoovasoup/paket-double-34k:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

-   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
-   **Physical reset button**: Briefly short the RST and GRD pinout on the promicro until the led blinked
-   **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
