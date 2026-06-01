# ma314smith — FC660C keymap

OS-aware keymap (Windows + macOS) for the Leopold FC660C on the Hasu alt
controller, driven by QMK OS detection:

- **Caps Lock** — Cmd (⌘, Left GUI) on macOS, Left Ctrl on Windows.
- **Bottom-right key** (left of the arrow cluster) — Globe/fn (🌐) on macOS,
  momentary FN layer on Windows (there's no Windows Globe; the firmware-local
  Fn layer is its natural counterpart).
- **FN-layer Home/End** — Cmd+←/→ on macOS, Home/End on Windows.
- **GUI/Alt** auto-swap into the standard Mac Option/Command positions on macOS.

## Compile

```
qmk compile -kb fc660c -km ma314smith
```

## Flash

1. Put the Hasu controller into the **Atmel DFU bootloader**: press the reset/boot
   button on the controller (usually on the back of the board; on HHKB controllers
   this replaces the original DIP switches). See `keyboards/fc660c/readme.md`.
2. Run:
   ```
   qmk flash -kb fc660c -km ma314smith
   ```

## Notes

- After flashing, turn **off** the macOS "swap Option/Command" keyboard setting —
  the firmware now performs that swap on macOS, so leaving the OS setting on would
  cancel it out.
- NKRO is disabled (`NKRO_ENABLE = no`) and `KEYBOARD_SHARED_EP = yes` so the
  Globe-key combos (Globe+E, Globe+arrows) work. 6KRO is plenty for typing.
