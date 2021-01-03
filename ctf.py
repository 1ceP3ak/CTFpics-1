#!/usr/bin/env python
# -*- encoding: utf-8 -*-
import os
import stegpy
print("Please use Python3 and bash")
print("input the pic name")
ss=input()
print("This will check the jpg and png or webp and put the pic in the same location")
def checkpng(pic):
    os.system('zsteg {} > pnglog.txt'.format(pic))
    file=open('pnglog.txt','r')
    print(file.read())
    print("check the IDAT")
    os.system('./pngcheck/pngcheck.exe {} > IDATcheck'.format(pic))
    os.system('stegpy -c {}'.format(pic))
def checkjpg(pic):
    #print(ss)
    os.system('./stegdetect0.4/stegdetect.exe -s 10.0 -tjpoi {} > stegdetect.txt'.format(pic))
    tt=open('stegdetect.txt','r')
    result1=tt.read()
    print(result1)
    if 'negative' in result1:
        print("Maybe Not jphide&steghide")
    else:
        if 'jphide' in result1:
            print("start jphide breaking")
            print("Maybe the jphide I will help you find the password")
            os.system('./stegdetect0.4/stegbreak.exe -r rules.ini -f password.txt -t p {} > jphide.txt'.format(pic))
            tt1=open('jphide.txt','r')
            line=tt1.readline()
            while line:
                if 'jphide[v5]' in line:
                    print(line)
                    break
                line=tt1.readline()
            passs=line.find('(')
            resupass=line[passs+1:len(line)-2]
            print("This is the password: "+resupass)
            os.system('./jphide/jpseek.exe {} flag.txt'.format(pic))
            print("Please check the message in the flag.txt")
            os.system('cat flag.txt')
        if 'negative' not in result1:
            print("start steghide")
            print("Maybe the steghide if you have the password please input 1 and input the password")
            print("If you Dont have the password please input 2")
            ok=input()
            if '1' in ok:
                print("Input the password")
                passw=input()
                os.system('steghide extract -sf {} -p {}'.format(pic,passw))
            if '2' in ok:
                print("[+]------------------------Breaking--------------------")
                os.system('python3 break.py')

            print("start outguess")
            print("Please input the password and maybe it doesn't need any password")
            print("If you want to input the password please choose 1, if you dont have the password please choose 2")
            choice=input()
            if choice==1:
                passo=input()
                os.system('outguess -k {} -r {} out.txt'.format(passo,pic))
            if choice==2:
                os.system('python3 break1.py')
            print("We have tried outguess jphide and steghide if it doesn't work,please try the others like Invisible secret and blabla")
            #print("please use the invisible secret and maybe the pass can be broken by john")
os.system('exiftool {}'.format(ss))
if 'jpg' in ss:
    checkjpg(ss)
if 'png' in ss:
    checkpng(ss)