#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(126,'W')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(661,'E')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(401,'B')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(799,'B')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(943,'C')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(68,'K')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(372,'O')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(944,'C')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(941,'J')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(149,'Z')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(236,'H')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(794,'L')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(255,'Y')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(983,'Y')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(753,'U')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(962,'D')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(527,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(258,'F')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(735,'U')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(163,'I')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(17,'N')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(867,'V')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(37,'U')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(993,'E')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(984,'Y')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(669,'R')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(560,'A')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(599,'V')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(698,'H')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(697,'W')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(268,'O')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(255)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(527)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(944)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(56,'D')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.floorEntry(753) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.ceilingEntry(794) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(599)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(264,'L')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(418,'I')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(780,'O')==true) << std::endl;
std::cout<<"Line no " << 50 <<  " " <<(tree.update(649,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(983)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(780)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(98,'L')==true) << std::endl;
std::cout<<"Line no " << 57 <<  " " <<(tree.update(765,'N')==true) << std::endl;
std::cout<<"Line no " << 58 <<  " " <<(tree.update(650,'C')==false) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.floorEntry(560) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(560)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(513)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(670,'A')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(941)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(401)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(232,'B')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(258)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(312,'S')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(697)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.ceilingEntry(735) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(438,'V')==true) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(361,'Q')==true) << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(550,'N')==true) << std::endl;
std::cout<<"Line no " << 77 << " "; print_char_vector(tree.subMap(264,312));std::cout << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(646,'V')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(661)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.ceilingEntry(670) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 << " "; print_char_vector(tree.subMap(163,753));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(258)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(268)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(706,'U')==true) << std::endl;
std::cout<<"Line no " << 88 << " "; print_char_vector(tree.subMap(163,646));std::cout << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(264)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.ceilingEntry(753) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(469,'W')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(649)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(962)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(49,'M')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(418)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(102)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(824,'H')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(793)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(630,'P')==true) << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(12,'G')==false) << std::endl;
std::cout<<"Line no " << 104 <<  " " <<(tree.update(263,'W')==true) << std::endl;
std::cout<<"Line no " << 105 << " "; print_char_vector(tree.subMap(126,867));std::cout << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.floorEntry(735) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(753)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(644,'N')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(232)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(263)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.floorEntry(765) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(821,'X')==true) << std::endl;
std::cout<<"Line no " << 114 <<  " " <<(tree.update(127,'D')==true) << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<tree.get(706) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(821)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(469)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(826,'V')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(163)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.floorEntry(644) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.get(630) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(127)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(752,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.floorEntry(372) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(480,'C')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(965,'J')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(698)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(704,'B')==true) << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(841,'T')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(848,'S')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(965)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(678,'T')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
