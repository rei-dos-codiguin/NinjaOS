#include <meu-os/propriedades_usb.h>
#include <meu-os/log.h>
void fastboot_install_image(void) {
  USBWAIT(8);
  USBCOMMANDINSTALLFILE("boot.img")
  USBCOMMAND("kexec -l boot.img && kexec -e");
 USBWAIT(5);
  warning("instalado com sucesso");
}
