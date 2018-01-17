select s1.name from students s1 
    join packages p1 on s1.id=p1.id
    join friends f1 on f1.id=s1.id
    join packages p2 on f1.friend_id=p2.id
where p1.salary<p2.salary
order by p2.salary
