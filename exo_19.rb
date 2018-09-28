tab = []
i = 0;
while i <= 50
	if i < 10
		tab << "jean.dupont.0#{i}@email.fr"
	else
		tab << "jean.dupont.#{i}@email.fr"
	end
	i += 1
end
i = 0
while i <= 50
	if i % 2 == 0
		puts tab[i]
	end
	i += 1
end