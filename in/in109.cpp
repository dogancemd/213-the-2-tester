#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << (b->insert(107)) << std::endl;
std::cout << (a->remove(165)) << std::endl;
*b=*b;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
std::cout << (c->remove(236)) << std::endl;
ScapegoatTree<int> *d=new ScapegoatTree<int>;
std::cout << (b->insert(107)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*d);
std::cout << (b->remove(263)) << std::endl;
d->printPretty();
std::cout << (b->insert(107)) << std::endl;
*c=*a;
*e=*a;
*d=*c;
std::cout << (b->insert(107)) << std::endl;
*a=*a;
std::cout << (c->remove(238)) << std::endl;
std::cout << (c->insert(107)) << std::endl;
std::cout << (d->remove(95)) << std::endl;
a->printPretty();
std::cout << (d->insert(107)) << std::endl;
std::cout << (e->insert(107)) << std::endl;
std::cout << (b->insert(48)) << std::endl;
b->printPretty();
std::cout << (b->insert(1)) << std::endl;
std::cout << (c->insert(482)) << std::endl;
std::cout << (c->insert(107)) << std::endl;
c->printPretty();
std::cout << (d->remove(428)) << std::endl;
*d=*b;
std::cout << (d->insert(142)) << std::endl;
std::cout << (d->insert(371)) << std::endl;
e->printPretty();
std::cout << (d->remove(233)) << std::endl;
std::cout << (a->remove(107)) << std::endl;
*a=*a;
std::cout << (c->remove(482)) << std::endl;
std::cout << (e->remove(200)) << std::endl;
std::cout << (e->insert(215)) << std::endl;
std::cout << (c->remove(208)) << std::endl;
std::cout << (b->remove(48)) << std::endl;
c->printPretty();
std::cout << (e->insert(215)) << std::endl;
std::cout << (c->insert(247)) << std::endl;
*a=*b;
std::cout << (d->remove(358)) << std::endl;
std::cout << (e->insert(242)) << std::endl;
b->printPretty();
std::cout << (c->insert(88)) << std::endl;
std::cout << (d->remove(107)) << std::endl;
std::cout << (d->insert(1)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (d->insert(323)) << std::endl;
std::cout << (a->insert(107)) << std::endl;
*b=*e;
std::cout << (b->remove(96)) << std::endl;
std::cout << (d->insert(298)) << std::endl;
std::cout << (b->remove(242)) << std::endl;
std::cout << (e->remove(261)) << std::endl;
std::cout << (e->insert(41)) << std::endl;
std::cout << (d->remove(48)) << std::endl;
std::cout << (a->remove(107)) << std::endl;
*b=*e;
std::cout << (b->insert(212)) << std::endl;
a->printPretty();
*e=*a;
*d=*e;
e->printPretty();
std::cout << (e->insert(1)) << std::endl;
std::cout << (b->insert(236)) << std::endl;
std::cout << (d->insert(1)) << std::endl;
std::cout << (c->insert(399)) << std::endl;
std::cout << (b->remove(242)) << std::endl;
std::cout << (d->remove(1)) << std::endl;
std::cout << (e->remove(386)) << std::endl;
b->printPretty();
std::cout << (b->remove(107)) << std::endl;
std::cout << (a->insert(238)) << std::endl;
std::cout << (c->remove(88)) << std::endl;
std::cout << (e->remove(3)) << std::endl;
std::cout << (e->insert(1)) << std::endl;
*c=*c;
*b=*a;
std::cout << (a->remove(238)) << std::endl;
*e=*e;
*a=*b;
std::cout << (e->remove(283)) << std::endl;
*a=*e;
std::cout << (c->insert(399)) << std::endl;
std::cout << (a->remove(1)) << std::endl;
e->printPretty();
std::cout << (e->remove(1)) << std::endl;
std::cout << (c->remove(399)) << std::endl;
*d=*b;
std::cout << (b->insert(94)) << std::endl;
*b=*a;
std::cout << (e->insert(123)) << std::endl;
std::cout << (e->remove(373)) << std::endl;
std::cout << (b->remove(397)) << std::endl;
a->printPretty();
std::cout << (d->insert(238)) << std::endl;
*d=*b;
std::cout << (b->remove(52)) << std::endl;
*e=*d;
*d=*a;
b->printPretty();
*c=*d;
*b=*b;
b->printPretty();
*a=*e;
std::cout << (d->remove(205)) << std::endl;
std::cout << (a->insert(332)) << std::endl;
e->printPretty();
*c=*d;
*e=*a;
b->printPretty();
std::cout << (a->insert(407)) << std::endl;
*a=*c;
c->printPretty();
std::cout << (d->remove(99)) << std::endl;
std::cout << (d->remove(484)) << std::endl;
std::cout << (e->insert(332)) << std::endl;
std::cout << (c->remove(136)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (e->insert(455)) << std::endl;
std::cout << (a->remove(68)) << std::endl;
std::cout << (e->insert(499)) << std::endl;
c->printPretty();
std::cout << (b->insert(241)) << std::endl;
std::cout << (b->remove(85)) << std::endl;
*b=*b;
std::cout << (b->remove(241)) << std::endl;
*b=*c;
std::cout << (b->insert(188)) << std::endl;
std::cout << (e->remove(320)) << std::endl;
c->printPretty();
d->printPretty();
a->printPretty();
std::cout << (b->remove(188)) << std::endl;
d->printPretty();
std::cout << (d->insert(431)) << std::endl;
b->printPretty();
*d=*d;
std::cout << (d->remove(167)) << std::endl;
c->printPretty();
std::cout << (d->remove(431)) << std::endl;
*e=*c;
std::cout << (d->remove(275)) << std::endl;
*d=*d;
b->printPretty();
c->printPretty();
std::cout << (d->remove(82)) << std::endl;
std::cout << (a->insert(453)) << std::endl;
std::cout << (e->remove(358)) << std::endl;
std::cout << (e->insert(57)) << std::endl;
std::cout << (a->insert(453)) << std::endl;
std::cout << (e->insert(57)) << std::endl;
std::cout << (d->insert(483)) << std::endl;
std::cout << (c->insert(325)) << std::endl;
std::cout << (d->remove(483)) << std::endl;
*b=*c;
std::cout << (b->remove(325)) << std::endl;
*c=*a;
std::cout << (a->remove(453)) << std::endl;
*c=*e;
std::cout << (d->remove(465)) << std::endl;
std::cout << (c->remove(57)) << std::endl;
b->printPretty();
c->printPretty();
d->printPretty();
d->printPretty();
*c=*e;
*e=*d;
std::cout << (c->insert(190)) << std::endl;
std::cout << (e->insert(67)) << std::endl;
std::cout << (c->remove(57)) << std::endl;
*b=*d;
std::cout << (b->insert(308)) << std::endl;
std::cout << (d->remove(97)) << std::endl;
std::cout << (b->insert(10)) << std::endl;
std::cout << (b->remove(481)) << std::endl;
std::cout << (d->remove(404)) << std::endl;
std::cout << (b->insert(308)) << std::endl;
*e=*b;
std::cout << (a->insert(358)) << std::endl;
std::cout << (e->remove(178)) << std::endl;
*c=*b;
*a=*a;
std::cout << (d->remove(376)) << std::endl;
c->printPretty();
std::cout << (d->insert(466)) << std::endl;
d->printPretty();
std::cout << (c->insert(308)) << std::endl;
std::cout << (c->insert(346)) << std::endl;
std::cout << (e->insert(10)) << std::endl;
std::cout << (e->remove(74)) << std::endl;
*c=*b;
std::cout << (c->remove(311)) << std::endl;
std::cout << (a->insert(358)) << std::endl;
std::cout << (e->remove(10)) << std::endl;
std::cout << (e->insert(308)) << std::endl;
std::cout << (c->remove(10)) << std::endl;
std::cout << (e->insert(308)) << std::endl;
std::cout << (c->insert(92)) << std::endl;
*c=*d;
*a=*a;
std::cout << (c->remove(466)) << std::endl;
std::cout << (b->remove(440)) << std::endl;
std::cout << (e->insert(396)) << std::endl;
a->printPretty();
std::cout << (d->insert(466)) << std::endl;
std::cout << (d->remove(466)) << std::endl;
std::cout << (b->remove(308)) << std::endl;
std::cout << (a->remove(358)) << std::endl;
*a=*a;
std::cout << (d->insert(109)) << std::endl;
*a=*d;
*d=*d;
std::cout << (b->insert(10)) << std::endl;
std::cout << (a->remove(412)) << std::endl;
std::cout << (d->insert(208)) << std::endl;
std::cout << (b->insert(10)) << std::endl;
std::cout << (a->insert(109)) << std::endl;
std::cout << (b->remove(208)) << std::endl;
*a=*c;
std::cout << (a->remove(124)) << std::endl;
std::cout << (e->insert(308)) << std::endl;
std::cout << (a->insert(482)) << std::endl;
std::cout << (d->insert(79)) << std::endl;
d->printPretty();
std::cout << (b->remove(10)) << std::endl;
std::cout << (e->remove(308)) << std::endl;
a->printPretty();
std::cout << (b->remove(358)) << std::endl;
std::cout << (e->insert(396)) << std::endl;
std::cout << (b->insert(289)) << std::endl;
*e=*b;
*a=*e;
c->printPretty();
std::cout << (a->remove(222)) << std::endl;
std::cout << (e->insert(127)) << std::endl;
std::cout << (b->remove(289)) << std::endl;
*a=*e;
std::cout << (e->remove(289)) << std::endl;
std::cout << (e->remove(365)) << std::endl;
*e=*b;
std::cout << (e->insert(229)) << std::endl;
std::cout << (a->remove(289)) << std::endl;
std::cout << (b->remove(255)) << std::endl;
std::cout << (d->remove(109)) << std::endl;
*d=*c;
std::cout << (c->insert(176)) << std::endl;
std::cout << (d->insert(113)) << std::endl;
std::cout << (c->remove(25)) << std::endl;
c->printPretty();
d->printPretty();
d->printPretty();
std::cout << (a->insert(393)) << std::endl;
std::cout << (d->remove(237)) << std::endl;
std::cout << (a->insert(98)) << std::endl;
*e=*b;
std::cout << (a->remove(98)) << std::endl;
std::cout << (a->insert(393)) << std::endl;
*a=*b;
std::cout << (b->insert(276)) << std::endl;
std::cout << (b->insert(276)) << std::endl;
std::cout << (e->remove(351)) << std::endl;
std::cout << (b->remove(397)) << std::endl;
std::cout << (a->remove(281)) << std::endl;
std::cout << (c->insert(176)) << std::endl;
a->printPretty();
std::cout << (b->remove(276)) << std::endl;
a->printPretty();
std::cout << (b->remove(117)) << std::endl;
std::cout << (d->remove(299)) << std::endl;
d->printPretty();
std::cout << (c->insert(399)) << std::endl;
*e=*a;
std::cout << (d->remove(334)) << std::endl;
*a=*e;
std::cout << (a->insert(92)) << std::endl;
std::cout << (d->insert(322)) << std::endl;
*c=*e;
std::cout << (a->remove(92)) << std::endl;
d->printPretty();
b->printPretty();
*b=*d;
std::cout << (b->remove(322)) << std::endl;
std::cout << (d->insert(464)) << std::endl;
std::cout << (c->insert(469)) << std::endl;
std::cout << (d->remove(464)) << std::endl;
a->printPretty();
*d=*c;
std::cout << (b->remove(113)) << std::endl;
std::cout << (b->remove(453)) << std::endl;
std::cout << (b->insert(42)) << std::endl;
std::cout << (d->remove(469)) << std::endl;
*d=*e;
d->printPretty();
std::cout << (b->remove(259)) << std::endl;
e->printPretty();
std::cout << (b->remove(135)) << std::endl;
std::cout << (d->insert(255)) << std::endl;
*c=*c;
std::cout << (b->insert(42)) << std::endl;
std::cout << (c->insert(469)) << std::endl;
std::cout << (d->remove(363)) << std::endl;
a->printPretty();
std::cout << (b->insert(377)) << std::endl;
std::cout << (a->remove(76)) << std::endl;
c->printPretty();
std::cout << (b->remove(323)) << std::endl;
std::cout << (d->remove(435)) << std::endl;
std::cout << (b->insert(377)) << std::endl;
std::cout << (b->remove(392)) << std::endl;
*d=*d;
std::cout << (a->remove(63)) << std::endl;
std::cout << (d->insert(348)) << std::endl;
std::cout << (a->remove(212)) << std::endl;
std::cout << (d->remove(348)) << std::endl;
std::cout << (d->remove(255)) << std::endl;
std::cout << (c->insert(469)) << std::endl;
std::cout << (e->remove(343)) << std::endl;
std::cout << (d->remove(93)) << std::endl;
std::cout << (d->remove(135)) << std::endl;
std::cout << (e->insert(337)) << std::endl;
std::cout << (c->remove(382)) << std::endl;
*c=*e;
*d=*e;
std::cout << (b->insert(377)) << std::endl;
std::cout << (d->insert(337)) << std::endl;
std::cout << (e->remove(490)) << std::endl;
std::cout << (e->remove(337)) << std::endl;
c->printPretty();
*e=*b;
std::cout << (c->remove(377)) << std::endl;
e->printPretty();
std::cout << (e->remove(377)) << std::endl;
std::cout << (b->remove(213)) << std::endl;
std::cout << (a->insert(291)) << std::endl;
std::cout << (e->remove(42)) << std::endl;
std::cout << (e->remove(197)) << std::endl;
std::cout << (b->insert(42)) << std::endl;
std::cout << (a->remove(291)) << std::endl;
c->printPretty();
b->printPretty();
*b=*e;
std::cout << (d->insert(337)) << std::endl;
d->printPretty();
std::cout << (b->insert(481)) << std::endl;
std::cout << (c->insert(337)) << std::endl;
c->printPretty();
std::cout << (b->remove(481)) << std::endl;
c->printPretty();
std::cout << (e->insert(201)) << std::endl;
*c=*d;
*d=*b;
d->printPretty();
*b=*d;
std::cout << (e->remove(54)) << std::endl;
d->printPretty();
std::cout << (a->insert(114)) << std::endl;
std::cout << (a->insert(96)) << std::endl;
std::cout << (c->remove(119)) << std::endl;
std::cout << (e->insert(261)) << std::endl;
b->printPretty();
std::cout << (e->remove(261)) << std::endl;
a->printPretty();
std::cout << (c->remove(138)) << std::endl;
std::cout << (e->insert(201)) << std::endl;
std::cout << (c->remove(337)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (c->insert(198)) << std::endl;
std::cout << (c->remove(198)) << std::endl;
*c=*a;
d->printPretty();
*a=*e;
std::cout << (d->remove(407)) << std::endl;
std::cout << (c->remove(455)) << std::endl;
std::cout << (b->remove(161)) << std::endl;
std::cout << (c->insert(96)) << std::endl;
std::cout << (e->remove(399)) << std::endl;
std::cout << (c->insert(114)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
a->printPretty();
std::cout << (c->remove(478)) << std::endl;
std::cout << (c->insert(366)) << std::endl;
c->printPretty();
e->printPretty();
std::cout << (a->remove(412)) << std::endl;
b->printPretty();
std::cout << (e->remove(290)) << std::endl;
*b=*d;
std::cout << (b->insert(44)) << std::endl;
*e=*a;
*d=*c;
*b=*a;
*d=*a;
std::cout << (c->remove(87)) << std::endl;
std::cout << (c->insert(120)) << std::endl;
std::cout << (b->remove(201)) << std::endl;
*b=*e;
std::cout << (d->remove(344)) << std::endl;
b->printPretty();
std::cout << (e->remove(385)) << std::endl;
std::cout << (d->insert(473)) << std::endl;
a->printPretty();
std::cout << (e->remove(201)) << std::endl;
b->printPretty();
std::cout << (b->remove(201)) << std::endl;
std::cout << (b->insert(348)) << std::endl;
*d=*c;
c->printPretty();
std::cout << (c->insert(17)) << std::endl;
b->printPretty();
std::cout << (a->insert(353)) << std::endl;
std::cout << (d->insert(366)) << std::endl;
std::cout << (b->remove(446)) << std::endl;
std::cout << (b->insert(138)) << std::endl;
std::cout << (c->remove(20)) << std::endl;
b->printPretty();
std::cout << (a->insert(353)) << std::endl;
d->printPretty();
std::cout << (b->insert(348)) << std::endl;
a->printPretty();
std::cout << (d->remove(107)) << std::endl;
std::cout << (d->insert(366)) << std::endl;
b->printPretty();
*e=*b;
*d=*e;
std::cout << (e->insert(93)) << std::endl;
*b=*e;
*d=*b;
std::cout << (e->remove(270)) << std::endl;
std::cout << (e->remove(138)) << std::endl;
std::cout << (d->insert(138)) << std::endl;
std::cout << (a->remove(295)) << std::endl;
*d=*a;
*d=*c;
std::cout << (d->remove(432)) << std::endl;
std::cout << (d->remove(283)) << std::endl;
std::cout << (e->remove(93)) << std::endl;
std::cout << (b->remove(93)) << std::endl;
std::cout << (c->insert(96)) << std::endl;
std::cout << (d->insert(475)) << std::endl;
std::cout << (e->remove(348)) << std::endl;
std::cout << (d->remove(382)) << std::endl;
*e=*e;
*e=*c;
std::cout << (d->insert(475)) << std::endl;
*a=*c;
std::cout << (a->insert(96)) << std::endl;
std::cout << (d->insert(241)) << std::endl;
std::cout << (a->remove(120)) << std::endl;
b->printPretty();
std::cout << (e->remove(366)) << std::endl;
std::cout << (d->remove(167)) << std::endl;
*e=*c;
std::cout << (b->remove(398)) << std::endl;
*e=*d;
*a=*a;
*a=*e;
std::cout << (b->insert(54)) << std::endl;
*a=*d;
a->printPretty();
*a=*a;
*b=*a;
*b=*e;
std::cout << (b->insert(114)) << std::endl;
*b=*c;
std::cout << (e->insert(96)) << std::endl;
*b=*d;
std::cout << (d->insert(120)) << std::endl;
std::cout << (c->insert(366)) << std::endl;
std::cout << (d->remove(439)) << std::endl;
std::cout << (b->remove(366)) << std::endl;
std::cout << (e->remove(331)) << std::endl;
c->printPretty();
std::cout << (c->insert(17)) << std::endl;
std::cout << (e->insert(189)) << std::endl;
e->printPretty();
*a=*b;
std::cout << (e->insert(355)) << std::endl;
std::cout << (e->remove(17)) << std::endl;
*d=*e;
std::cout << (e->insert(72)) << std::endl;
d->printPretty();
std::cout << (a->remove(74)) << std::endl;
e->printPretty();
*b=*a;
std::cout << (e->insert(361)) << std::endl;
std::cout << (a->insert(241)) << std::endl;
std::cout << (e->remove(99)) << std::endl;
std::cout << (c->insert(85)) << std::endl;
std::cout << (e->insert(114)) << std::endl;
d->printPretty();
std::cout << (a->remove(120)) << std::endl;
std::cout << (c->insert(366)) << std::endl;
std::cout << (a->remove(475)) << std::endl;
*e=*b;
std::cout << (a->insert(17)) << std::endl;
std::cout << (e->remove(136)) << std::endl;
std::cout << (a->remove(241)) << std::endl;
std::cout << (c->insert(316)) << std::endl;
*d=*a;
std::cout << (b->insert(96)) << std::endl;
c->printPretty();
*a=*a;
std::cout << (c->insert(114)) << std::endl;
*d=*a;
std::cout << (a->remove(114)) << std::endl;
std::cout << (d->insert(17)) << std::endl;
*e=*a;
std::cout << (c->insert(106)) << std::endl;
c->printPretty();
std::cout << (b->insert(120)) << std::endl;
std::cout << (d->remove(122)) << std::endl;
std::cout << (a->remove(17)) << std::endl;
std::cout << (a->remove(358)) << std::endl;
std::cout << (e->remove(96)) << std::endl;
*d=*c;
c->printPretty();
std::cout << (d->remove(17)) << std::endl;
std::cout << (d->remove(359)) << std::endl;
std::cout << (c->remove(366)) << std::endl;
*a=*c;
*c=*b;
std::cout << (d->remove(96)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (b->remove(6)) << std::endl;
*a=*b;
*a=*d;
std::cout << (a->insert(106)) << std::endl;
c->printPretty();
b->printPretty();
std::cout << (e->insert(17)) << std::endl;
std::cout << (a->insert(85)) << std::endl;
std::cout << (d->insert(270)) << std::endl;
std::cout << (d->remove(14)) << std::endl;
std::cout << (c->remove(217)) << std::endl;
std::cout << (a->insert(316)) << std::endl;
std::cout << (e->remove(17)) << std::endl;
std::cout << (c->remove(371)) << std::endl;
b->printPretty();
std::cout << (c->insert(475)) << std::endl;
std::cout << (c->remove(73)) << std::endl;
std::cout << (a->insert(106)) << std::endl;
std::cout << (b->remove(17)) << std::endl;
std::cout << (a->remove(165)) << std::endl;
std::cout << (b->insert(120)) << std::endl;
std::cout << (a->remove(316)) << std::endl;
e->printPretty();
std::cout << (b->remove(114)) << std::endl;
std::cout << (e->insert(99)) << std::endl;
std::cout << (b->remove(148)) << std::endl;
*c=*c;
*a=*b;
*a=*b;
std::cout << (e->insert(99)) << std::endl;
std::cout << (b->remove(434)) << std::endl;
std::cout << (b->insert(64)) << std::endl;
std::cout << (c->insert(475)) << std::endl;
std::cout << (a->insert(120)) << std::endl;
std::cout << (c->remove(245)) << std::endl;
std::cout << (e->remove(99)) << std::endl;
*a=*c;
std::cout << (d->remove(107)) << std::endl;
std::cout << (d->insert(120)) << std::endl;
std::cout << (a->insert(211)) << std::endl;
std::cout << (d->insert(114)) << std::endl;
c->printPretty();
std::cout << (a->insert(67)) << std::endl;
b->printPretty();
std::cout << (a->insert(114)) << std::endl;
std::cout << (d->remove(138)) << std::endl;
std::cout << (a->insert(52)) << std::endl;
std::cout << (c->insert(421)) << std::endl;
*c=*d;
*a=*a;
std::cout << (b->remove(278)) << std::endl;
d->printPretty();
std::cout << (a->insert(102)) << std::endl;
std::cout << (c->insert(366)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
std::cout << (c->insert(120)) << std::endl;
std::cout << (b->insert(98)) << std::endl;
std::cout << (c->insert(106)) << std::endl;
*d=*e;
std::cout << (a->remove(17)) << std::endl;
*d=*e;
std::cout << (a->remove(50)) << std::endl;
std::cout << (e->remove(242)) << std::endl;
*c=*c;
std::cout << (a->remove(241)) << std::endl;
b->printPretty();
std::cout << (a->insert(52)) << std::endl;
c->printPretty();
*a=*b;
a->printPretty();
std::cout << (a->remove(96)) << std::endl;
*b=*c;
std::cout << (c->insert(279)) << std::endl;
d->printPretty();
std::cout << (a->remove(121)) << std::endl;
std::cout << (d->insert(471)) << std::endl;
*c=*b;
c->printPretty();
std::cout << (a->remove(397)) << std::endl;
std::cout << (d->insert(264)) << std::endl;
a->printPretty();
e->printPretty();
d->printPretty();
b->printPretty();
std::cout << (e->remove(86)) << std::endl;
std::cout << (b->insert(375)) << std::endl;
std::cout << (b->insert(46)) << std::endl;
std::cout << (d->remove(264)) << std::endl;
std::cout << (a->insert(64)) << std::endl;
std::cout << (e->remove(94)) << std::endl;
std::cout << (e->insert(280)) << std::endl;
*b=*a;
d->printPretty();
*c=*c;
std::cout << (a->insert(241)) << std::endl;
std::cout << (e->insert(125)) << std::endl;
std::cout << (b->remove(406)) << std::endl;
d->printPretty();
*d=*d;
e->printPretty();
std::cout << (a->remove(241)) << std::endl;
std::cout << (e->insert(361)) << std::endl;
*b=*c;
*b=*a;
std::cout << (a->insert(475)) << std::endl;
std::cout << (d->remove(471)) << std::endl;
*c=*a;
*c=*e;
b->printPretty();
*c=*e;
*c=*a;
std::cout << (b->remove(120)) << std::endl;
std::cout << (e->remove(125)) << std::endl;
std::cout << (c->remove(120)) << std::endl;
d->printPretty();
std::cout << (c->remove(64)) << std::endl;
std::cout << (c->remove(475)) << std::endl;
std::cout << (a->remove(347)) << std::endl;
*a=*c;
std::cout << (c->remove(98)) << std::endl;
std::cout << (a->remove(98)) << std::endl;
std::cout << (c->insert(330)) << std::endl;
c->printPretty();
std::cout << (a->remove(96)) << std::endl;
std::cout << (c->remove(330)) << std::endl;
*c=*b;
std::cout << (a->remove(307)) << std::endl;
*d=*e;
std::cout << (b->insert(475)) << std::endl;
a->printPretty();
d->printPretty();
*b=*b;
std::cout << (b->insert(126)) << std::endl;
a->printPretty();
std::cout << (a->remove(311)) << std::endl;
std::cout << (b->insert(243)) << std::endl;
std::cout << (c->remove(248)) << std::endl;
c->printPretty();
std::cout << (c->remove(301)) << std::endl;
*c=*e;
std::cout << (e->remove(332)) << std::endl;
std::cout << (c->remove(144)) << std::endl;
std::cout << (a->remove(2)) << std::endl;
std::cout << (a->remove(490)) << std::endl;
c->printPretty();
std::cout << (b->insert(107)) << std::endl;
*b=*c;
e->printPretty();
std::cout << (d->insert(164)) << std::endl;
std::cout << (c->remove(394)) << std::endl;
std::cout << (c->remove(361)) << std::endl;
std::cout << (a->insert(374)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (b->insert(361)) << std::endl;
std::cout << (d->remove(351)) << std::endl;
a->printPretty();
return 0;
}