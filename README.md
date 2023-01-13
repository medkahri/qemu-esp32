| Supported Targets | ESP32 | ESP32-C2 | ESP32-C3 | ESP32-S2 | ESP32-S3 |
| ----------------- | ----- | -------- | -------- | -------- | -------- |

# ESP32 on QEMU


In this project we run esp32 on qemu which runs in a docker container


Requirements :
Docker desktop,
esp idf freertos,
visual studio



Commands to build and run the program :

to build the app : idf.py build



to combine the bins into one result.bin :  esptool.py --chip esp32 merge_bin --output result.bin --fill-flash-size 4MB 0x1000 build/bootloader/bootloader.bin 0x8000 build/partition_table/partition-table.bin 0x10000 build/qemu-esp.bin --flash_mode dio --flash_freq 40m --flash_size 4MB



to start qemu :  qemu-system-xtensa -nographic -machine esp32 -drive file=result.bin,if=mtd,format=raw


