/*
Enter your query here.
*/

select s1.hacker_id, h.name, sum(s1.max_score) as total_score from 

(select s.challenge_id, s.hacker_id, max(s.score) as max_score from submissions s
group by s.challenge_id, s.hacker_id) as s1
-- gives highest score of candidate in each challenge

join hackers h
on s1.hacker_id=h.hacker_id

group by s1.hacker_id, h.name having total_score != 0

order by total_score desc, s1.hacker_id asc
