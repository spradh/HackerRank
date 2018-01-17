select h1.hacker_id as hacker_id, h1.name as name,s.submission_date as submission_date, count(distinct s.submission_id) as num_of_submissions from hackers h1
join (select s1.hacker_id as hacker_id from (
                select submission_date, hacker_id 
                    from submissions 
                    group by submission_date,hacker_id) s1
            group by s1.hacker_id
            having count(distinct s1.submission_date)=(
                select count(*) from (select count( distinct submission_date) from submissions 
                    group by submission_date) s2)) uh
    on uh.hacker_id=h1.hacker_id
join submissions s 
    on s.hacker_id=uh.hacker_id
group by s.submission_date,h1.hacker_id,h1.name
