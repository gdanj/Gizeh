puts "Vous être né en quelle année ?"
nbr = gets.to_i
i = 0
while (2017 >= nbr + i)
	puts "En #{nbr + i} tu avais #{i}ans"
	i += 1
end