#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
std::cout << (a->remove(412)) << std::endl;
std::cout << (b->remove(72)) << std::endl;
std::cout << (a->remove(266)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
ScapegoatTree<int> *d=new ScapegoatTree<int>(*b);
std::cout << (c->remove(7)) << std::endl;
*d=*c;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
*e=*d;
b->printPretty();
std::cout << (a->insert(194)) << std::endl;
c->printPretty();
std::cout << (e->remove(231)) << std::endl;
*b=*e;
std::cout << (b->remove(70)) << std::endl;
*c=*d;
b->printPretty();
e->printPretty();
std::cout << (a->insert(194)) << std::endl;
*b=*b;
std::cout << (b->remove(116)) << std::endl;
std::cout << (d->insert(119)) << std::endl;
*b=*d;
*a=*b;
std::cout << (e->remove(343)) << std::endl;
std::cout << (b->remove(119)) << std::endl;
std::cout << (a->insert(119)) << std::endl;
std::cout << (a->insert(61)) << std::endl;
b->printPretty();
*d=*b;
std::cout << (a->remove(324)) << std::endl;
std::cout << (b->insert(256)) << std::endl;
a->printPretty();
std::cout << (a->insert(451)) << std::endl;
std::cout << (c->remove(313)) << std::endl;
*a=*a;
std::cout << (b->remove(256)) << std::endl;
c->printPretty();
a->printPretty();
*e=*c;
std::cout << (b->remove(141)) << std::endl;
e->printPretty();
std::cout << (a->remove(306)) << std::endl;
std::cout << (a->remove(61)) << std::endl;
std::cout << (e->remove(264)) << std::endl;
c->printPretty();
*b=*c;
std::cout << (d->insert(153)) << std::endl;
std::cout << (d->insert(203)) << std::endl;
*b=*a;
std::cout << (e->insert(220)) << std::endl;
*d=*d;
c->printPretty();
c->printPretty();
std::cout << (d->insert(38)) << std::endl;
std::cout << (e->insert(191)) << std::endl;
std::cout << (b->insert(378)) << std::endl;
std::cout << (e->remove(191)) << std::endl;
std::cout << (a->remove(167)) << std::endl;
std::cout << (e->insert(202)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (b->remove(451)) << std::endl;
*b=*b;
std::cout << (b->insert(425)) << std::endl;
std::cout << (e->remove(202)) << std::endl;
std::cout << (b->remove(425)) << std::endl;
std::cout << (e->remove(137)) << std::endl;
std::cout << (d->insert(203)) << std::endl;
std::cout << (a->remove(426)) << std::endl;
std::cout << (b->insert(205)) << std::endl;
a->printPretty();
std::cout << (a->remove(119)) << std::endl;
std::cout << (a->remove(451)) << std::endl;
std::cout << (e->remove(220)) << std::endl;
*e=*a;
b->printPretty();
std::cout << (b->insert(174)) << std::endl;
std::cout << (b->insert(344)) << std::endl;
b->printPretty();
e->printPretty();
std::cout << (d->remove(468)) << std::endl;
d->printPretty();
std::cout << (e->insert(148)) << std::endl;
*c=*c;
std::cout << (e->insert(369)) << std::endl;
std::cout << (e->remove(451)) << std::endl;
std::cout << (a->remove(460)) << std::endl;
std::cout << (e->remove(369)) << std::endl;
std::cout << (e->insert(148)) << std::endl;
std::cout << (b->insert(105)) << std::endl;
std::cout << (e->remove(148)) << std::endl;
std::cout << (d->remove(124)) << std::endl;
std::cout << (e->remove(493)) << std::endl;
*e=*e;
std::cout << (d->remove(312)) << std::endl;
*c=*e;
b->printPretty();
c->printPretty();
*e=*b;
std::cout << (d->insert(38)) << std::endl;
std::cout << (b->remove(174)) << std::endl;
std::cout << (e->insert(139)) << std::endl;
*e=*d;
std::cout << (d->insert(203)) << std::endl;
std::cout << (d->insert(153)) << std::endl;
std::cout << (d->insert(274)) << std::endl;
std::cout << (b->insert(390)) << std::endl;
*d=*e;
std::cout << (e->insert(153)) << std::endl;
std::cout << (e->insert(309)) << std::endl;
std::cout << (a->insert(255)) << std::endl;
std::cout << (a->insert(373)) << std::endl;
*d=*b;
std::cout << (d->remove(205)) << std::endl;
std::cout << (d->insert(344)) << std::endl;
std::cout << (a->insert(139)) << std::endl;
std::cout << (a->remove(255)) << std::endl;
std::cout << (e->remove(38)) << std::endl;
*a=*e;
c->printPretty();
std::cout << (a->insert(35)) << std::endl;
std::cout << (c->insert(261)) << std::endl;
std::cout << (d->insert(326)) << std::endl;
std::cout << (d->insert(344)) << std::endl;
std::cout << (e->remove(309)) << std::endl;
std::cout << (d->insert(403)) << std::endl;
std::cout << (d->remove(119)) << std::endl;
std::cout << (e->insert(153)) << std::endl;
std::cout << (b->remove(378)) << std::endl;
*a=*a;
std::cout << (b->remove(142)) << std::endl;
d->printPretty();
std::cout << (a->remove(35)) << std::endl;
std::cout << (c->insert(261)) << std::endl;
std::cout << (c->insert(249)) << std::endl;
e->printPretty();
*b=*c;
e->printPretty();
*e=*c;
std::cout << (e->insert(261)) << std::endl;
*a=*c;
std::cout << (b->remove(125)) << std::endl;
std::cout << (c->remove(249)) << std::endl;
std::cout << (b->insert(53)) << std::endl;
std::cout << (e->insert(89)) << std::endl;
e->printPretty();
std::cout << (d->insert(326)) << std::endl;
d->printPretty();
std::cout << (b->remove(249)) << std::endl;
std::cout << (c->remove(261)) << std::endl;
e->printPretty();
std::cout << (a->remove(330)) << std::endl;
std::cout << (e->insert(261)) << std::endl;
*a=*b;
c->printPretty();
std::cout << (b->remove(6)) << std::endl;
*a=*e;
std::cout << (b->remove(261)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (a->remove(270)) << std::endl;
std::cout << (a->insert(261)) << std::endl;
std::cout << (e->remove(142)) << std::endl;
*b=*d;
a->printPretty();
std::cout << (b->remove(344)) << std::endl;
std::cout << (d->remove(378)) << std::endl;
std::cout << (e->insert(198)) << std::endl;
*d=*a;
std::cout << (c->remove(120)) << std::endl;
std::cout << (b->remove(200)) << std::endl;
c->printPretty();
std::cout << (a->insert(261)) << std::endl;
d->printPretty();
std::cout << (d->insert(89)) << std::endl;
*e=*a;
a->printPretty();
std::cout << (c->remove(128)) << std::endl;
std::cout << (d->remove(354)) << std::endl;
std::cout << (b->insert(105)) << std::endl;
std::cout << (d->insert(259)) << std::endl;
std::cout << (a->remove(249)) << std::endl;
*b=*e;
std::cout << (e->remove(249)) << std::endl;
std::cout << (e->remove(253)) << std::endl;
std::cout << (e->remove(89)) << std::endl;
a->printPretty();
std::cout << (d->remove(249)) << std::endl;
d->printPretty();
*b=*a;
*d=*d;
std::cout << (c->insert(348)) << std::endl;
std::cout << (c->remove(131)) << std::endl;
e->printPretty();
std::cout << (b->remove(261)) << std::endl;
*e=*e;
std::cout << (b->remove(55)) << std::endl;
std::cout << (d->insert(467)) << std::endl;
std::cout << (d->insert(261)) << std::endl;
std::cout << (b->insert(371)) << std::endl;
std::cout << (b->insert(492)) << std::endl;
std::cout << (e->remove(261)) << std::endl;
*c=*b;
b->printPretty();
std::cout << (b->remove(455)) << std::endl;
std::cout << (b->remove(330)) << std::endl;
std::cout << (c->remove(110)) << std::endl;
*a=*b;
e->printPretty();
*a=*c;
*e=*d;
std::cout << (d->remove(261)) << std::endl;
std::cout << (e->insert(36)) << std::endl;
*d=*a;
std::cout << (c->insert(371)) << std::endl;
std::cout << (c->remove(117)) << std::endl;
std::cout << (a->remove(89)) << std::endl;
std::cout << (d->insert(371)) << std::endl;
std::cout << (a->insert(492)) << std::endl;
std::cout << (a->remove(495)) << std::endl;
b->printPretty();
*d=*d;
d->printPretty();
c->printPretty();
std::cout << (d->insert(330)) << std::endl;
std::cout << (b->insert(240)) << std::endl;
a->printPretty();
std::cout << (e->remove(400)) << std::endl;
*d=*a;
*b=*d;
std::cout << (a->insert(492)) << std::endl;
*d=*a;
*d=*e;
std::cout << (b->remove(7)) << std::endl;
std::cout << (c->remove(274)) << std::endl;
std::cout << (a->remove(390)) << std::endl;
a->printPretty();
std::cout << (c->remove(371)) << std::endl;
std::cout << (e->insert(89)) << std::endl;
std::cout << (d->remove(25)) << std::endl;
std::cout << (c->insert(71)) << std::endl;
*c=*c;
std::cout << (d->insert(216)) << std::endl;
*d=*c;
std::cout << (c->remove(71)) << std::endl;
std::cout << (c->remove(31)) << std::endl;
std::cout << (a->remove(453)) << std::endl;
std::cout << (a->insert(480)) << std::endl;
std::cout << (c->insert(492)) << std::endl;
*e=*e;
std::cout << (c->remove(21)) << std::endl;
std::cout << (a->insert(492)) << std::endl;
d->printPretty();
std::cout << (c->insert(89)) << std::endl;
*c=*b;
std::cout << (c->insert(421)) << std::endl;
d->printPretty();
std::cout << (a->insert(492)) << std::endl;
std::cout << (d->remove(89)) << std::endl;
std::cout << (e->insert(275)) << std::endl;
std::cout << (c->insert(56)) << std::endl;
std::cout << (e->remove(71)) << std::endl;
*a=*c;
std::cout << (a->remove(58)) << std::endl;
std::cout << (a->insert(304)) << std::endl;
std::cout << (e->remove(143)) << std::endl;
std::cout << (a->remove(56)) << std::endl;
std::cout << (e->insert(38)) << std::endl;
std::cout << (e->insert(259)) << std::endl;
std::cout << (b->insert(362)) << std::endl;
a->printPretty();
*d=*b;
std::cout << (e->remove(89)) << std::endl;
d->printPretty();
std::cout << (e->insert(36)) << std::endl;
std::cout << (b->remove(36)) << std::endl;
std::cout << (b->insert(59)) << std::endl;
std::cout << (a->remove(371)) << std::endl;
a->printPretty();
std::cout << (a->remove(492)) << std::endl;
b->printPretty();
*b=*a;
std::cout << (d->insert(371)) << std::endl;
std::cout << (e->remove(377)) << std::endl;
e->printPretty();
std::cout << (e->insert(36)) << std::endl;
a->printPretty();
std::cout << (c->remove(116)) << std::endl;
std::cout << (b->insert(304)) << std::endl;
std::cout << (a->remove(166)) << std::endl;
std::cout << (e->insert(225)) << std::endl;
std::cout << (a->remove(421)) << std::endl;
std::cout << (e->insert(309)) << std::endl;
std::cout << (b->remove(441)) << std::endl;
std::cout << (c->remove(160)) << std::endl;
std::cout << (c->insert(225)) << std::endl;
std::cout << (d->insert(26)) << std::endl;
std::cout << (c->remove(371)) << std::endl;
std::cout << (a->insert(304)) << std::endl;
std::cout << (c->remove(472)) << std::endl;
std::cout << (c->remove(421)) << std::endl;
std::cout << (a->remove(395)) << std::endl;
std::cout << (a->remove(336)) << std::endl;
c->printPretty();
std::cout << (e->insert(177)) << std::endl;
std::cout << (d->remove(362)) << std::endl;
std::cout << (a->insert(320)) << std::endl;
std::cout << (a->insert(25)) << std::endl;
std::cout << (b->insert(304)) << std::endl;
*c=*e;
e->printPretty();
*e=*e;
*b=*a;
std::cout << (c->insert(225)) << std::endl;
std::cout << (e->remove(52)) << std::endl;
std::cout << (e->remove(225)) << std::endl;
std::cout << (d->remove(371)) << std::endl;
std::cout << (a->insert(320)) << std::endl;
std::cout << (c->remove(8)) << std::endl;
e->printPretty();
std::cout << (c->remove(259)) << std::endl;
c->printPretty();
std::cout << (c->remove(177)) << std::endl;
std::cout << (c->remove(275)) << std::endl;
e->printPretty();
std::cout << (e->insert(38)) << std::endl;
std::cout << (a->insert(304)) << std::endl;
std::cout << (c->insert(261)) << std::endl;
std::cout << (d->insert(191)) << std::endl;
std::cout << (c->remove(225)) << std::endl;
std::cout << (e->remove(250)) << std::endl;
std::cout << (a->insert(25)) << std::endl;
a->printPretty();
e->printPretty();
*a=*b;
std::cout << (a->insert(320)) << std::endl;
d->printPretty();
std::cout << (d->remove(191)) << std::endl;
d->printPretty();
std::cout << (e->insert(311)) << std::endl;
std::cout << (e->insert(467)) << std::endl;
std::cout << (a->insert(362)) << std::endl;
std::cout << (c->insert(12)) << std::endl;
std::cout << (a->insert(362)) << std::endl;
std::cout << (a->insert(286)) << std::endl;
std::cout << (b->insert(25)) << std::endl;
std::cout << (b->remove(304)) << std::endl;
std::cout << (c->insert(93)) << std::endl;
*a=*e;
std::cout << (b->insert(25)) << std::endl;
std::cout << (e->remove(254)) << std::endl;
std::cout << (a->insert(309)) << std::endl;
std::cout << (c->insert(121)) << std::endl;
std::cout << (c->remove(467)) << std::endl;
std::cout << (e->insert(64)) << std::endl;
*e=*c;
std::cout << (c->insert(36)) << std::endl;
std::cout << (b->insert(183)) << std::endl;
std::cout << (b->insert(320)) << std::endl;
std::cout << (e->remove(89)) << std::endl;
std::cout << (a->insert(131)) << std::endl;
std::cout << (a->insert(311)) << std::endl;
std::cout << (e->remove(328)) << std::endl;
std::cout << (a->remove(7)) << std::endl;
std::cout << (e->remove(487)) << std::endl;
std::cout << (e->remove(38)) << std::endl;
std::cout << (a->remove(311)) << std::endl;
std::cout << (d->insert(434)) << std::endl;
*c=*b;
std::cout << (b->insert(25)) << std::endl;
std::cout << (a->insert(137)) << std::endl;
std::cout << (c->remove(95)) << std::endl;
std::cout << (e->remove(287)) << std::endl;
std::cout << (d->remove(84)) << std::endl;
std::cout << (d->remove(319)) << std::endl;
std::cout << (c->insert(485)) << std::endl;
std::cout << (a->remove(483)) << std::endl;
std::cout << (c->remove(155)) << std::endl;
std::cout << (a->insert(261)) << std::endl;
a->printPretty();
*e=*e;
std::cout << (b->insert(139)) << std::endl;
*d=*c;
std::cout << (d->remove(324)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (e->remove(121)) << std::endl;
std::cout << (b->insert(320)) << std::endl;
*d=*d;
*b=*d;
std::cout << (c->remove(25)) << std::endl;
std::cout << (d->remove(167)) << std::endl;
std::cout << (c->remove(183)) << std::endl;
a->printPretty();
*b=*e;
std::cout << (e->insert(36)) << std::endl;
std::cout << (e->insert(12)) << std::endl;
std::cout << (a->remove(166)) << std::endl;
std::cout << (a->remove(460)) << std::endl;
std::cout << (c->remove(356)) << std::endl;
std::cout << (e->insert(402)) << std::endl;
c->printPretty();
std::cout << (b->insert(261)) << std::endl;
std::cout << (d->remove(320)) << std::endl;
std::cout << (a->insert(58)) << std::endl;
std::cout << (d->insert(25)) << std::endl;
std::cout << (d->remove(485)) << std::endl;
std::cout << (d->remove(183)) << std::endl;
std::cout << (d->remove(25)) << std::endl;
std::cout << (b->remove(137)) << std::endl;
std::cout << (a->remove(214)) << std::endl;
*e=*a;
std::cout << (d->insert(390)) << std::endl;
std::cout << (d->remove(390)) << std::endl;
*d=*a;
b->printPretty();
*d=*c;
std::cout << (d->insert(333)) << std::endl;
std::cout << (c->insert(485)) << std::endl;
std::cout << (e->insert(137)) << std::endl;
std::cout << (e->remove(467)) << std::endl;
*a=*c;
std::cout << (e->remove(338)) << std::endl;
*c=*c;
c->printPretty();
*d=*d;
std::cout << (a->remove(13)) << std::endl;
std::cout << (b->remove(406)) << std::endl;
a->printPretty();
*c=*b;
std::cout << (c->remove(12)) << std::endl;
std::cout << (c->remove(309)) << std::endl;
*d=*d;
std::cout << (e->remove(58)) << std::endl;
*d=*d;
std::cout << (e->insert(131)) << std::endl;
std::cout << (b->remove(463)) << std::endl;
std::cout << (d->remove(320)) << std::endl;
std::cout << (d->remove(333)) << std::endl;
std::cout << (c->remove(261)) << std::endl;
std::cout << (e->insert(309)) << std::endl;
*a=*b;
std::cout << (a->insert(93)) << std::endl;
d->printPretty();
std::cout << (e->remove(280)) << std::endl;
std::cout << (e->insert(290)) << std::endl;
std::cout << (d->insert(402)) << std::endl;
*c=*e;
std::cout << (e->remove(405)) << std::endl;
d->printPretty();
std::cout << (a->remove(122)) << std::endl;
*d=*b;
*a=*d;
*d=*b;
b->printPretty();
e->printPretty();
std::cout << (d->insert(12)) << std::endl;
std::cout << (b->remove(36)) << std::endl;
std::cout << (e->insert(177)) << std::endl;
std::cout << (a->insert(229)) << std::endl;
*e=*d;
std::cout << (a->remove(229)) << std::endl;
std::cout << (c->insert(370)) << std::endl;
std::cout << (e->remove(36)) << std::endl;
std::cout << (d->insert(309)) << std::endl;
*a=*c;
d->printPretty();
std::cout << (b->remove(12)) << std::endl;
*b=*a;
std::cout << (e->remove(93)) << std::endl;
std::cout << (e->remove(269)) << std::endl;
std::cout << (b->insert(290)) << std::endl;
std::cout << (a->remove(177)) << std::endl;
std::cout << (c->remove(309)) << std::endl;
std::cout << (e->remove(111)) << std::endl;
std::cout << (c->insert(434)) << std::endl;
std::cout << (d->remove(31)) << std::endl;
std::cout << (d->remove(36)) << std::endl;
std::cout << (a->remove(211)) << std::endl;
std::cout << (d->remove(456)) << std::endl;
std::cout << (a->remove(131)) << std::endl;
std::cout << (a->insert(259)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (e->insert(309)) << std::endl;
std::cout << (e->insert(309)) << std::endl;
std::cout << (b->remove(199)) << std::endl;
std::cout << (e->remove(261)) << std::endl;
std::cout << (d->insert(93)) << std::endl;
std::cout << (e->remove(350)) << std::endl;
a->printPretty();
*b=*d;
*a=*e;
std::cout << (c->remove(177)) << std::endl;
std::cout << (c->remove(259)) << std::endl;
std::cout << (d->insert(93)) << std::endl;
b->printPretty();
std::cout << (c->insert(434)) << std::endl;
d->printPretty();
std::cout << (a->remove(411)) << std::endl;
std::cout << (e->insert(309)) << std::endl;
std::cout << (d->remove(207)) << std::endl;
*b=*d;
std::cout << (b->remove(261)) << std::endl;
std::cout << (b->insert(146)) << std::endl;
std::cout << (c->remove(261)) << std::endl;
std::cout << (c->remove(39)) << std::endl;
std::cout << (a->insert(309)) << std::endl;
std::cout << (e->insert(300)) << std::endl;
std::cout << (c->remove(46)) << std::endl;
*a=*b;
std::cout << (d->remove(408)) << std::endl;
std::cout << (c->remove(131)) << std::endl;
*d=*b;
std::cout << (a->insert(329)) << std::endl;
std::cout << (e->insert(463)) << std::endl;
std::cout << (b->insert(495)) << std::endl;
b->printPretty();
std::cout << (c->insert(479)) << std::endl;
std::cout << (e->remove(110)) << std::endl;
std::cout << (b->remove(368)) << std::endl;
std::cout << (c->insert(370)) << std::endl;
std::cout << (e->remove(12)) << std::endl;
std::cout << (b->remove(284)) << std::endl;
std::cout << (b->insert(496)) << std::endl;
std::cout << (e->insert(309)) << std::endl;
std::cout << (b->insert(93)) << std::endl;
*d=*e;
std::cout << (d->insert(300)) << std::endl;
*e=*e;
std::cout << (d->remove(463)) << std::endl;
std::cout << (b->remove(496)) << std::endl;
std::cout << (c->remove(436)) << std::endl;
std::cout << (a->remove(284)) << std::endl;
std::cout << (e->remove(370)) << std::endl;
std::cout << (a->remove(93)) << std::endl;
std::cout << (d->insert(269)) << std::endl;
*e=*d;
std::cout << (b->insert(146)) << std::endl;
std::cout << (e->remove(144)) << std::endl;
std::cout << (b->remove(309)) << std::endl;
*c=*c;
d->printPretty();
std::cout << (d->remove(309)) << std::endl;
std::cout << (e->insert(109)) << std::endl;
std::cout << (d->remove(300)) << std::endl;
*b=*a;
*a=*c;
std::cout << (a->insert(38)) << std::endl;
*c=*c;
e->printPretty();
std::cout << (c->insert(36)) << std::endl;
*a=*d;
std::cout << (b->remove(146)) << std::endl;
std::cout << (c->remove(479)) << std::endl;
b->printPretty();
std::cout << (e->insert(14)) << std::endl;
e->printPretty();
std::cout << (d->remove(335)) << std::endl;
d->printPretty();
*a=*a;
std::cout << (a->remove(269)) << std::endl;
std::cout << (e->remove(14)) << std::endl;
std::cout << (a->remove(88)) << std::endl;
*c=*d;
a->printPretty();
std::cout << (c->remove(57)) << std::endl;
a->printPretty();
std::cout << (c->insert(269)) << std::endl;
*a=*c;
std::cout << (c->remove(419)) << std::endl;
std::cout << (d->remove(269)) << std::endl;
std::cout << (a->insert(300)) << std::endl;
*c=*c;
std::cout << (a->insert(71)) << std::endl;
*c=*b;
std::cout << (b->remove(309)) << std::endl;
std::cout << (c->remove(12)) << std::endl;
std::cout << (b->insert(295)) << std::endl;
std::cout << (a->remove(306)) << std::endl;
*c=*e;
std::cout << (a->remove(196)) << std::endl;
std::cout << (c->insert(276)) << std::endl;
*d=*c;
std::cout << (d->remove(402)) << std::endl;
std::cout << (b->remove(261)) << std::endl;
std::cout << (a->remove(216)) << std::endl;
*a=*c;
*b=*e;
std::cout << (b->insert(368)) << std::endl;
std::cout << (e->insert(404)) << std::endl;
std::cout << (b->remove(368)) << std::endl;
std::cout << (e->remove(109)) << std::endl;
std::cout << (b->insert(309)) << std::endl;
std::cout << (c->remove(249)) << std::endl;
std::cout << (c->remove(109)) << std::endl;
d->printPretty();
std::cout << (c->remove(448)) << std::endl;
std::cout << (b->remove(165)) << std::endl;
e->printPretty();
std::cout << (c->remove(276)) << std::endl;
c->printPretty();
std::cout << (c->remove(269)) << std::endl;
*c=*b;
std::cout << (c->remove(57)) << std::endl;
std::cout << (e->insert(309)) << std::endl;
e->printPretty();
std::cout << (a->insert(452)) << std::endl;
std::cout << (d->insert(300)) << std::endl;
std::cout << (d->remove(269)) << std::endl;
std::cout << (a->remove(296)) << std::endl;
std::cout << (a->remove(402)) << std::endl;
std::cout << (b->remove(269)) << std::endl;
std::cout << (c->insert(397)) << std::endl;
c->printPretty();
std::cout << (e->remove(172)) << std::endl;
std::cout << (b->insert(309)) << std::endl;
b->printPretty();
std::cout << (b->remove(309)) << std::endl;
std::cout << (b->remove(282)) << std::endl;
d->printPretty();
std::cout << (e->insert(300)) << std::endl;
*d=*a;
std::cout << (a->remove(300)) << std::endl;
std::cout << (a->insert(465)) << std::endl;
std::cout << (c->remove(300)) << std::endl;
std::cout << (d->insert(300)) << std::endl;
std::cout << (d->insert(109)) << std::endl;
e->printPretty();
std::cout << (e->insert(309)) << std::endl;
*a=*e;
std::cout << (d->remove(202)) << std::endl;
std::cout << (d->remove(109)) << std::endl;
std::cout << (e->insert(300)) << std::endl;
std::cout << (c->remove(269)) << std::endl;
std::cout << (c->insert(300)) << std::endl;
std::cout << (b->remove(300)) << std::endl;
std::cout << (a->remove(404)) << std::endl;
b->printPretty();
*d=*a;
std::cout << (a->remove(309)) << std::endl;
std::cout << (a->remove(474)) << std::endl;
std::cout << (a->insert(300)) << std::endl;
b->printPretty();
*e=*b;
*a=*a;
e->printPretty();
std::cout << (e->insert(309)) << std::endl;
std::cout << (b->insert(309)) << std::endl;
std::cout << (e->insert(109)) << std::endl;
std::cout << (b->remove(300)) << std::endl;
std::cout << (c->insert(281)) << std::endl;
*e=*d;
std::cout << (c->remove(134)) << std::endl;
std::cout << (a->insert(471)) << std::endl;
std::cout << (c->remove(194)) << std::endl;
d->printPretty();
*b=*a;
std::cout << (b->remove(471)) << std::endl;
std::cout << (a->insert(262)) << std::endl;
std::cout << (a->insert(262)) << std::endl;
std::cout << (b->insert(300)) << std::endl;
std::cout << (b->insert(155)) << std::endl;
std::cout << (c->remove(451)) << std::endl;
*e=*c;
*c=*b;
std::cout << (e->remove(283)) << std::endl;
std::cout << (e->insert(109)) << std::endl;
std::cout << (b->remove(155)) << std::endl;
*b=*d;
c->printPretty();
std::cout << (e->insert(309)) << std::endl;
std::cout << (c->insert(178)) << std::endl;
std::cout << (c->remove(334)) << std::endl;
std::cout << (c->insert(431)) << std::endl;
std::cout << (b->remove(370)) << std::endl;
std::cout << (c->remove(431)) << std::endl;
std::cout << (c->remove(481)) << std::endl;
*d=*b;
c->printPretty();
std::cout << (a->remove(104)) << std::endl;
std::cout << (e->insert(109)) << std::endl;
std::cout << (e->remove(109)) << std::endl;
std::cout << (c->insert(103)) << std::endl;
*d=*a;
std::cout << (e->insert(281)) << std::endl;
std::cout << (a->remove(477)) << std::endl;
std::cout << (c->remove(76)) << std::endl;
std::cout << (d->insert(396)) << std::endl;
std::cout << (b->insert(352)) << std::endl;
std::cout << (b->insert(476)) << std::endl;
std::cout << (a->insert(452)) << std::endl;
std::cout << (b->insert(352)) << std::endl;
std::cout << (c->insert(300)) << std::endl;
*a=*b;
std::cout << (c->insert(155)) << std::endl;
std::cout << (a->remove(300)) << std::endl;
*b=*a;
std::cout << (c->remove(331)) << std::endl;
std::cout << (e->insert(266)) << std::endl;
std::cout << (c->insert(32)) << std::endl;
std::cout << (b->insert(205)) << std::endl;
std::cout << (e->insert(397)) << std::endl;
std::cout << (d->insert(471)) << std::endl;
std::cout << (c->insert(300)) << std::endl;
std::cout << (a->remove(229)) << std::endl;
std::cout << (c->remove(300)) << std::endl;
std::cout << (d->insert(349)) << std::endl;
std::cout << (c->remove(178)) << std::endl;
std::cout << (a->insert(476)) << std::endl;
std::cout << (b->insert(269)) << std::endl;
std::cout << (e->remove(300)) << std::endl;
std::cout << (d->remove(480)) << std::endl;
std::cout << (a->remove(294)) << std::endl;
std::cout << (d->remove(497)) << std::endl;
std::cout << (d->remove(318)) << std::endl;
e->printPretty();
std::cout << (c->insert(93)) << std::endl;
std::cout << (b->insert(269)) << std::endl;
b->printPretty();
e->printPretty();
return 0;
}