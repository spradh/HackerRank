/*
Enter your query here.
*/

Select case
        when occupation= "Doctor" then concat(name,"(D)")
        when occupation= "Singer" then concat(name,"(S)")
        when occupation= "Actor" then concat(name,"(A)")
        else concat(name,"(P)")
        end
    from occupations
    order by name;
    
select concat("There are a total of ", cnt, " ",occupation,"s.") 
    from 
        (Select count(*) as cnt, lower(occupation) as occupation 
            from occupations 
            group by occupation) o1
order by cnt, occupation;
