puts "Salut, bienvenue dans ma super pyramide ! Combien d'étages veux-tu ?"
print "Entre 1 et 25 ! >"
nbr = gets.to_i
i = 0
j = -1
tab = []
if nbr < 26
	while i < nbr
		tab << '#'
		while i > j
			print tab[j]
			j += 1
		end
		puts 
		j = -1
		i += 1
	end
end