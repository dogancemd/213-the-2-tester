#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(791,'X')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(529,'F')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(744,'A')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(986,'N')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(827,'D')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(455,'E')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(868,'E')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(62,'N')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(39,'X')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(453,'K')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(3,'R')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(703,'X')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(602,'I')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(841,'S')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(817,'B')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(418,'O')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(777,'W')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(281,'D')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(863,'A')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(996,'N')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(433,'G')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(66,'Q')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(997,'Q')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(780,'F')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(672,'G')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(856,'G')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(151,'P')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(265,'R')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(506,'B')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(24,'U')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(3)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.get(827) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(868)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(476,'S')==true) << std::endl;
std::cout<<"Line no " << 39 <<  " " <<(tree.update(981,'O')==true) << std::endl;
std::cout<<"Line no " << 40 <<  " " <<(tree.update(417,'N')==false) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<tree.floorEntry(62) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(841)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.get(986) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(374,'J')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 << " "; print_char_vector(tree.subMap(66,981));std::cout << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.get(996) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(245,'W')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(791)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.ceilingEntry(997) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(62)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(245)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 << " "; print_char_vector(tree.subMap(418,986));std::cout << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(17,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.floorEntry(281) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(455)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(967,'X')==true) << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(547,'R')==true) << std::endl;
std::cout<<"Line no " << 61 <<  " " <<(tree.update(888,'H')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(986)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(734,'A')==true) << std::endl;
std::cout<<"Line no " << 66 <<  " " <<(tree.update(443,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(291)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(319,'S')==false) << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(707,'B')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<tree.ceilingEntry(547) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(401,'E')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(265)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(160,'X')==false) << std::endl;
std::cout<<"Line no " << 76 << " "; print_char_vector(tree.subMap(281,744));std::cout << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(780)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(744,817));std::cout << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(529)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(278,'C')==true) << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<tree.get(744) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(581,'V')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(453)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(365,'L')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(863)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(947,'E')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(777)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(339,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(374)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(339,703));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(260,'N')==true) << std::endl;
std::cout<<"Line no " << 98 <<  " " <<(tree.update(646,'U')==true) << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(752,'J')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(67,'P')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(443)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.ceilingEntry(339) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(804,'T')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(947)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.ceilingEntry(581) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(418)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(827)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 << " "; print_char_vector(tree.subMap(734,888));std::cout << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(346,'H')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.ceilingEntry(476) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(707)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(743,'L')==false) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(582,'W')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(672)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(365)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(433)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(85,'N')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(287,'L')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(547)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(888)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(913,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(752)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
