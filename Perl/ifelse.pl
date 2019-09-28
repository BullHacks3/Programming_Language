#! /usr/bin/perl
print "Enter your name:- ";
chop($name=<STDIN>);
if($name eq "Alice")
 {
 	print "Welcome u $name ";
 }
 elsif($name eq "Bob")
 {
 	print "Welcome u $name ";
 }
 else
 {
 	print "Your name is not on the list";
 }
