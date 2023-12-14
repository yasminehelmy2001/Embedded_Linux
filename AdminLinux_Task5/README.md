Output Code Explanation

User 'yourName' already exists.
Group 'FamilyName' already exists.
User 'yourName' is already a member of group 'FamilyName'.

User Information:
uid=1003(yourName) gid=1003(yourName) groups=1003(yourName),1004(FamilyName)

uid is the user ID 
gid is the primary group ID associated with the user 
the groups field has the primary group (yourName) and the secondary group (FamilyName) of the user

Group Information:
FamilyName:x:1004:yourName

"Family Name" is the name of the group
x represents the group password field
1004 is the GID (Group ID)
"yourName" is a user who is a member of the "FamilyName" group 

