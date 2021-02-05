import os
file=open('password.txt','r')
line=file.readline()
print("please input the filename:")
pic=input()
while line:
    line=line[0:-1]
    os.system('python2 lsb.py extract {} lsb_crack.txt {}'.format(pic,line))
    file1=open('lsb_crack.txt','r')
    size=os.path.getsize('lsb_crack.txt')
    if size>0:
        print("maybe this is the key: {}".format(line))
        print("Decrypted data below:")
        os.system("cat lsb_crack.txt")
        print("")
        print("IF NOT ?")
        print("input anything to continue")
        anykey=input()
        #print("input anything to continue")
    line=file.readline()