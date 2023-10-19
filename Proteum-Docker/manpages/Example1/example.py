# this script is an example on how to use Proteu programs
# to create and manage a test session.
# it uses an implementation of the Unix cal program  
# it simply creates a test session, generate all mutants,
# and then inserts a few test cases.
# the mutants are executed and a report is created.

# This program receives as parameter, the name of the program
# to be tested. For instance, if foo.c is the name, then 
# "foo"should be passed as parameter.
# > python example.py foo


import os
import sys

if __name__=="__main__":                       # If this script is run as a program:
	prog = sys.argv[1]
	# create the test session
	st = "test-new " + prog
	print st
	os.system(st)
	
	# generate the mutants
	st = "muta-gen -u- 1.0 0 " + prog
	print st
	os.system(st)

	# insert a few test cases
	# first one with no parameters
	st = "tcase-add  " + prog
	print st
	os.system(st)

	# one with month and year
	st = "tcase-add  -p \"8 1963\" " + prog
	print st
	os.system(st)

	# one with year only
	st = "tcase-add  -p 1963 " + prog
	print st
	os.system(st)

	# one with month and leap year
	st = "tcase-add  -p \"8 1972\" " + prog
	print st
	os.system(st)

	# one with leap year
	st = "tcase-add  -p 1972 " + prog
	print st
	os.system(st)

	# one with month and invalid year
	st = "tcase-add  -p \"8 19630\" " + prog
	print st
	os.system(st)

	# one with invalid month and year
	st = "tcase-add  -p \"0 1963\" " + prog
	print st
	os.system(st)

	# one with invalid year
	st = "tcase-add  -p 0 " + prog
	print st
	os.system(st)

	# exec the mutants
	st = "exemuta -exec -v . " + prog
	print st
	os.system(st)

	# creates the report
	st = "report -tcase -L 511 " +  prog
	print st
	os.system(st)
	
	# shows the report
	os.system("more " + prog +  ".lst")
	