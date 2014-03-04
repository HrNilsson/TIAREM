function u = utilization(n,d)
% n = number of elements in Hn + 1
if(d < 0.5)
    u = d;
elseif d <= 1
    u = n*((2*d)^(1/n)-1)+1-d;
else
    error('d is larger than one!');
end

end