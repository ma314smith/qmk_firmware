# OS detection drives the Mac/Windows behavior in keymap.c
OS_DETECTION_ENABLE = yes
DEFERRED_EXEC_ENABLE = yes

# Apple Globe/fn key needs the shared consumer endpoint, which is incompatible
# with NKRO. 6KRO is plenty for normal typing.
NKRO_ENABLE = no
KEYBOARD_SHARED_EP = yes
