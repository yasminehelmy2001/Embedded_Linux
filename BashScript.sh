#!/bin/bash
cd /home/yasmin
mkdir myDirectory
cd ./myDirectory
mkdir secondDirectory
cd ./secondDirectory
touch myNotePaper
cp myNotePaper /home/yasmin/myDirectory
cd ../
mv myNotePaper myOldNotePaper

