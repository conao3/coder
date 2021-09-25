s1, s2, s3 = input(), input(), input()
t = input()

for elm in t:
    print(
        s1 if elm == '1' else
        s2 if elm == '2' else
        s3,
        end=''
    )

print('')
