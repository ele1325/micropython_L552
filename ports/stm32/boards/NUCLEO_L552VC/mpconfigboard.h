#define MICROPY_HW_BOARD_NAME       "NUCLEO-L552VC"
#define MICROPY_HW_MCU_NAME         "STM32L552VC"

#define MICROPY_EMIT_THUMB          (0)
#define MICROPY_EMIT_INLINE_THUMB   (0)
#define MICROPY_OPT_COMPUTED_GOTO   (0)
#define MICROPY_PY_BUILTINS_COMPLEX (0)
#define MICROPY_PY_GENERATOR_PEND_THROW (0)
#define MICROPY_PY_USOCKET          (0)
#define MICROPY_PY_NETWORK          (0)
#define MICROPY_PY_ONEWIRE          (0)
#define MICROPY_PY_STM              (0)
#define MICROPY_PY_PYB_LEGACY       (0)
#define MICROPY_PY_UHEAPQ           (0)
#define MICROPY_PY_UTIMEQ           (0)

#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (0) // requires a custom USB connector on PA11/PA12
#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_HAS_FLASH        (1)

// MSI is used and is 4MHz
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (16)
#define MICROPY_HW_CLK_PLLR (2)
#define MICROPY_HW_CLK_PLLQ (2)
#define MICROPY_HW_CLK_PLLP (7)

// kris
// #define MICROPY_HW_CLK_PLLM (3)
// #define MICROPY_HW_CLK_PLLN (8)
// #define MICROPY_HW_CLK_PLLP (7)
// #define MICROPY_HW_CLK_PLLQ (4)
// #define MICROPY_HW_CLK_PLLR (2)


// The board has an external 32kHz crystal
#define MICROPY_HW_RTC_USE_LSE      (0)

// UART config
#define MICROPY_HW_UART1_TX     (pin_A9)
#define MICROPY_HW_UART1_RX     (pin_A10)
#define MICROPY_HW_UART2_TX     (pin_A2)  // VCP TX
#define MICROPY_HW_UART2_RX     (pin_A3)  // VCP RX
#define MICROPY_HW_UART3_TX     (pin_C4)
#define MICROPY_HW_UART3_RX     (pin_B11)

#define MICROPY_HW_UART_REPL        PYB_UART_2
#define MICROPY_HW_UART_REPL_BAUD   115200

#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4

// LEDs
#define MICROPY_HW_LED1             (pin_B13) // Green LD3 LED on Nucleo
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS           (MICROPY_HW_ENABLE_USB)
#define MICROPY_HW_USB_MSC          (0)
#define MICROPY_HW_USB_HID          (0)
#define MICROPY_HW_USB_CDC_RX_DATA_SIZE (256)
#define MICROPY_HW_USB_CDC_TX_DATA_SIZE (256)


// -------------------------------------------------------
// AUO

// #define MICROPY_CONFIG_ROM_LEVEL        (MICROPY_CONFIG_ROM_LEVEL_CORE_FEATURES)
// #define MICROPY_CONFIG_ROM_LEVEL        (MICROPY_CONFIG_ROM_LEVEL_BASIC_FEATURES)
#define MICROPY_CONFIG_ROM_LEVEL        (MICROPY_CONFIG_ROM_LEVEL_EXTRA_FEATURES)


// #define MICROPY_HELPER_REPL             (1)  // err: mp_repl_get_ps1
// #define MICROPY_KBD_EXCEPTION           (1)  // err: mp_kbd_exception
// #define MICROPY_ENABLE_SCHEDULER        (1)  // err: mp_sched_schedule
// #define MICROPY_PY_UOS                  (1)  // err: mp_uos_dupterm_is_builtin_stream
// #define MICROPY_PY_BUILTINS_MEMORYVIEW  (1)  // err: mp_type_memoryview

#define COREPLUS                        (1)


// #define MICROPY_COMP_MODULE_CONST                   (1)
// #define MICROPY_COMP_TRIPLE_TUPLE_ASSIGN            (1)
// #define MICROPY_COMP_RETURN_IF_EXPR                 (1)
// #define MICROPY_OPT_LOAD_ATTR_FAST_PATH             (1)
// #define MICROPY_OPT_MAP_LOOKUP_CACHE                (1)
// #define MICROPY_OPT_MPZ_BITWISE                     (1)
// #define MICROPY_OPT_MATH_FACTORIAL                  (1)
// #define MICROPY_ENABLE_FINALISER                    (1)
// #define MICROPY_STACK_CHECK                         (1)
// #define MICROPY_KBD_EXCEPTION                       (COREPLUS)  // core err: mp_kbd_exception
// #define MICROPY_HELPER_REPL                         (COREPLUS)  // core err: mp_repl_get_ps1
// #define MICROPY_REPL_EMACS_KEYS                     (1)
// #define MICROPY_REPL_AUTO_INDENT                    (1)
// #define MICROPY_ENABLE_SOURCE_LINE                  (1)
// #define MICROPY_STREAMS_NON_BLOCK                   (1)
// #define MICROPY_MODULE_ATTR_DELEGATION              (1)
// #define MICROPY_MODULE_BUILTIN_INIT                 (1)
// #define MICROPY_MODULE_WEAK_LINKS                   (1)
// #define MICROPY_CAN_OVERRIDE_BUILTINS               (1)
// #define MICROPY_ENABLE_SCHEDULER                    (COREPLUS)  // core err: mp_sched_schedule
// #define MICROPY_PY_FUNCTION_ATTRS                   (1)
// #define MICROPY_PY_DESCRIPTORS                      (1)
// #define MICROPY_PY_DELATTR_SETATTR                  (1)
// #define MICROPY_PY_FSTRINGS                         (1)
// #define MICROPY_PY_BUILTINS_STR_UNICODE             (1)
// #define MICROPY_PY_BUILTINS_STR_CENTER              (1)
// #define MICROPY_PY_BUILTINS_STR_PARTITION           (1)
// #define MICROPY_PY_BUILTINS_STR_SPLITLINES          (1)
// #define MICROPY_PY_BUILTINS_MEMORYVIEW              (COREPLUS)  // core err: mp_type_memoryview
// #define MICROPY_PY_BUILTINS_SLICE_ATTRS             (1)
// #define MICROPY_PY_BUILTINS_SLICE_INDICES           (1)
// #define MICROPY_PY_BUILTINS_FROZENSET               (1)
// #define MICROPY_PY_BUILTINS_ROUND_INT               (1)
// #define MICROPY_PY_ALL_SPECIAL_METHODS              (1)
// #define MICROPY_PY_REVERSE_SPECIAL_METHODS          (1)
// #define MICROPY_PY_BUILTINS_COMPILE                 (1) // (MICROPY_ENABLE_COMPILER && 0)
// #define MICROPY_PY_BUILTINS_EXECFILE                (1) // (MICROPY_ENABLE_COMPILER && 0)
// #define MICROPY_PY_BUILTINS_NOTIMPLEMENTED          (1)
// #define MICROPY_PY_BUILTINS_INPUT                   (1)
// #define MICROPY_PY_BUILTINS_POW3                    (1)
// #define MICROPY_PY_BUILTINS_HELP                    (1)
// #define MICROPY_PY_BUILTINS_HELP_MODULES            (1)
// #define MICROPY_PY_MICROPYTHON_MEM_INFO             (1)
// #define MICROPY_PY_ARRAY_SLICE_ASSIGN               (1)

#define MICROPY_PY_COLLECTIONS_DEQUE                (1)
#define MICROPY_PY_COLLECTIONS_ORDEREDDICT          (0)
#define MICROPY_PY_MATH_CONSTANTS                   (0)
#define MICROPY_PY_MATH_SPECIAL_FUNCTIONS           (0)
#define MICROPY_PY_MATH_FACTORIAL                   (0)
#define MICROPY_PY_MATH_ISCLOSE                     (0)
#define MICROPY_PY_CMATH                            (0)

// #define MICROPY_PY_IO_IOBASE                        (1)
// #define MICROPY_PY_IO_FILEIO                        (1)
// #define MICROPY_PY_SYS_MAXSIZE                      (1)
// #define MICROPY_PY_SYS_PS1_PS2                      (1)
// #define MICROPY_PY_SYS_STDFILES                     (1)
// #define MICROPY_PY_SYS_STDIO_BUFFER                 (1)
// #define MICROPY_PY_UERRNO                           (1)
// #define MICROPY_PY_USELECT                          (1)
// #define MICROPY_PY_UASYNCIO                         (1)
// #define MICROPY_PY_UCTYPES                          (1)
// #define MICROPY_PY_UZLIB                            (1)
// #define MICROPY_PY_UJSON                            (1)
// #define MICROPY_PY_UOS                              (COREPLUS)  // core err: mp_uos_dupterm_is_builtin_stream
// #define MICROPY_PY_URE                              (1)
// #define MICROPY_PY_URE_SUB                          (1)
// #define MICROPY_PY_UHEAPQ                           (0)
// #define MICROPY_PY_UHASHLIB                         (1)
// #define MICROPY_PY_UBINASCII                        (1)
// #define MICROPY_PY_UBINASCII_CRC32                  (0)
// #define MICROPY_PY_URANDOM                          (1)
// #define MICROPY_PY_URANDOM_EXTRA_FUNCS              (1)
// #define MICROPY_PY_FRAMEBUF                         (1)

// -------------------------------------------------------