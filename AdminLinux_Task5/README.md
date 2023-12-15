## Code:

User Information:  
uid=1003(yourName) gid=1003(yourName) groups=1003(yourName),1004(FamilyName)  

## Explanation:

uid is the user ID  
gid is the primary group ID associated with the user  
the groups field has the primary group (yourName) and the secondary group (FamilyName) of the user  

## Code:
Group Information:  
FamilyName:x:1004:yourName  

## Explanation:
"Family Name" is the name of the group  
x represents the group password field  
1004 is the GID (Group ID)  
"yourName" is a user who is a member of the "FamilyName" group  

