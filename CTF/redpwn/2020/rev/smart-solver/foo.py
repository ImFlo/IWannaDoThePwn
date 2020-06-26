
for i in open("./clean.txt").readlines():
    print "s.add(%s)" % i.strip().replace("<=", ">")
