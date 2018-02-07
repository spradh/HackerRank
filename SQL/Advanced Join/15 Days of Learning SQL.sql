select t3.submission_date,
    case 
        when t3.high=1 then s5.hacker_id
        else s6.hacker_id as hacker_id,
   case 
        when t3.high=1 then h2.hacker_name
        else h3.hacker_name as hacker_name,
        
from (select s3.submission_date submission_date, max(s3.score) high,count(*) max_count 
        from submissions s3 group by s3.submission_date) as t3 
join
    (select s4.submission_date submission_date, min(s4.score) low 
        from submissions s4) as t4 
    on t3.submission_date=s3.submission_date
join 
    submissions s5 
    on s5.submission_date=t3.submission_date and s5.score=t3.high
join submission s6
    on s6.submission_date=t4.submission_date and s6.score=t4.low
join hackers h2 
    on h2.hacker_id=s5.hacker_id
join hackers h3
    on h3.hacker_id=s6.hacker_id
where 
    
    
    (select hf.hacker_id hacker_id from
        (select t2.hacker_id as hacker_id from 
            (select t1.submission_date as submission_date, t1.hacker_id as hacker_id 
                from (select s1.submission_date as submission_date,s1.hacker_id as hacker_id 
                    from submissions as s1, submissions as s2 
                    where s2.hacker_id=s1.hacker_id and datediff(s1.submission_date,s2.submission_date)=1)as t1
            group by submission_date, hacker_id) as t2
        group by t2.hacker_id
        having count(t2.submission_date)=14) as hf
    join hackers h1 on h1.hacker_id=hf.hacker_id);
