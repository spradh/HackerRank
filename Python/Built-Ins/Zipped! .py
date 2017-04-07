# Enter your code here. Read input from STDIN. Print output to STDOUT
from __future__ import division
from collections import defaultdict

nx=raw_input()
nx=nx.strip().split()

#print nx

students=int(nx[0])
exams=int(nx[1])

student_score=defaultdict(list)

for exam in xrange(exams):
  scores=raw_input().strip().split()
  for i in xrange(len(scores)):
    student_score[i].append(float(scores[i]))

#print student_score

for value in student_score.values():
  print sum(value)/len(value)
