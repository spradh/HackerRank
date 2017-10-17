set @ct := (select count(1) from station); /* Storing count of all records in ct*/
set @row_id := 0; /*Creating an index to keep count of rows so that we can get to the middle value*/

select round(avg(lat_n),4) as median from (select * from station order by lat_n) as t1
where (select @row_id:= @row_id +1) between @ct/2.0 and @ct/2.0+1;
