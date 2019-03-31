words=["As","Bs","Cs", "Ds", "Es", "Fs", "Gs", "Hs", "Is", "Js", "Ks",
"Ls", "Ms", "Ns","Os","Ps","Qs","Rs","Ss","Ts", "Us","Vs","Ws", "Xs", "Ys", "Zs"] 
wording=["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
print(len(words));
print(len(wording));
for i in range(len(words)):
	print("else if (trans.compare("+wording[i]+")==0)){");
	print("begin->add"+words[i]+"(end);}")
	
