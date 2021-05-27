import time

file1 = open('poop.txt', 'r')

cool_ass_list_with_a_bunch_of_ints = []


while True:
    line = file1.readline()

    if not line:
        break
    line_parsed = line.split()
    cool_ass_list_with_a_bunch_of_ints.append(int(line_parsed[0]))

print(cool_ass_list_with_a_bunch_of_ints)
start = time.time()
cool_ass_list_with_a_bunch_of_ints.sort()
end = time.time()
print("time-elapsed", end - start)
print(cool_ass_list_with_a_bunch_of_ints)

file1.close()

