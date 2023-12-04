For the child terminal opened:
1) Since HELLO is a global environment variable, the user name becomes the host name, this will cause conflicts while writing code on the terminal. For example: cd ~ won't work as it won't find a directory with the hostname.
2) LOCAL is a local enviroment variable, so it won't be seen.
