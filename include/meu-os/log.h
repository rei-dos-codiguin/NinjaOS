// meu-os/log.h

enum levels_de_log {
    WARNING,
    FATAL,
    INFO,
    ERROR
};

struct log_info {
    const char *nome;
    int cor;
};

static struct log_info logs[] = {
    [WARNING] = {"WARNING", YELLOW},
    [FATAL]   = {"FATAL", RED},
    [INFO]    = {"INFO", GREEN},
    [ERROR]   = {"ERROR", LIGHT_RED}
};

static inline void log(enum levels_de_log nivel, const char *msg) {
    set_text_color(logs[nivel].cor);

    print("[");
    print(logs[nivel].nome);
    print("] ");
    print(msg);
    print("\n");
}
#define info(msg)    log(INFO, msg)
#define warning(msg) log(WARNING, msg)
#define error(msg)   log(ERROR, msg)
#define fatal(msg)   log(FATAL, msg)
