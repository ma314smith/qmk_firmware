# ma314smith — FC660C keymap

OS-aware keymap (Windows + macOS) for the Leopold FC660C on the Hasu alt
controller. Caps Lock acts as the macOS Globe/fn key (Left Ctrl on Windows),
FN-layer Home/End map to Cmd+←/→ on macOS, and GUI/Alt auto-swap into the
standard Mac Option/Command positions — all driven by QMK OS detection.

## Compile

```
qmk compile -kb fc660c -km ma314smith
```

## Flash

1. Put the Hasu controller into the **Atmel DFU bootloader** (see
   `keyboards/fc660c/readme.md`). Either:
   - **Physical:** press the reset/boot button on the controller (usually on the
     back of the board; on HHKB controllers this replaces the original DIP switches).
   - **Software:** use the QMK Command combo **Left Shift + Right Shift + Fn + P (Pause)**.
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
