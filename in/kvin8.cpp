#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(34,'I')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(192,'L')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(197,'J')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(37,'E')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(840,'D')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(183,'M')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(565,'U')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(273,'Y')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(980,'R')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(153,'B')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(70,'F')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(260,'T')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(206,'C')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(93,'B')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(492,'B')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(874,'G')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(543,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(84,'W')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(303,'W')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(289,'D')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(981,'T')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(921,'Z')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(162,'C')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(210,'L')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(130,'F')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(740,'P')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(524,'K')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(73,'H')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(802,'T')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(130) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(495,'U')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(740)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(874) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(543)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(260)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(273)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(921)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(840)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 << " "; print_char_vector(tree.subMap(192,874));std::cout << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(130) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(569,'D')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(84)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.get(93) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.get(130) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 << " "; print_char_vector(tree.subMap(492,565));std::cout << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(495)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(524)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.floorEntry(130) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(210)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(945,'J')==true) << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(209,'E')==true) << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(41,'B')==true) << std::endl;
std::cout<<"Line no " << 71 << " "; print_char_vector(tree.subMap(192,874));std::cout << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(940,'R')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(289)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(209)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(945)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.ceilingEntry(93) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(183,940));std::cout << std::endl;
std::cout<<"Line no " << 79 <<  " " <<(tree.update(776,'L')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.ceilingEntry(569) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(492)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(285,'X')==false) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(940)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(192)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(874)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(183)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(130)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.ceilingEntry(802) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(64,'C')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(776)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(126)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(853,'N')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(197)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(996,'X')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(565)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(853)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(131,'B')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.floorEntry(996) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(871,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<tree.floorEntry(153) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 << " "; print_char_vector(tree.subMap(153,871));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.floorEntry(93) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(441,'Q')==false) << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(442,'W')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(336)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(924,'W')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(729,'C')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<tree.ceilingEntry(569) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(802)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(156,'D')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(729)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 << " "; print_char_vector(tree.subMap(153,303));std::cout << std::endl;
std::cout<<"Line no " << 120 <<  " " <<(tree.update(235,'L')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<tree.floorEntry(93) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 << " "; print_char_vector(tree.subMap(235,569));std::cout << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(72,'D')==false) << std::endl;
std::cout<<"Line no " << 126 <<  " " <<(tree.update(964,'Z')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(623,'J')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(131)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 << " "; print_char_vector(tree.subMap(442,964));std::cout << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(493,'R')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(442)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
