#!/bin/bash

username="yourName"
groupname="FamilyName"

#check is user exists

#id "$username" provides information about a user
#information is redirected to /dev/null to not output anything on screen
if id "$username" &>/dev/null; then
	echo "User '$username' already exists."
else
	sudo useradd -m "$username"
	echo "User '$username' created."
fi

#check if group exists
#-q means operating in quiet mode
#searching for group starting ('^') with $groupname in /etc/group
if grep -q "^$groupname:" /etc/group; then
    echo "Group '$groupname' already exists."
else
    sudo groupadd "$groupname"
    echo "Group '$groupname' created."
fi

#checks if user exists & if user is already in the group
if id "$username" &>/dev/null && id -nG "$username" | grep -qw "$groupname"; then
    echo "User '$username' is already a member of group '$groupname'."
else
    sudo usermod -aG "$groupname" "$username"
    echo "User '$username' added to group '$groupname'."
fi

# Display user information
echo -e "\nUser Information:"
id "$username"

# Display group information
echo -e "\nGroup Information:"
getent group "$groupname"
