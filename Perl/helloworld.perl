#! /usr/bin/perl

print "Hello ,World \n";
print "Enter your name ";
$name=<STDIN>;

chop($name);
#Used to remove the last charater from  the string
print "Welcome $name \n";

