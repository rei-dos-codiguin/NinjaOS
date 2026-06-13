//panic.h
voud panic(void) {
static inline void cpu_halt(void) {
#if defined(__x86_64__) || defined(__i386__)
    asm volatile("hlt");

#elif defined(__aarch64__) || defined(__arm__)
    asm volatile("wfi");

#elif defined(__riscv)
    asm volatile("wfi");

#else
    for (;;)
        ;
#endif
}
