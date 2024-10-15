import pyautogui
import time
n=int(input())
time.sleep(3)
for i in range(1,n+1):  
    for j in range(i):
        pyautogui.write("#",interval=0.25)
    pyautogui.press("enter")







