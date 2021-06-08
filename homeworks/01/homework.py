#! /usr/bin/env python

import sys
import getopt

def DoAges():
  Ages = {'Captain Picard':'55', 'Dr. Crusher':'34', 'Commander La Forge':'30', 'Deeanna Troi':'36'}
  try:
    f = open('StarTrekNames','r')
  except:
    print ('Unable to open input file ' + 'StarTrekNames')
    exit(0)

  for line in f:
    name = line.replace('\n','')
    print('the age of ' + name + ' is ' + Ages[name])

  f.close()

if __name__=='__main__':
  DoAges()
