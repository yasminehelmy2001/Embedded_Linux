# Embedded Linux - Task 6

In this task, we will emulate an SD card.

### 1) Create an image of the SD card

​     `	dd  if=/dev/zero  of=sd.img  bs=1M  count=1024`

​        We used the 'dd' tool to create an image of the SD card

- 'bs=1024' sets the block transfer rate of the dd comand to be 1024 bytes 

- 'count=1000' specifies that you want to copy 1000 block (each block transfer contains 1024 bytes)

  

### 2) Configure the partition table (NOT formatting it)

​      `  cfdisk sd.img   `

Select partitioning scheme as: DOS

We specified two partitions:

| Partition Size | Partition Format (File System) | Bootable |
| -------------- | ------------------------------ | -------- |
| 200MB          | FAT 16                         | Yes      |
| 800MB          | Linux                          | No       |



Emulate the sd.img file as an sd card by attaching it to a loop driver to be accessed as a block storage

**Block Storage:**

- Block storage refers to a type of storage where data is stored in fixed-size blocks. Each block has a unique address, and data can be read or written in these fixed-size blocks. SD cards are an example of block storage devices.

**Why Attach to Loop Driver?** 

- The loop driver allows the operating system to treat the file (`sd.img`) as if it were a physical block storage device, like an SD card.
- This attachment enables the system to perform block-level operations on the file, such as reading and writing data in chunks, just as it would with a physical storage device.
- The process involves associating the disk image file (`sd.img`) with a loop device, creating a virtual block device from the file.
- A loop device provides a way to treat a regular file as a block device, enabling block-level access to the file's contents.

`sudo losetup -f --show --partscan sd.img`

- -f: find the first available loop device
- --show: print the name of the loop device to the terminal 
- --partscan: associates loop devices with the individual partitions found within the file (create a loop device for each partition)

The loop device connected to the sd image was loop16. 

### 3) Format Partition Table

This process writes the partition table to the disk, which initialized the structure based on the               configurations done in the table above.

```
# Formating the first partition as FAT
sudo mkfs.vfat -F 16 -n boot /dev/loop16p1
# format the second partition as EXT4
sudo mkfs.ext4 -L rootfs /dev/loop16p2
```

### 4) Mount the partitions

```
cd ~
mkdir boot 
mkdir rootfs
$ sudo mount /dev/loop18p1 ~/boot
$ sudo mount /dev/loop18p2 ~/rootfs
```

