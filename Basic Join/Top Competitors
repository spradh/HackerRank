select hackers.hacker_id, hackers.name from submissions
inner join hackers on hackers.hacker_id=submissions.hacker_id
inner join challenges on submissions.challenge_id=challenges.challenge_id
inner join difficulty on challenges.difficulty_level=difficulty.difficulty_level and submissions.score = difficulty.score
group by hackers.hacker_id, hackers.name having count(hackers.hacker_id)>1
order by count(hackers.hacker_id) desc, hackers.hacker_id asc;
