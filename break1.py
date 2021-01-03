import os
t=open('password.txt')
line=t.readline()
print("Please input the filename")
pic=input()
flag=0
while line:
    line=line[0:-1]
    result=os.popen('outguess -k {} -r {} out.txt'.format(line,pic)).read()
    file_stats=os.stat('out.txt')
    if file_stats.st_size > 0:
        flag=1
        print(line)
        print("find!")
        break
    print(line)
    line=t.readline()
if flag==0:
    print("Failed,please choose the password.txt or find the password in the problem")
