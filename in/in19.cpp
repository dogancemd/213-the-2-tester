#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << (b->insert(22)) << std::endl;
*b=*a;
a->printPretty();
ScapegoatTree<int> *c=new ScapegoatTree<int>;
std::cout << (a->remove(401)) << std::endl;
ScapegoatTree<int> *d=new ScapegoatTree<int>(*b);
std::cout << (b->remove(448)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
*e=*d;
std::cout << (c->insert(391)) << std::endl;
std::cout << (e->insert(397)) << std::endl;
std::cout << (e->remove(456)) << std::endl;
*a=*e;
std::cout << (a->remove(378)) << std::endl;
*a=*c;
std::cout << (a->remove(391)) << std::endl;
std::cout << (c->remove(120)) << std::endl;
*b=*d;
d->printPretty();
std::cout << (b->remove(60)) << std::endl;
std::cout << (c->insert(386)) << std::endl;
std::cout << (c->remove(218)) << std::endl;
std::cout << (e->insert(397)) << std::endl;
std::cout << (e->remove(466)) << std::endl;
std::cout << (e->insert(226)) << std::endl;
std::cout << (a->remove(446)) << std::endl;
d->printPretty();
*e=*a;
*c=*c;
std::cout << (b->remove(485)) << std::endl;
std::cout << (b->remove(210)) << std::endl;
std::cout << (c->insert(386)) << std::endl;
std::cout << (c->remove(244)) << std::endl;
std::cout << (e->remove(38)) << std::endl;
b->printPretty();
*d=*b;
std::cout << (b->remove(448)) << std::endl;
b->printPretty();
std::cout << (c->insert(391)) << std::endl;
std::cout << (d->insert(25)) << std::endl;
std::cout << (a->remove(420)) << std::endl;
std::cout << (b->insert(393)) << std::endl;
std::cout << (b->remove(319)) << std::endl;
*a=*e;
e->printPretty();
*c=*d;
std::cout << (e->remove(373)) << std::endl;
std::cout << (a->insert(87)) << std::endl;
std::cout << (a->insert(4)) << std::endl;
std::cout << (a->insert(36)) << std::endl;
std::cout << (a->remove(87)) << std::endl;
std::cout << (a->insert(323)) << std::endl;
d->printPretty();
std::cout << (c->remove(25)) << std::endl;
std::cout << (a->insert(323)) << std::endl;
*b=*c;
*a=*a;
*a=*d;
std::cout << (a->remove(124)) << std::endl;
std::cout << (d->remove(458)) << std::endl;
std::cout << (c->insert(325)) << std::endl;
std::cout << (c->insert(325)) << std::endl;
std::cout << (a->insert(25)) << std::endl;
std::cout << (e->remove(56)) << std::endl;
std::cout << (e->remove(412)) << std::endl;
std::cout << (d->insert(12)) << std::endl;
d->printPretty();
std::cout << (d->remove(218)) << std::endl;
std::cout << (e->remove(124)) << std::endl;
std::cout << (c->remove(116)) << std::endl;
a->printPretty();
c->printPretty();
e->printPretty();
std::cout << (d->insert(322)) << std::endl;
a->printPretty();
std::cout << (a->insert(366)) << std::endl;
std::cout << (e->remove(386)) << std::endl;
*a=*d;
std::cout << (e->remove(472)) << std::endl;
std::cout << (a->insert(25)) << std::endl;
*a=*d;
*a=*c;
a->printPretty();
*d=*e;
std::cout << (a->insert(207)) << std::endl;
*e=*a;
std::cout << (a->insert(325)) << std::endl;
std::cout << (a->remove(212)) << std::endl;
std::cout << (e->remove(207)) << std::endl;
std::cout << (e->remove(325)) << std::endl;
std::cout << (b->insert(465)) << std::endl;
std::cout << (c->remove(325)) << std::endl;
std::cout << (b->remove(465)) << std::endl;
a->printPretty();
*c=*d;
*e=*c;
std::cout << (a->remove(175)) << std::endl;
*a=*d;
*d=*a;
e->printPretty();
*d=*c;
*a=*e;
std::cout << (e->remove(365)) << std::endl;
std::cout << (b->insert(18)) << std::endl;
std::cout << (b->insert(18)) << std::endl;
*d=*b;
*b=*e;
*a=*d;
std::cout << (d->remove(18)) << std::endl;
std::cout << (c->remove(311)) << std::endl;
std::cout << (a->remove(18)) << std::endl;
a->printPretty();
a->printPretty();
*c=*e;
e->printPretty();
d->printPretty();
d->printPretty();
std::cout << (e->remove(79)) << std::endl;
*e=*a;
std::cout << (a->insert(244)) << std::endl;
std::cout << (a->insert(244)) << std::endl;
std::cout << (c->insert(291)) << std::endl;
*d=*d;
std::cout << (a->remove(244)) << std::endl;
std::cout << (e->remove(297)) << std::endl;
std::cout << (a->remove(207)) << std::endl;
a->printPretty();
std::cout << (b->insert(346)) << std::endl;
*a=*d;
*e=*c;
std::cout << (a->remove(216)) << std::endl;
std::cout << (d->remove(185)) << std::endl;
std::cout << (b->insert(346)) << std::endl;
std::cout << (e->remove(265)) << std::endl;
std::cout << (b->remove(346)) << std::endl;
std::cout << (d->insert(300)) << std::endl;
std::cout << (d->insert(370)) << std::endl;
*c=*c;
*d=*e;
std::cout << (d->remove(230)) << std::endl;
*c=*d;
b->printPretty();
std::cout << (e->remove(291)) << std::endl;
std::cout << (b->remove(490)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (c->remove(213)) << std::endl;
e->printPretty();
std::cout << (e->insert(53)) << std::endl;
c->printPretty();
std::cout << (b->remove(258)) << std::endl;
std::cout << (b->insert(344)) << std::endl;
std::cout << (c->remove(458)) << std::endl;
std::cout << (e->insert(53)) << std::endl;
c->printPretty();
*c=*d;
std::cout << (e->remove(138)) << std::endl;
*c=*b;
b->printPretty();
std::cout << (c->insert(344)) << std::endl;
d->printPretty();
e->printPretty();
c->printPretty();
std::cout << (a->remove(311)) << std::endl;
*d=*d;
e->printPretty();
b->printPretty();
std::cout << (e->remove(262)) << std::endl;
std::cout << (b->insert(241)) << std::endl;
std::cout << (b->remove(344)) << std::endl;
std::cout << (e->remove(131)) << std::endl;
*d=*c;
*d=*c;
a->printPretty();
std::cout << (e->insert(53)) << std::endl;
std::cout << (d->remove(344)) << std::endl;
c->printPretty();
std::cout << (b->remove(241)) << std::endl;
*e=*a;
a->printPretty();
c->printPretty();
std::cout << (b->remove(434)) << std::endl;
std::cout << (b->remove(179)) << std::endl;
std::cout << (c->insert(344)) << std::endl;
std::cout << (e->insert(31)) << std::endl;
*c=*e;
std::cout << (b->remove(14)) << std::endl;
std::cout << (e->remove(310)) << std::endl;
*b=*a;
*a=*c;
a->printPretty();
std::cout << (c->remove(31)) << std::endl;
*b=*c;
*e=*a;
*b=*e;
std::cout << (b->insert(31)) << std::endl;
std::cout << (e->insert(31)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (c->remove(471)) << std::endl;
std::cout << (a->remove(112)) << std::endl;
std::cout << (b->remove(193)) << std::endl;
e->printPretty();
e->printPretty();
b->printPretty();
e->printPretty();
*d=*c;
e->printPretty();
e->printPretty();
std::cout << (b->remove(316)) << std::endl;
std::cout << (b->insert(31)) << std::endl;
*b=*e;
*b=*c;
c->printPretty();
std::cout << (a->insert(155)) << std::endl;
*c=*c;
std::cout << (a->insert(483)) << std::endl;
std::cout << (b->remove(340)) << std::endl;
std::cout << (a->remove(361)) << std::endl;
std::cout << (a->insert(155)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (d->remove(278)) << std::endl;
std::cout << (e->insert(31)) << std::endl;
std::cout << (e->remove(31)) << std::endl;
std::cout << (e->remove(195)) << std::endl;
d->printPretty();
std::cout << (b->insert(147)) << std::endl;
std::cout << (b->insert(340)) << std::endl;
std::cout << (a->remove(182)) << std::endl;
std::cout << (b->remove(177)) << std::endl;
a->printPretty();
std::cout << (c->insert(60)) << std::endl;
std::cout << (a->insert(453)) << std::endl;
c->printPretty();
std::cout << (c->insert(318)) << std::endl;
std::cout << (c->remove(318)) << std::endl;
std::cout << (c->insert(338)) << std::endl;
*e=*b;
std::cout << (a->insert(162)) << std::endl;
std::cout << (a->remove(408)) << std::endl;
std::cout << (e->remove(215)) << std::endl;
*e=*c;
std::cout << (b->insert(47)) << std::endl;
std::cout << (c->insert(308)) << std::endl;
std::cout << (c->remove(279)) << std::endl;
std::cout << (c->insert(60)) << std::endl;
a->printPretty();
std::cout << (c->remove(33)) << std::endl;
d->printPretty();
std::cout << (d->insert(458)) << std::endl;
c->printPretty();
std::cout << (a->remove(450)) << std::endl;
std::cout << (e->remove(55)) << std::endl;
std::cout << (c->remove(338)) << std::endl;
std::cout << (e->remove(150)) << std::endl;
a->printPretty();
std::cout << (d->insert(335)) << std::endl;
*e=*d;
std::cout << (a->insert(171)) << std::endl;
std::cout << (b->remove(47)) << std::endl;
std::cout << (b->remove(234)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (c->insert(60)) << std::endl;
std::cout << (c->remove(465)) << std::endl;
std::cout << (d->remove(408)) << std::endl;
std::cout << (c->insert(308)) << std::endl;
std::cout << (a->insert(31)) << std::endl;
std::cout << (a->insert(483)) << std::endl;
std::cout << (c->insert(60)) << std::endl;
std::cout << (b->insert(220)) << std::endl;
std::cout << (d->remove(335)) << std::endl;
a->printPretty();
std::cout << (a->insert(483)) << std::endl;
d->printPretty();
std::cout << (a->remove(171)) << std::endl;
*a=*c;
*e=*a;
*a=*b;
std::cout << (e->insert(60)) << std::endl;
std::cout << (b->insert(147)) << std::endl;
std::cout << (e->remove(60)) << std::endl;
std::cout << (a->insert(176)) << std::endl;
std::cout << (c->remove(257)) << std::endl;
std::cout << (a->insert(176)) << std::endl;
*c=*e;
*e=*b;
*b=*e;
std::cout << (e->insert(340)) << std::endl;
std::cout << (d->remove(458)) << std::endl;
std::cout << (a->insert(147)) << std::endl;
std::cout << (e->remove(147)) << std::endl;
std::cout << (c->remove(465)) << std::endl;
a->printPretty();
*b=*c;
std::cout << (a->remove(340)) << std::endl;
std::cout << (e->remove(184)) << std::endl;
a->printPretty();
*c=*e;
e->printPretty();
d->printPretty();
e->printPretty();
std::cout << (b->insert(308)) << std::endl;
std::cout << (a->insert(220)) << std::endl;
std::cout << (c->insert(220)) << std::endl;
std::cout << (d->insert(161)) << std::endl;
std::cout << (d->remove(361)) << std::endl;
std::cout << (a->remove(176)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (b->remove(308)) << std::endl;
std::cout << (a->insert(445)) << std::endl;
std::cout << (c->remove(151)) << std::endl;
std::cout << (e->insert(499)) << std::endl;
*d=*e;
d->printPretty();
*a=*a;
*d=*e;
std::cout << (b->insert(189)) << std::endl;
std::cout << (d->remove(225)) << std::endl;
d->printPretty();
*a=*c;
*d=*e;
std::cout << (d->remove(340)) << std::endl;
std::cout << (c->insert(220)) << std::endl;
std::cout << (c->remove(411)) << std::endl;
std::cout << (e->remove(499)) << std::endl;
std::cout << (b->insert(189)) << std::endl;
*a=*b;
*d=*d;
std::cout << (c->remove(340)) << std::endl;
std::cout << (d->remove(252)) << std::endl;
std::cout << (e->remove(220)) << std::endl;
*d=*e;
std::cout << (e->insert(340)) << std::endl;
d->printPretty();
std::cout << (b->remove(423)) << std::endl;
std::cout << (e->insert(193)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (b->remove(371)) << std::endl;
std::cout << (d->remove(355)) << std::endl;
std::cout << (d->remove(336)) << std::endl;
*e=*c;
*c=*b;
std::cout << (e->insert(220)) << std::endl;
std::cout << (e->insert(220)) << std::endl;
std::cout << (d->insert(340)) << std::endl;
std::cout << (e->remove(195)) << std::endl;
std::cout << (d->remove(340)) << std::endl;
a->printPretty();
std::cout << (e->remove(220)) << std::endl;
std::cout << (a->insert(189)) << std::endl;
std::cout << (b->insert(189)) << std::endl;
std::cout << (b->insert(112)) << std::endl;
std::cout << (b->insert(112)) << std::endl;
std::cout << (c->insert(158)) << std::endl;
d->printPretty();
std::cout << (a->insert(189)) << std::endl;
*e=*d;
c->printPretty();
std::cout << (e->insert(382)) << std::endl;
std::cout << (b->remove(298)) << std::endl;
std::cout << (a->insert(189)) << std::endl;
std::cout << (c->remove(330)) << std::endl;
std::cout << (a->insert(478)) << std::endl;
std::cout << (b->remove(189)) << std::endl;
e->printPretty();
c->printPretty();
e->printPretty();
c->printPretty();
std::cout << (a->remove(72)) << std::endl;
std::cout << (e->remove(192)) << std::endl;
*b=*b;
std::cout << (a->remove(189)) << std::endl;
std::cout << (d->remove(183)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
std::cout << (d->remove(84)) << std::endl;
*a=*d;
std::cout << (c->remove(189)) << std::endl;
std::cout << (c->insert(158)) << std::endl;
std::cout << (c->insert(158)) << std::endl;
*a=*b;
std::cout << (a->remove(414)) << std::endl;
std::cout << (e->insert(382)) << std::endl;
std::cout << (b->insert(112)) << std::endl;
std::cout << (e->remove(382)) << std::endl;
a->printPretty();
std::cout << (b->insert(259)) << std::endl;
d->printPretty();
std::cout << (e->insert(188)) << std::endl;
std::cout << (e->remove(188)) << std::endl;
std::cout << (a->insert(475)) << std::endl;
d->printPretty();
std::cout << (e->remove(322)) << std::endl;
std::cout << (b->remove(176)) << std::endl;
std::cout << (b->remove(405)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (e->remove(49)) << std::endl;
std::cout << (b->remove(112)) << std::endl;
std::cout << (e->remove(367)) << std::endl;
std::cout << (b->insert(392)) << std::endl;
std::cout << (e->insert(106)) << std::endl;
std::cout << (c->remove(158)) << std::endl;
b->printPretty();
b->printPretty();
b->printPretty();
std::cout << (d->remove(62)) << std::endl;
std::cout << (b->remove(150)) << std::endl;
std::cout << (c->insert(426)) << std::endl;
std::cout << (d->insert(410)) << std::endl;
a->printPretty();
std::cout << (e->remove(106)) << std::endl;
std::cout << (a->insert(201)) << std::endl;
std::cout << (c->remove(408)) << std::endl;
std::cout << (d->remove(150)) << std::endl;
std::cout << (d->insert(364)) << std::endl;
*c=*a;
c->printPretty();
std::cout << (b->insert(356)) << std::endl;
std::cout << (b->remove(392)) << std::endl;
std::cout << (c->remove(475)) << std::endl;
std::cout << (d->remove(410)) << std::endl;
std::cout << (b->insert(259)) << std::endl;
std::cout << (a->insert(201)) << std::endl;
b->printPretty();
std::cout << (c->insert(237)) << std::endl;
std::cout << (c->remove(225)) << std::endl;
std::cout << (b->remove(356)) << std::endl;
std::cout << (c->remove(331)) << std::endl;
std::cout << (e->insert(382)) << std::endl;
*d=*a;
std::cout << (a->remove(201)) << std::endl;
a->printPretty();
std::cout << (a->insert(475)) << std::endl;
std::cout << (e->remove(294)) << std::endl;
e->printPretty();
std::cout << (b->remove(23)) << std::endl;
std::cout << (e->insert(382)) << std::endl;
std::cout << (d->insert(121)) << std::endl;
e->printPretty();
*a=*a;
std::cout << (b->insert(39)) << std::endl;
std::cout << (e->insert(382)) << std::endl;
std::cout << (c->remove(461)) << std::endl;
std::cout << (c->insert(425)) << std::endl;
std::cout << (d->remove(356)) << std::endl;
*a=*a;
std::cout << (a->insert(112)) << std::endl;
std::cout << (a->insert(112)) << std::endl;
std::cout << (d->remove(201)) << std::endl;
std::cout << (a->insert(112)) << std::endl;
std::cout << (e->remove(105)) << std::endl;
std::cout << (d->insert(475)) << std::endl;
std::cout << (a->remove(428)) << std::endl;
std::cout << (d->insert(433)) << std::endl;
std::cout << (b->remove(292)) << std::endl;
std::cout << (c->remove(425)) << std::endl;
std::cout << (b->remove(334)) << std::endl;
std::cout << (d->insert(433)) << std::endl;
std::cout << (a->insert(475)) << std::endl;
std::cout << (a->remove(141)) << std::endl;
std::cout << (a->remove(112)) << std::endl;
std::cout << (d->remove(316)) << std::endl;
c->printPretty();
std::cout << (b->insert(259)) << std::endl;
std::cout << (a->insert(109)) << std::endl;
std::cout << (d->insert(433)) << std::endl;
std::cout << (d->insert(475)) << std::endl;
std::cout << (b->remove(102)) << std::endl;
std::cout << (c->insert(201)) << std::endl;
std::cout << (d->remove(433)) << std::endl;
std::cout << (e->insert(382)) << std::endl;
std::cout << (b->insert(267)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (a->insert(109)) << std::endl;
std::cout << (d->insert(112)) << std::endl;
*e=*e;
*a=*c;
*d=*d;
b->printPretty();
std::cout << (a->remove(165)) << std::endl;
std::cout << (b->insert(427)) << std::endl;
*a=*e;
d->printPretty();
std::cout << (a->insert(314)) << std::endl;
std::cout << (b->remove(3)) << std::endl;
std::cout << (d->insert(229)) << std::endl;
*c=*d;
std::cout << (c->remove(496)) << std::endl;
std::cout << (b->insert(105)) << std::endl;
std::cout << (a->remove(401)) << std::endl;
std::cout << (c->insert(475)) << std::endl;
*a=*a;
std::cout << (c->insert(112)) << std::endl;
std::cout << (b->insert(259)) << std::endl;
*c=*d;
std::cout << (c->insert(68)) << std::endl;
*a=*a;
std::cout << (c->remove(4)) << std::endl;
std::cout << (c->insert(303)) << std::endl;
std::cout << (c->insert(181)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (b->insert(427)) << std::endl;
std::cout << (b->remove(449)) << std::endl;
std::cout << (e->insert(60)) << std::endl;
*a=*a;
std::cout << (b->insert(163)) << std::endl;
std::cout << (b->remove(183)) << std::endl;
std::cout << (c->remove(181)) << std::endl;
std::cout << (a->remove(314)) << std::endl;
*b=*e;
std::cout << (c->remove(147)) << std::endl;
b->printPretty();
a->printPretty();
a->printPretty();
std::cout << (c->remove(475)) << std::endl;
std::cout << (d->remove(229)) << std::endl;
std::cout << (a->insert(224)) << std::endl;
*e=*c;
std::cout << (a->remove(455)) << std::endl;
b->printPretty();
c->printPretty();
*e=*c;
*a=*c;
b->printPretty();
*b=*c;
std::cout << (a->insert(229)) << std::endl;
*d=*d;
std::cout << (c->insert(121)) << std::endl;
*a=*a;
*a=*d;
std::cout << (b->remove(377)) << std::endl;
std::cout << (c->remove(68)) << std::endl;
c->printPretty();
std::cout << (d->remove(301)) << std::endl;
*c=*d;
c->printPretty();
std::cout << (e->insert(68)) << std::endl;
a->printPretty();
*d=*c;
std::cout << (c->remove(112)) << std::endl;
std::cout << (c->remove(475)) << std::endl;
c->printPretty();
std::cout << (b->remove(334)) << std::endl;
std::cout << (e->remove(121)) << std::endl;
std::cout << (d->remove(436)) << std::endl;
std::cout << (b->remove(121)) << std::endl;
std::cout << (a->remove(121)) << std::endl;
std::cout << (b->insert(229)) << std::endl;
std::cout << (c->remove(121)) << std::endl;
*c=*c;
std::cout << (c->insert(162)) << std::endl;
std::cout << (d->insert(475)) << std::endl;
std::cout << (d->remove(347)) << std::endl;
std::cout << (e->remove(121)) << std::endl;
*c=*e;
std::cout << (c->remove(303)) << std::endl;
std::cout << (b->remove(92)) << std::endl;
c->printPretty();
std::cout << (a->remove(43)) << std::endl;
std::cout << (e->insert(130)) << std::endl;
std::cout << (a->remove(224)) << std::endl;
std::cout << (a->insert(100)) << std::endl;
std::cout << (c->remove(112)) << std::endl;
std::cout << (d->remove(457)) << std::endl;
std::cout << (b->insert(229)) << std::endl;
d->printPretty();
std::cout << (a->remove(475)) << std::endl;
*c=*b;
std::cout << (c->insert(68)) << std::endl;
e->printPretty();
std::cout << (e->insert(303)) << std::endl;
std::cout << (c->insert(421)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (d->insert(112)) << std::endl;
*c=*d;
c->printPretty();
std::cout << (d->remove(67)) << std::endl;
b->printPretty();
std::cout << (b->insert(112)) << std::endl;
std::cout << (b->remove(303)) << std::endl;
e->printPretty();
std::cout << (d->insert(121)) << std::endl;
a->printPretty();
*b=*c;
std::cout << (d->remove(457)) << std::endl;
std::cout << (e->insert(130)) << std::endl;
std::cout << (c->insert(102)) << std::endl;
std::cout << (e->insert(312)) << std::endl;
std::cout << (e->remove(389)) << std::endl;
std::cout << (a->remove(130)) << std::endl;
std::cout << (d->insert(121)) << std::endl;
*a=*e;
b->printPretty();
std::cout << (e->insert(473)) << std::endl;
std::cout << (e->remove(68)) << std::endl;
std::cout << (a->remove(312)) << std::endl;
b->printPretty();
std::cout << (b->remove(475)) << std::endl;
*e=*b;
std::cout << (c->insert(112)) << std::endl;
std::cout << (b->remove(121)) << std::endl;
std::cout << (a->remove(130)) << std::endl;
std::cout << (b->remove(121)) << std::endl;
std::cout << (a->insert(306)) << std::endl;
std::cout << (e->insert(188)) << std::endl;
std::cout << (b->insert(112)) << std::endl;
e->printPretty();
std::cout << (c->insert(475)) << std::endl;
*c=*d;
std::cout << (d->insert(25)) << std::endl;
std::cout << (e->remove(112)) << std::endl;
std::cout << (c->remove(475)) << std::endl;
std::cout << (b->remove(112)) << std::endl;
std::cout << (d->remove(112)) << std::endl;
c->printPretty();
std::cout << (e->remove(188)) << std::endl;
std::cout << (d->remove(170)) << std::endl;
std::cout << (e->insert(121)) << std::endl;
a->printPretty();
std::cout << (e->insert(121)) << std::endl;
std::cout << (e->insert(246)) << std::endl;
std::cout << (e->insert(246)) << std::endl;
a->printPretty();
std::cout << (c->remove(112)) << std::endl;
*c=*a;
std::cout << (e->remove(398)) << std::endl;
std::cout << (c->remove(200)) << std::endl;
d->printPretty();
*c=*d;
std::cout << (b->insert(238)) << std::endl;
e->printPretty();
std::cout << (c->remove(492)) << std::endl;
std::cout << (e->remove(5)) << std::endl;
*c=*d;
std::cout << (b->insert(196)) << std::endl;
*a=*b;
std::cout << (c->insert(475)) << std::endl;
std::cout << (c->remove(435)) << std::endl;
std::cout << (d->remove(325)) << std::endl;
std::cout << (d->insert(365)) << std::endl;
std::cout << (b->insert(343)) << std::endl;
c->printPretty();
std::cout << (e->insert(246)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (d->insert(447)) << std::endl;
d->printPretty();
std::cout << (c->insert(375)) << std::endl;
std::cout << (b->remove(343)) << std::endl;
std::cout << (e->remove(246)) << std::endl;
c->printPretty();
std::cout << (c->insert(46)) << std::endl;
std::cout << (c->insert(180)) << std::endl;
*e=*d;
std::cout << (e->insert(346)) << std::endl;
*c=*b;
std::cout << (a->insert(266)) << std::endl;
std::cout << (b->insert(196)) << std::endl;
std::cout << (b->remove(196)) << std::endl;
std::cout << (e->insert(475)) << std::endl;
std::cout << (b->insert(238)) << std::endl;
std::cout << (b->insert(261)) << std::endl;
std::cout << (e->remove(323)) << std::endl;
*c=*d;
std::cout << (c->remove(49)) << std::endl;
std::cout << (a->remove(238)) << std::endl;
std::cout << (b->insert(255)) << std::endl;
std::cout << (a->insert(14)) << std::endl;
std::cout << (d->insert(63)) << std::endl;
*c=*b;
std::cout << (c->remove(261)) << std::endl;
c->printPretty();
return 0;
}
