puts "Salut, bienvenue dans ma super pyramide ! Combien d'étages veux-tu ?"
print "Entre 1 et 25 ! >"
nbr = gets.to_i
i = 0
j = 0
tab = []
if nbr < 26
	while j < nbr
		tab << ' '
		j += 1
	end
	while i < nbr
		tab[i] = '#'
		while 0 < j
			j -= 1
			print tab[j]
		end
		j = nbr
		puts 
		i += 1
	end
end