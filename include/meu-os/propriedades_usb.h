// meu-os/propriedades_usb.h

#ifndef PROPRIEDADES_USB_H
#define PROPRIEDADES_USB_H

struct propriedades_usb {
    const char *fabricante;
    const char *produto;
    int versao;
    int conectado;
};

extern struct propriedades_usb USB;

void usb_init(void);
void usb_send(const void *dados, int tamanho);
void usb_recv(void *dados, int tamanho);

#endif
#define USBWAIT(segundos) usb_wait(segundos)
#define USBCOMMAND(cmd) usb_command(cmd)
#define USBCOMMANDINSTALLFILE(arq) usb_install_file(arq)
