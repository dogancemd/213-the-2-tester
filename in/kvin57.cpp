#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(85,'I')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(403,'D')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(697,'I')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(941,'N')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(411,'R')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(529,'S')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(541,'Q')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(138,'M')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(474,'W')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(410,'O')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(527,'X')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(638,'G')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(532,'N')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(450,'O')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(580,'U')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(921,'I')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(993,'S')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(623,'W')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(886,'H')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(741,'S')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(265,'U')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(490,'I')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(641,'X')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(436,'U')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(838,'W')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(397,'X')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(674,'H')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(469,'L')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(632,'V')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(874,'L')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(411)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(697)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(251,'O')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.floorEntry(527) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(336,'W')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(838)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(251)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(496,'S')==false) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(436)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.get(410) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(529)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(474)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(684,'T')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(684)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(251,'B')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(638)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(251)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(209,'X')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(410)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(397)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(336)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.get(941) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(114,'L')==true) << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(437,'E')==false) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<tree.get(541) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(527)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(266,'W')==true) << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(718,'E')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(632)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(532)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(168,'L')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<tree.get(168) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(580)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(114)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(52,'I')==true) << std::endl;
std::cout<<"Line no " << 79 <<  " " <<(tree.update(253,'Q')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(397,'E')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(29,'D')==true) << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<tree.floorEntry(674) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(450)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(308,'B')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(623)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(533,'C')==true) << std::endl;
std::cout<<"Line no " << 91 <<  " " <<(tree.update(824,'E')==false) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.floorEntry(469) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(406,'N')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(253)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(406)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(168)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.floorEntry(641) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(809,'J')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(533)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(745,'Z')==true) << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(829,'I')==true) << std::endl;
std::cout<<"Line no " << 104 <<  " " <<(tree.update(277,'T')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<tree.ceilingEntry(809) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(29)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(277)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(19,'M')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(503,'X')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.ceilingEntry(490) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(490)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.ceilingEntry(741) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(48,'M')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(769,'V')==true) << std::endl;
std::cout<<"Line no " << 120 <<  " " <<(tree.update(793,'H')==false) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(812)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(403)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(965,'R')==true) << std::endl;
std::cout<<"Line no " << 124 << " "; print_char_vector(tree.subMap(469,641));std::cout << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(469)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.floorEntry(503) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(769)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.ceilingEntry(308) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(965)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(745)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(674)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(209)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.get(266) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
