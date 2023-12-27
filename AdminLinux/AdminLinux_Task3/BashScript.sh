#!/bin/bash
cd ~
la | grep .bashrc$ && echo "HOME=$HOSTNAME" >> .bashrc && echo "LOCAL=$(whoami)" >> .bashrc && echo gnome-terminal >> .bashrc




