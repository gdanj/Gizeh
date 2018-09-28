puts "Vous avez quel age ?"
nbr = gets.to_i
i = 1
while (0 <= nbr - i)
	puts "Il y a #{i}ans, tu avais #{nbr - i} ans"
	i += 1
end