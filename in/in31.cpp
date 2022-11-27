#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->remove(291)) << std::endl;
a->printPretty();
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
*b=*a;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
ScapegoatTree<int> *d=new ScapegoatTree<int>;
std::cout << (d->remove(463)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*a);
*b=*c;
std::cout << (b->remove(103)) << std::endl;
std::cout << (d->insert(113)) << std::endl;
std::cout << (a->insert(373)) << std::endl;
std::cout << (a->insert(24)) << std::endl;
*e=*e;
b->printPretty();
c->printPretty();
a->printPretty();
std::cout << (a->insert(24)) << std::endl;
std::cout << (a->remove(24)) << std::endl;
std::cout << (c->insert(413)) << std::endl;
std::cout << (e->remove(457)) << std::endl;
std::cout << (c->remove(34)) << std::endl;
std::cout << (d->insert(113)) << std::endl;
d->printPretty();
std::cout << (d->remove(42)) << std::endl;
std::cout << (e->insert(192)) << std::endl;
std::cout << (e->insert(136)) << std::endl;
*c=*d;
std::cout << (e->remove(320)) << std::endl;
std::cout << (a->remove(447)) << std::endl;
b->printPretty();
std::cout << (a->remove(49)) << std::endl;
std::cout << (b->insert(33)) << std::endl;
a->printPretty();
*e=*c;
std::cout << (a->insert(319)) << std::endl;
std::cout << (a->remove(373)) << std::endl;
std::cout << (d->insert(216)) << std::endl;
std::cout << (c->insert(113)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (b->insert(33)) << std::endl;
std::cout << (a->remove(453)) << std::endl;
std::cout << (b->insert(33)) << std::endl;
*d=*d;
std::cout << (a->insert(319)) << std::endl;
std::cout << (a->insert(185)) << std::endl;
std::cout << (a->insert(70)) << std::endl;
std::cout << (e->remove(113)) << std::endl;
c->printPretty();
std::cout << (e->remove(24)) << std::endl;
std::cout << (c->insert(260)) << std::endl;
*b=*e;
std::cout << (b->insert(454)) << std::endl;
std::cout << (c->insert(498)) << std::endl;
std::cout << (a->remove(319)) << std::endl;
std::cout << (a->remove(90)) << std::endl;
*c=*d;
std::cout << (a->insert(119)) << std::endl;
std::cout << (d->insert(113)) << std::endl;
std::cout << (d->insert(113)) << std::endl;
e->printPretty();
std::cout << (d->insert(356)) << std::endl;
std::cout << (d->insert(114)) << std::endl;
*a=*d;
e->printPretty();
std::cout << (d->insert(114)) << std::endl;
std::cout << (c->remove(319)) << std::endl;
std::cout << (c->remove(143)) << std::endl;
std::cout << (c->insert(113)) << std::endl;
std::cout << (d->remove(264)) << std::endl;
*a=*e;
d->printPretty();
c->printPretty();
std::cout << (b->insert(454)) << std::endl;
std::cout << (b->insert(407)) << std::endl;
std::cout << (b->insert(333)) << std::endl;
std::cout << (b->remove(162)) << std::endl;
d->printPretty();
d->printPretty();
*e=*b;
std::cout << (e->remove(407)) << std::endl;
std::cout << (d->remove(332)) << std::endl;
*e=*c;
*a=*e;
std::cout << (b->remove(333)) << std::endl;
std::cout << (c->remove(270)) << std::endl;
std::cout << (e->insert(346)) << std::endl;
std::cout << (e->insert(216)) << std::endl;
std::cout << (e->insert(345)) << std::endl;
std::cout << (d->remove(424)) << std::endl;
*a=*e;
std::cout << (d->remove(66)) << std::endl;
std::cout << (a->remove(360)) << std::endl;
std::cout << (d->remove(113)) << std::endl;
std::cout << (e->insert(216)) << std::endl;
d->printPretty();
std::cout << (c->insert(39)) << std::endl;
a->printPretty();
std::cout << (a->remove(391)) << std::endl;
std::cout << (d->insert(356)) << std::endl;
std::cout << (d->insert(438)) << std::endl;
std::cout << (d->remove(101)) << std::endl;
std::cout << (a->remove(189)) << std::endl;
*b=*a;
std::cout << (a->remove(262)) << std::endl;
e->printPretty();
std::cout << (a->remove(113)) << std::endl;
*a=*d;
std::cout << (c->insert(428)) << std::endl;
*b=*c;
*d=*d;
std::cout << (d->remove(183)) << std::endl;
*d=*b;
std::cout << (a->insert(356)) << std::endl;
std::cout << (d->insert(97)) << std::endl;
a->printPretty();
std::cout << (e->remove(131)) << std::endl;
std::cout << (b->insert(175)) << std::endl;
std::cout << (e->insert(346)) << std::endl;
std::cout << (d->remove(39)) << std::endl;
*e=*c;
std::cout << (b->insert(149)) << std::endl;
std::cout << (e->insert(422)) << std::endl;
std::cout << (e->remove(428)) << std::endl;
std::cout << (e->insert(216)) << std::endl;
std::cout << (b->remove(199)) << std::endl;
*b=*b;
std::cout << (a->remove(401)) << std::endl;
std::cout << (b->insert(149)) << std::endl;
std::cout << (d->remove(97)) << std::endl;
std::cout << (e->remove(113)) << std::endl;
std::cout << (c->insert(346)) << std::endl;
d->printPretty();
*e=*c;
*d=*b;
*a=*e;
a->printPretty();
std::cout << (a->remove(113)) << std::endl;
std::cout << (e->insert(105)) << std::endl;
std::cout << (d->insert(124)) << std::endl;
*a=*c;
std::cout << (d->insert(113)) << std::endl;
d->printPretty();
*d=*a;
std::cout << (a->insert(39)) << std::endl;
std::cout << (c->insert(29)) << std::endl;
std::cout << (a->insert(379)) << std::endl;
std::cout << (c->remove(428)) << std::endl;
std::cout << (d->insert(120)) << std::endl;
std::cout << (e->insert(113)) << std::endl;
std::cout << (b->remove(175)) << std::endl;
*e=*d;
std::cout << (b->remove(428)) << std::endl;
*a=*c;
std::cout << (c->remove(113)) << std::endl;
std::cout << (c->remove(216)) << std::endl;
std::cout << (d->insert(396)) << std::endl;
std::cout << (e->remove(473)) << std::endl;
std::cout << (e->insert(39)) << std::endl;
b->printPretty();
std::cout << (e->remove(24)) << std::endl;
std::cout << (d->remove(344)) << std::endl;
*b=*b;
a->printPretty();
std::cout << (b->remove(414)) << std::endl;
std::cout << (b->insert(356)) << std::endl;
*e=*b;
std::cout << (e->insert(226)) << std::endl;
b->printPretty();
std::cout << (e->remove(39)) << std::endl;
c->printPretty();
std::cout << (a->insert(113)) << std::endl;
*c=*e;
std::cout << (c->remove(216)) << std::endl;
*c=*e;
std::cout << (c->insert(216)) << std::endl;
std::cout << (d->insert(346)) << std::endl;
*e=*a;
std::cout << (a->remove(113)) << std::endl;
*d=*d;
*b=*b;
std::cout << (b->remove(112)) << std::endl;
std::cout << (a->remove(216)) << std::endl;
std::cout << (c->remove(410)) << std::endl;
std::cout << (c->insert(149)) << std::endl;
*d=*d;
std::cout << (d->remove(421)) << std::endl;
*e=*a;
*a=*d;
d->printPretty();
std::cout << (e->remove(417)) << std::endl;
std::cout << (b->remove(130)) << std::endl;
*e=*c;
d->printPretty();
std::cout << (e->remove(444)) << std::endl;
std::cout << (a->remove(325)) << std::endl;
std::cout << (a->remove(9)) << std::endl;
std::cout << (a->remove(396)) << std::endl;
std::cout << (e->insert(300)) << std::endl;
*e=*a;
d->printPretty();
std::cout << (e->remove(113)) << std::endl;
b->printPretty();
std::cout << (c->insert(419)) << std::endl;
std::cout << (a->insert(39)) << std::endl;
std::cout << (d->insert(296)) << std::endl;
std::cout << (b->insert(334)) << std::endl;
std::cout << (d->remove(296)) << std::endl;
std::cout << (b->remove(428)) << std::endl;
std::cout << (c->remove(419)) << std::endl;
std::cout << (a->insert(216)) << std::endl;
std::cout << (d->remove(113)) << std::endl;
*e=*e;
std::cout << (d->insert(39)) << std::endl;
std::cout << (c->remove(283)) << std::endl;
std::cout << (e->remove(216)) << std::endl;
std::cout << (a->insert(165)) << std::endl;
*a=*c;
std::cout << (c->insert(334)) << std::endl;
b->printPretty();
std::cout << (b->insert(149)) << std::endl;
std::cout << (d->insert(493)) << std::endl;
std::cout << (c->remove(277)) << std::endl;
d->printPretty();
std::cout << (a->remove(216)) << std::endl;
*a=*a;
b->printPretty();
std::cout << (d->insert(67)) << std::endl;
std::cout << (c->insert(230)) << std::endl;
std::cout << (c->remove(106)) << std::endl;
std::cout << (a->insert(25)) << std::endl;
*b=*a;
std::cout << (e->remove(431)) << std::endl;
std::cout << (a->insert(113)) << std::endl;
std::cout << (e->insert(253)) << std::endl;
*e=*e;
std::cout << (d->insert(205)) << std::endl;
b->printPretty();
*e=*d;
std::cout << (a->insert(295)) << std::endl;
std::cout << (a->insert(25)) << std::endl;
std::cout << (b->remove(356)) << std::endl;
std::cout << (a->insert(65)) << std::endl;
std::cout << (d->insert(298)) << std::endl;
std::cout << (c->insert(149)) << std::endl;
*a=*e;
std::cout << (b->remove(268)) << std::endl;
std::cout << (b->remove(12)) << std::endl;
d->printPretty();
std::cout << (a->remove(120)) << std::endl;
std::cout << (e->remove(346)) << std::endl;
*a=*e;
std::cout << (d->remove(67)) << std::endl;
*a=*a;
std::cout << (b->insert(25)) << std::endl;
std::cout << (d->remove(339)) << std::endl;
std::cout << (c->insert(471)) << std::endl;
b->printPretty();
std::cout << (b->insert(149)) << std::endl;
std::cout << (a->insert(120)) << std::endl;
std::cout << (b->insert(149)) << std::endl;
std::cout << (c->remove(351)) << std::endl;
std::cout << (c->insert(113)) << std::endl;
*d=*c;
b->printPretty();
std::cout << (d->remove(330)) << std::endl;
std::cout << (b->remove(240)) << std::endl;
*c=*a;
std::cout << (c->insert(216)) << std::endl;
std::cout << (e->remove(216)) << std::endl;
*a=*d;
*e=*c;
std::cout << (a->remove(356)) << std::endl;
std::cout << (c->insert(37)) << std::endl;
c->printPretty();
std::cout << (a->insert(131)) << std::endl;
std::cout << (c->remove(83)) << std::endl;
*a=*b;
std::cout << (d->insert(226)) << std::endl;
std::cout << (d->insert(324)) << std::endl;
a->printPretty();
*a=*a;
std::cout << (e->remove(493)) << std::endl;
std::cout << (e->insert(39)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (c->insert(260)) << std::endl;
std::cout << (d->insert(226)) << std::endl;
e->printPretty();
std::cout << (e->insert(380)) << std::endl;
std::cout << (d->remove(378)) << std::endl;
*d=*b;
std::cout << (b->insert(349)) << std::endl;
*d=*a;
std::cout << (b->insert(349)) << std::endl;
std::cout << (c->insert(308)) << std::endl;
std::cout << (b->remove(205)) << std::endl;
std::cout << (a->remove(149)) << std::endl;
std::cout << (b->insert(25)) << std::endl;
std::cout << (b->insert(16)) << std::endl;
*d=*c;
e->printPretty();
std::cout << (e->remove(67)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (a->remove(138)) << std::endl;
a->printPretty();
std::cout << (a->remove(113)) << std::endl;
std::cout << (c->remove(216)) << std::endl;
c->printPretty();
std::cout << (e->remove(189)) << std::endl;
b->printPretty();
std::cout << (d->insert(493)) << std::endl;
std::cout << (b->remove(349)) << std::endl;
std::cout << (b->remove(25)) << std::endl;
std::cout << (d->remove(67)) << std::endl;
std::cout << (d->remove(205)) << std::endl;
*e=*c;
std::cout << (d->insert(387)) << std::endl;
c->printPretty();
std::cout << (a->insert(25)) << std::endl;
std::cout << (b->remove(296)) << std::endl;
std::cout << (d->insert(216)) << std::endl;
*e=*e;
*c=*b;
std::cout << (c->insert(226)) << std::endl;
std::cout << (a->insert(387)) << std::endl;
e->printPretty();
std::cout << (b->insert(113)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (d->remove(414)) << std::endl;
e->printPretty();
b->printPretty();
e->printPretty();
std::cout << (b->remove(149)) << std::endl;
e->printPretty();
*b=*c;
std::cout << (a->insert(135)) << std::endl;
std::cout << (e->remove(493)) << std::endl;
std::cout << (b->remove(226)) << std::endl;
std::cout << (a->remove(448)) << std::endl;
std::cout << (c->remove(465)) << std::endl;
std::cout << (b->remove(149)) << std::endl;
std::cout << (b->remove(16)) << std::endl;
std::cout << (d->remove(81)) << std::endl;
b->printPretty();
std::cout << (c->insert(16)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (d->remove(493)) << std::endl;
*e=*a;
std::cout << (b->insert(162)) << std::endl;
*d=*b;
std::cout << (c->insert(226)) << std::endl;
c->printPretty();
d->printPretty();
a->printPretty();
std::cout << (d->insert(162)) << std::endl;
std::cout << (b->remove(162)) << std::endl;
*a=*d;
std::cout << (a->insert(162)) << std::endl;
std::cout << (a->insert(162)) << std::endl;
std::cout << (c->insert(479)) << std::endl;
std::cout << (b->insert(113)) << std::endl;
std::cout << (c->insert(197)) << std::endl;
std::cout << (e->remove(473)) << std::endl;
std::cout << (e->remove(365)) << std::endl;
std::cout << (e->remove(124)) << std::endl;
std::cout << (a->remove(113)) << std::endl;
std::cout << (a->insert(162)) << std::endl;
std::cout << (d->insert(113)) << std::endl;
std::cout << (e->insert(201)) << std::endl;
std::cout << (a->remove(353)) << std::endl;
std::cout << (e->insert(387)) << std::endl;
*a=*d;
std::cout << (a->remove(113)) << std::endl;
b->printPretty();
std::cout << (d->remove(180)) << std::endl;
std::cout << (c->insert(51)) << std::endl;
std::cout << (e->insert(387)) << std::endl;
c->printPretty();
b->printPretty();
std::cout << (b->remove(113)) << std::endl;
std::cout << (a->remove(162)) << std::endl;
c->printPretty();
std::cout << (a->remove(343)) << std::endl;
e->printPretty();
std::cout << (c->insert(226)) << std::endl;
std::cout << (c->insert(16)) << std::endl;
std::cout << (c->remove(16)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (e->insert(387)) << std::endl;
std::cout << (b->insert(75)) << std::endl;
std::cout << (c->remove(149)) << std::endl;
std::cout << (e->remove(62)) << std::endl;
c->printPretty();
std::cout << (e->remove(90)) << std::endl;
std::cout << (a->remove(33)) << std::endl;
e->printPretty();
std::cout << (c->insert(479)) << std::endl;
*b=*a;
*e=*b;
std::cout << (c->insert(229)) << std::endl;
std::cout << (b->insert(216)) << std::endl;
c->printPretty();
std::cout << (b->remove(262)) << std::endl;
std::cout << (b->insert(365)) << std::endl;
std::cout << (c->remove(226)) << std::endl;
std::cout << (d->remove(257)) << std::endl;
e->printPretty();
*c=*c;
*e=*b;
std::cout << (d->remove(278)) << std::endl;
std::cout << (d->insert(113)) << std::endl;
std::cout << (d->insert(169)) << std::endl;
std::cout << (c->remove(113)) << std::endl;
std::cout << (b->insert(365)) << std::endl;
std::cout << (c->insert(140)) << std::endl;
std::cout << (e->remove(397)) << std::endl;
std::cout << (d->remove(44)) << std::endl;
std::cout << (d->remove(98)) << std::endl;
std::cout << (e->insert(216)) << std::endl;
std::cout << (d->insert(169)) << std::endl;
e->printPretty();
std::cout << (b->insert(85)) << std::endl;
*e=*a;
*c=*b;
std::cout << (e->insert(226)) << std::endl;
std::cout << (c->remove(216)) << std::endl;
std::cout << (b->insert(376)) << std::endl;
std::cout << (d->remove(113)) << std::endl;
*a=*c;
std::cout << (c->remove(347)) << std::endl;
std::cout << (c->remove(111)) << std::endl;
std::cout << (c->remove(46)) << std::endl;
std::cout << (c->remove(153)) << std::endl;
*e=*a;
d->printPretty();
*c=*d;
std::cout << (e->insert(336)) << std::endl;
std::cout << (c->remove(7)) << std::endl;
std::cout << (a->remove(239)) << std::endl;
d->printPretty();
std::cout << (d->insert(169)) << std::endl;
d->printPretty();
std::cout << (a->remove(365)) << std::endl;
std::cout << (c->insert(377)) << std::endl;
b->printPretty();
std::cout << (c->insert(341)) << std::endl;
std::cout << (d->remove(169)) << std::endl;
std::cout << (e->insert(85)) << std::endl;
std::cout << (b->remove(77)) << std::endl;
b->printPretty();
c->printPretty();
std::cout << (c->insert(304)) << std::endl;
std::cout << (e->insert(443)) << std::endl;
*b=*d;
std::cout << (d->remove(162)) << std::endl;
std::cout << (b->remove(162)) << std::endl;
b->printPretty();
std::cout << (e->remove(336)) << std::endl;
d->printPretty();
*c=*b;
std::cout << (a->insert(261)) << std::endl;
std::cout << (e->remove(141)) << std::endl;
std::cout << (e->insert(160)) << std::endl;
b->printPretty();
c->printPretty();
*e=*e;
c->printPretty();
*c=*d;
std::cout << (d->insert(78)) << std::endl;
std::cout << (e->remove(365)) << std::endl;
std::cout << (d->insert(78)) << std::endl;
std::cout << (c->remove(146)) << std::endl;
std::cout << (c->remove(449)) << std::endl;
std::cout << (c->insert(196)) << std::endl;
std::cout << (e->remove(153)) << std::endl;
std::cout << (e->remove(373)) << std::endl;
std::cout << (a->remove(319)) << std::endl;
*c=*d;
d->printPretty();
std::cout << (a->insert(85)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (a->remove(226)) << std::endl;
*c=*e;
std::cout << (d->insert(49)) << std::endl;
std::cout << (d->remove(145)) << std::endl;
std::cout << (a->remove(441)) << std::endl;
std::cout << (c->remove(498)) << std::endl;
std::cout << (a->remove(438)) << std::endl;
std::cout << (c->insert(85)) << std::endl;
std::cout << (a->insert(85)) << std::endl;
e->printPretty();
std::cout << (b->insert(199)) << std::endl;
std::cout << (e->insert(443)) << std::endl;
c->printPretty();
std::cout << (d->remove(459)) << std::endl;
*e=*b;
*a=*d;
std::cout << (a->remove(49)) << std::endl;
std::cout << (b->remove(386)) << std::endl;
std::cout << (e->remove(199)) << std::endl;
std::cout << (d->remove(78)) << std::endl;
std::cout << (d->insert(49)) << std::endl;
std::cout << (e->insert(241)) << std::endl;
std::cout << (a->remove(117)) << std::endl;
std::cout << (d->remove(49)) << std::endl;
c->printPretty();
*e=*c;
std::cout << (b->remove(199)) << std::endl;
*d=*d;
std::cout << (b->insert(42)) << std::endl;
std::cout << (e->remove(443)) << std::endl;
std::cout << (c->remove(85)) << std::endl;
std::cout << (c->remove(160)) << std::endl;
std::cout << (b->remove(42)) << std::endl;
std::cout << (c->insert(443)) << std::endl;
std::cout << (e->insert(160)) << std::endl;
std::cout << (c->insert(443)) << std::endl;
b->printPretty();
a->printPretty();
*a=*b;
*a=*d;
std::cout << (e->remove(142)) << std::endl;
e->printPretty();
*b=*d;
std::cout << (c->remove(424)) << std::endl;
*c=*e;
std::cout << (d->insert(420)) << std::endl;
*a=*a;
*a=*b;
a->printPretty();
*b=*d;
*d=*d;
std::cout << (c->insert(402)) << std::endl;
std::cout << (c->insert(402)) << std::endl;
d->printPretty();
std::cout << (b->remove(198)) << std::endl;
*d=*d;
std::cout << (c->insert(434)) << std::endl;
d->printPretty();
std::cout << (d->insert(420)) << std::endl;
std::cout << (c->remove(160)) << std::endl;
*e=*a;
d->printPretty();
std::cout << (e->insert(439)) << std::endl;
e->printPretty();
std::cout << (a->insert(174)) << std::endl;
std::cout << (d->insert(134)) << std::endl;
std::cout << (a->insert(179)) << std::endl;
std::cout << (c->remove(85)) << std::endl;
std::cout << (d->remove(134)) << std::endl;
std::cout << (d->remove(420)) << std::endl;
*b=*b;
*b=*c;
std::cout << (b->insert(434)) << std::endl;
*b=*b;
std::cout << (e->insert(439)) << std::endl;
std::cout << (e->remove(439)) << std::endl;
std::cout << (a->insert(175)) << std::endl;
std::cout << (b->remove(434)) << std::endl;
std::cout << (a->insert(379)) << std::endl;
std::cout << (e->insert(128)) << std::endl;
std::cout << (c->insert(434)) << std::endl;
std::cout << (e->insert(128)) << std::endl;
b->printPretty();
std::cout << (e->remove(128)) << std::endl;
d->printPretty();
std::cout << (c->remove(212)) << std::endl;
std::cout << (a->insert(352)) << std::endl;
std::cout << (c->remove(266)) << std::endl;
std::cout << (c->insert(350)) << std::endl;
std::cout << (d->remove(145)) << std::endl;
e->printPretty();
std::cout << (d->remove(160)) << std::endl;
*b=*d;
std::cout << (a->remove(174)) << std::endl;
std::cout << (e->remove(361)) << std::endl;
std::cout << (a->insert(379)) << std::endl;
d->printPretty();
std::cout << (d->remove(55)) << std::endl;
d->printPretty();
std::cout << (b->remove(318)) << std::endl;
std::cout << (b->remove(88)) << std::endl;
std::cout << (b->insert(93)) << std::endl;
std::cout << (a->remove(266)) << std::endl;
*c=*b;
std::cout << (a->remove(400)) << std::endl;
std::cout << (c->insert(93)) << std::endl;
*a=*b;
std::cout << (d->insert(273)) << std::endl;
d->printPretty();
std::cout << (c->insert(56)) << std::endl;
a->printPretty();
std::cout << (c->insert(390)) << std::endl;
*b=*b;
d->printPretty();
std::cout << (e->remove(354)) << std::endl;
std::cout << (a->insert(93)) << std::endl;
std::cout << (b->remove(334)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (a->insert(166)) << std::endl;
*d=*d;
std::cout << (b->remove(93)) << std::endl;
std::cout << (e->insert(278)) << std::endl;
std::cout << (c->remove(177)) << std::endl;
*b=*b;
std::cout << (b->insert(480)) << std::endl;
*d=*a;
c->printPretty();
e->printPretty();
std::cout << (b->remove(480)) << std::endl;
b->printPretty();
std::cout << (e->insert(278)) << std::endl;
std::cout << (d->insert(82)) << std::endl;
std::cout << (e->remove(427)) << std::endl;
e->printPretty();
*d=*a;
std::cout << (c->insert(67)) << std::endl;
a->printPretty();
std::cout << (d->insert(189)) << std::endl;
std::cout << (a->remove(216)) << std::endl;
std::cout << (c->insert(56)) << std::endl;
std::cout << (c->remove(307)) << std::endl;
std::cout << (d->remove(5)) << std::endl;
*a=*d;
*c=*c;
std::cout << (e->insert(278)) << std::endl;
std::cout << (d->insert(150)) << std::endl;
a->printPretty();
*c=*a;
std::cout << (e->remove(65)) << std::endl;
e->printPretty();
*b=*b;
std::cout << (d->remove(150)) << std::endl;
std::cout << (a->insert(282)) << std::endl;
c->printPretty();
std::cout << (a->remove(93)) << std::endl;
std::cout << (d->insert(76)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (e->remove(278)) << std::endl;
std::cout << (d->insert(251)) << std::endl;
std::cout << (c->insert(189)) << std::endl;
*e=*d;
std::cout << (e->insert(188)) << std::endl;
c->printPretty();
std::cout << (e->remove(166)) << std::endl;
*c=*d;
*a=*a;
std::cout << (e->remove(189)) << std::endl;
std::cout << (c->remove(183)) << std::endl;
std::cout << (a->remove(282)) << std::endl;
*a=*a;
std::cout << (d->insert(166)) << std::endl;
*b=*a;
std::cout << (a->remove(166)) << std::endl;
std::cout << (a->remove(189)) << std::endl;
*e=*d;
std::cout << (c->remove(82)) << std::endl;
std::cout << (c->insert(189)) << std::endl;
std::cout << (b->insert(189)) << std::endl;
std::cout << (c->insert(166)) << std::endl;
std::cout << (d->insert(76)) << std::endl;
std::cout << (b->remove(275)) << std::endl;
std::cout << (b->remove(166)) << std::endl;
*d=*d;
std::cout << (b->remove(171)) << std::endl;
std::cout << (a->remove(133)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (d->insert(261)) << std::endl;
std::cout << (a->insert(401)) << std::endl;
*c=*b;
*d=*e;
std::cout << (b->insert(189)) << std::endl;
std::cout << (e->remove(166)) << std::endl;
std::cout << (d->insert(455)) << std::endl;
std::cout << (b->remove(145)) << std::endl;
*b=*d;
b->printPretty();
std::cout << (d->remove(485)) << std::endl;
*b=*a;
std::cout << (e->insert(453)) << std::endl;
std::cout << (a->insert(341)) << std::endl;
std::cout << (a->remove(341)) << std::endl;
std::cout << (c->insert(189)) << std::endl;
std::cout << (b->insert(401)) << std::endl;
*a=*b;
d->printPretty();
*e=*c;
std::cout << (b->remove(407)) << std::endl;
*c=*a;
std::cout << (a->remove(178)) << std::endl;
*c=*a;
e->printPretty();
std::cout << (b->insert(147)) << std::endl;
std::cout << (a->insert(61)) << std::endl;
std::cout << (a->insert(401)) << std::endl;
std::cout << (c->insert(359)) << std::endl;
std::cout << (e->remove(189)) << std::endl;
std::cout << (c->remove(72)) << std::endl;
std::cout << (b->remove(315)) << std::endl;
std::cout << (e->insert(482)) << std::endl;
std::cout << (a->remove(401)) << std::endl;
return 0;
}
