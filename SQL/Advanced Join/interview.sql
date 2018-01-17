select con.contest_id, con.hacker_id, con.name, sum(sss.total_submissions),sum(sss.total_accepted_submissions), sum(svs.total_views), sum(svs.total_unique_views)
from contests con
join colleges col on col.contest_id=con.contest_id
join challenges chal on chal.college_id=col.college_id

left join (
    select challenge_id, sum(total_views) total_views, sum(total_unique_views) total_unique_views
    from view_stats
    group by challenge_id
) as svs on svs.challenge_id=chal.challenge_id

left join (
    select challenge_id, sum(total_submissions) total_submissions, sum(total_accepted_submissions) total_accepted_submissions 
    from submission_stats
    group by challenge_id
) as sss on sss.challenge_id=chal.challenge_id

GROUP BY con.contest_id, con.hacker_id, con.name
HAVING (sum(sss.total_submissions)+sum(sss.total_accepted_submissions)+sum(svs.total_views)+sum(svs.total_unique_views)) != 0;

