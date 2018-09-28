puts "Vous avez quel age ?"
nbr = gets.to_i
i = 1
while (0 <= nbr - i)
	if (i != nbr/2)
		puts "Il y a #{i}ans, tu avais #{nbr - i} ans"
	else
		puts "Il y a #{i} ans, tu avais la moitié de l'age que tu as aujourd'hui"
	end
	i += 1
end