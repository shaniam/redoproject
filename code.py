words=["Two","Three","Four","Five","Six","Seven","Eight","Nine","As","Bs","Cs", "Ds", "Es", "Fs", "Gs", "Hs", "Is", "Js", "Ks",
"Ls", "Ms", "Ns","Os","Ps","Qs","Rs","Ss","Ts", "Us","Vs","Ws", "Xs", "Ys", "Zs"] 
wording=["2","3","4","5","6","7","8","9","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
print(len(words));
print(len(wording));
for i in range(len(words)):
	print("else if (sym=='"+wording[i]+"'){");
	print("      for x: curr->vecs"+words[i]+"){");
	print("            path.push_back(make_pair(x, left.substr(1, left.length())))");
	print("			}")
	print("}")
