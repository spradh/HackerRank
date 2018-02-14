Set @num1=1;
set @num2=1;

select group_concat(number1 separator '&') from 
    (select number1 from 
        (select number1, 
            case
                when number1%number2=0 then 1
                else 0 
            end as divisor 
        from 
            (select @num1:=@num1+1 number1 from information_schema.tables t1,information_schema.tables t2 where @num1<1000) a, 
            (select @num2:=@num2+1 number2 from information_schema.tables t3,information_schema.tables t4 where @num2<1000) b
        where number2<=number1
        order by number1) c
    group by number1
having sum(divisor)=1) e ;
