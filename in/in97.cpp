#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->insert(335)) << std::endl;
std::cout << (a->insert(335)) << std::endl;
std::cout << (a->remove(335)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
b->printPretty();
std::cout << (a->insert(104)) << std::endl;
std::cout << (a->remove(489)) << std::endl;
std::cout << (a->remove(104)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>;
*b=*a;
*a=*b;
std::cout << (a->remove(303)) << std::endl;
ScapegoatTree<int> *d=new ScapegoatTree<int>(*c);
std::cout << (a->insert(103)) << std::endl;
*d=*b;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
*b=*a;
std::cout << (d->insert(117)) << std::endl;
std::cout << (c->remove(170)) << std::endl;
std::cout << (e->remove(208)) << std::endl;
a->printPretty();
std::cout << (a->remove(103)) << std::endl;
std::cout << (b->remove(103)) << std::endl;
d->printPretty();
std::cout << (a->insert(106)) << std::endl;
*a=*e;
std::cout << (c->insert(460)) << std::endl;
c->printPretty();
std::cout << (a->remove(36)) << std::endl;
*a=*b;
*d=*b;
e->printPretty();
std::cout << (b->insert(478)) << std::endl;
std::cout << (c->remove(460)) << std::endl;
std::cout << (d->insert(480)) << std::endl;
b->printPretty();
std::cout << (d->insert(362)) << std::endl;
std::cout << (b->insert(463)) << std::endl;
std::cout << (a->remove(123)) << std::endl;
std::cout << (b->insert(463)) << std::endl;
std::cout << (c->insert(5)) << std::endl;
std::cout << (b->remove(463)) << std::endl;
std::cout << (a->insert(306)) << std::endl;
*d=*b;
std::cout << (a->remove(360)) << std::endl;
std::cout << (a->remove(119)) << std::endl;
std::cout << (a->remove(347)) << std::endl;
e->printPretty();
std::cout << (d->remove(234)) << std::endl;
std::cout << (e->insert(174)) << std::endl;
std::cout << (e->insert(174)) << std::endl;
std::cout << (d->insert(381)) << std::endl;
std::cout << (b->remove(478)) << std::endl;
*d=*e;
std::cout << (e->insert(174)) << std::endl;
std::cout << (d->remove(480)) << std::endl;
*c=*b;
std::cout << (b->remove(151)) << std::endl;
std::cout << (d->insert(174)) << std::endl;
c->printPretty();
b->printPretty();
std::cout << (e->remove(201)) << std::endl;
std::cout << (a->insert(306)) << std::endl;
e->printPretty();
std::cout << (a->remove(306)) << std::endl;
*c=*a;
std::cout << (d->remove(406)) << std::endl;
std::cout << (e->insert(174)) << std::endl;
std::cout << (d->insert(189)) << std::endl;
std::cout << (e->remove(101)) << std::endl;
std::cout << (d->remove(174)) << std::endl;
std::cout << (d->insert(224)) << std::endl;
std::cout << (e->remove(377)) << std::endl;
std::cout << (b->remove(439)) << std::endl;
b->printPretty();
std::cout << (c->insert(7)) << std::endl;
*a=*a;
std::cout << (e->remove(174)) << std::endl;
std::cout << (a->insert(91)) << std::endl;
std::cout << (b->insert(257)) << std::endl;
std::cout << (b->remove(257)) << std::endl;
std::cout << (a->insert(396)) << std::endl;
*b=*e;
e->printPretty();
e->printPretty();
std::cout << (d->insert(146)) << std::endl;
std::cout << (d->insert(2)) << std::endl;
std::cout << (a->insert(91)) << std::endl;
std::cout << (d->remove(477)) << std::endl;
*b=*b;
std::cout << (d->insert(198)) << std::endl;
std::cout << (c->remove(7)) << std::endl;
std::cout << (a->insert(396)) << std::endl;
*c=*b;
*b=*e;
std::cout << (a->remove(437)) << std::endl;
std::cout << (d->insert(144)) << std::endl;
c->printPretty();
*c=*b;
*d=*a;
std::cout << (d->insert(49)) << std::endl;
std::cout << (d->insert(45)) << std::endl;
*e=*a;
std::cout << (e->insert(396)) << std::endl;
c->printPretty();
std::cout << (e->insert(456)) << std::endl;
*b=*a;
std::cout << (b->insert(91)) << std::endl;
std::cout << (e->remove(72)) << std::endl;
std::cout << (b->remove(144)) << std::endl;
std::cout << (c->insert(497)) << std::endl;
*e=*d;
std::cout << (a->insert(265)) << std::endl;
b->printPretty();
std::cout << (e->insert(290)) << std::endl;
std::cout << (d->remove(402)) << std::endl;
std::cout << (d->remove(49)) << std::endl;
a->printPretty();
*b=*a;
std::cout << (d->insert(91)) << std::endl;
std::cout << (c->remove(497)) << std::endl;
std::cout << (a->insert(91)) << std::endl;
std::cout << (a->insert(208)) << std::endl;
std::cout << (b->insert(423)) << std::endl;
*d=*d;
std::cout << (e->insert(45)) << std::endl;
std::cout << (e->remove(358)) << std::endl;
std::cout << (c->insert(78)) << std::endl;
std::cout << (d->insert(16)) << std::endl;
std::cout << (b->remove(396)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (e->remove(396)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (c->remove(78)) << std::endl;
std::cout << (e->remove(39)) << std::endl;
std::cout << (e->remove(290)) << std::endl;
std::cout << (b->remove(91)) << std::endl;
std::cout << (a->remove(91)) << std::endl;
std::cout << (b->remove(312)) << std::endl;
std::cout << (a->remove(396)) << std::endl;
c->printPretty();
std::cout << (e->insert(425)) << std::endl;
std::cout << (a->insert(208)) << std::endl;
std::cout << (a->insert(208)) << std::endl;
b->printPretty();
*c=*e;
*b=*a;
std::cout << (c->insert(283)) << std::endl;
std::cout << (e->insert(45)) << std::endl;
e->printPretty();
std::cout << (e->insert(425)) << std::endl;
std::cout << (b->remove(364)) << std::endl;
std::cout << (a->remove(265)) << std::endl;
std::cout << (a->remove(309)) << std::endl;
b->printPretty();
std::cout << (e->remove(275)) << std::endl;
std::cout << (d->remove(453)) << std::endl;
std::cout << (a->remove(208)) << std::endl;
std::cout << (c->remove(91)) << std::endl;
std::cout << (e->remove(45)) << std::endl;
std::cout << (d->insert(16)) << std::endl;
std::cout << (e->remove(441)) << std::endl;
std::cout << (b->insert(99)) << std::endl;
d->printPretty();
std::cout << (d->insert(16)) << std::endl;
std::cout << (c->insert(49)) << std::endl;
b->printPretty();
std::cout << (b->remove(323)) << std::endl;
e->printPretty();
std::cout << (d->remove(365)) << std::endl;
std::cout << (e->remove(170)) << std::endl;
*e=*c;
std::cout << (d->insert(396)) << std::endl;
*a=*a;
std::cout << (c->remove(425)) << std::endl;
std::cout << (b->remove(208)) << std::endl;
std::cout << (d->remove(91)) << std::endl;
std::cout << (c->insert(49)) << std::endl;
*a=*b;
*d=*d;
std::cout << (a->insert(224)) << std::endl;
std::cout << (d->remove(396)) << std::endl;
d->printPretty();
std::cout << (c->remove(283)) << std::endl;
std::cout << (d->insert(458)) << std::endl;
std::cout << (a->insert(395)) << std::endl;
*d=*e;
d->printPretty();
std::cout << (b->insert(345)) << std::endl;
std::cout << (a->insert(432)) << std::endl;
b->printPretty();
std::cout << (b->remove(99)) << std::endl;
*e=*c;
std::cout << (c->remove(199)) << std::endl;
std::cout << (d->remove(49)) << std::endl;
std::cout << (a->remove(332)) << std::endl;
*a=*d;
*d=*c;
std::cout << (b->remove(115)) << std::endl;
*a=*b;
std::cout << (a->remove(485)) << std::endl;
a->printPretty();
std::cout << (c->insert(49)) << std::endl;
*e=*e;
*c=*a;
std::cout << (c->insert(345)) << std::endl;
std::cout << (b->insert(345)) << std::endl;
e->printPretty();
std::cout << (d->insert(10)) << std::endl;
std::cout << (b->remove(352)) << std::endl;
std::cout << (e->remove(455)) << std::endl;
std::cout << (e->remove(49)) << std::endl;
std::cout << (e->remove(45)) << std::endl;
b->printPretty();
std::cout << (a->remove(345)) << std::endl;
std::cout << (a->insert(265)) << std::endl;
a->printPretty();
std::cout << (d->insert(279)) << std::endl;
std::cout << (e->insert(27)) << std::endl;
e->printPretty();
std::cout << (e->remove(271)) << std::endl;
std::cout << (c->insert(334)) << std::endl;
std::cout << (b->remove(345)) << std::endl;
std::cout << (b->insert(265)) << std::endl;
std::cout << (b->insert(265)) << std::endl;
std::cout << (c->remove(334)) << std::endl;
std::cout << (b->remove(449)) << std::endl;
std::cout << (d->insert(49)) << std::endl;
std::cout << (d->insert(45)) << std::endl;
std::cout << (b->remove(265)) << std::endl;
std::cout << (c->insert(265)) << std::endl;
std::cout << (c->remove(265)) << std::endl;
std::cout << (d->remove(45)) << std::endl;
std::cout << (d->remove(49)) << std::endl;
c->printPretty();
std::cout << (c->remove(345)) << std::endl;
std::cout << (c->remove(366)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (d->insert(228)) << std::endl;
std::cout << (a->insert(472)) << std::endl;
std::cout << (e->remove(277)) << std::endl;
b->printPretty();
*e=*c;
std::cout << (a->insert(349)) << std::endl;
c->printPretty();
std::cout << (a->insert(212)) << std::endl;
std::cout << (d->insert(10)) << std::endl;
std::cout << (d->remove(228)) << std::endl;
*e=*c;
a->printPretty();
*c=*c;
*d=*d;
*b=*c;
b->printPretty();
std::cout << (e->remove(48)) << std::endl;
std::cout << (c->insert(73)) << std::endl;
*e=*a;
*e=*c;
c->printPretty();
std::cout << (b->remove(362)) << std::endl;
std::cout << (a->remove(349)) << std::endl;
std::cout << (c->insert(408)) << std::endl;
d->printPretty();
std::cout << (d->remove(306)) << std::endl;
std::cout << (e->remove(73)) << std::endl;
*c=*c;
*b=*e;
e->printPretty();
std::cout << (e->insert(294)) << std::endl;
a->printPretty();
*b=*d;
c->printPretty();
std::cout << (b->insert(10)) << std::endl;
std::cout << (e->remove(498)) << std::endl;
std::cout << (b->insert(397)) << std::endl;
std::cout << (e->insert(333)) << std::endl;
std::cout << (b->insert(290)) << std::endl;
std::cout << (b->insert(290)) << std::endl;
std::cout << (d->remove(227)) << std::endl;
*d=*e;
e->printPretty();
std::cout << (e->insert(320)) << std::endl;
d->printPretty();
*b=*b;
*d=*c;
*c=*c;
std::cout << (a->remove(472)) << std::endl;
a->printPretty();
c->printPretty();
*d=*c;
std::cout << (e->insert(299)) << std::endl;
*e=*e;
std::cout << (a->remove(212)) << std::endl;
std::cout << (e->remove(264)) << std::endl;
std::cout << (b->insert(290)) << std::endl;
std::cout << (b->remove(192)) << std::endl;
d->printPretty();
std::cout << (d->remove(63)) << std::endl;
std::cout << (c->remove(73)) << std::endl;
std::cout << (a->remove(265)) << std::endl;
std::cout << (e->remove(299)) << std::endl;
*a=*d;
*c=*d;
d->printPretty();
d->printPretty();
std::cout << (d->insert(392)) << std::endl;
std::cout << (a->remove(491)) << std::endl;
std::cout << (b->remove(422)) << std::endl;
std::cout << (d->insert(148)) << std::endl;
std::cout << (d->remove(148)) << std::endl;
std::cout << (b->remove(75)) << std::endl;
std::cout << (e->insert(294)) << std::endl;
std::cout << (e->remove(211)) << std::endl;
*c=*e;
*a=*d;
std::cout << (a->remove(240)) << std::endl;
std::cout << (a->remove(13)) << std::endl;
std::cout << (b->insert(220)) << std::endl;
std::cout << (a->insert(242)) << std::endl;
std::cout << (c->insert(320)) << std::endl;
std::cout << (e->remove(320)) << std::endl;
*d=*c;
c->printPretty();
std::cout << (c->remove(320)) << std::endl;
std::cout << (e->insert(83)) << std::endl;
a->printPretty();
std::cout << (e->insert(359)) << std::endl;
b->printPretty();
std::cout << (e->remove(83)) << std::endl;
c->printPretty();
std::cout << (a->remove(242)) << std::endl;
std::cout << (a->insert(73)) << std::endl;
std::cout << (a->remove(408)) << std::endl;
std::cout << (b->remove(10)) << std::endl;
std::cout << (c->remove(110)) << std::endl;
std::cout << (c->insert(27)) << std::endl;
std::cout << (d->insert(86)) << std::endl;
std::cout << (a->remove(150)) << std::endl;
std::cout << (d->insert(294)) << std::endl;
*d=*a;
std::cout << (c->insert(27)) << std::endl;
std::cout << (e->remove(333)) << std::endl;
std::cout << (d->insert(460)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (b->remove(181)) << std::endl;
b->printPretty();
std::cout << (b->insert(53)) << std::endl;
*c=*b;
std::cout << (a->remove(392)) << std::endl;
std::cout << (b->remove(407)) << std::endl;
*a=*d;
e->printPretty();
std::cout << (a->remove(392)) << std::endl;
std::cout << (c->remove(354)) << std::endl;
*e=*e;
*e=*e;
std::cout << (e->remove(401)) << std::endl;
std::cout << (d->insert(39)) << std::endl;
std::cout << (c->insert(53)) << std::endl;
std::cout << (b->remove(220)) << std::endl;
std::cout << (a->remove(31)) << std::endl;
d->printPretty();
*b=*c;
*a=*b;
d->printPretty();
std::cout << (a->insert(22)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (b->remove(292)) << std::endl;
e->printPretty();
std::cout << (c->remove(279)) << std::endl;
std::cout << (c->remove(397)) << std::endl;
*a=*e;
std::cout << (d->insert(39)) << std::endl;
std::cout << (c->insert(53)) << std::endl;
std::cout << (d->remove(258)) << std::endl;
e->printPretty();
std::cout << (e->insert(159)) << std::endl;
*c=*a;
std::cout << (a->remove(294)) << std::endl;
std::cout << (c->insert(294)) << std::endl;
std::cout << (a->insert(178)) << std::endl;
std::cout << (a->remove(219)) << std::endl;
std::cout << (c->insert(294)) << std::endl;
std::cout << (d->remove(392)) << std::endl;
b->printPretty();
std::cout << (e->remove(159)) << std::endl;
std::cout << (e->remove(359)) << std::endl;
std::cout << (c->remove(174)) << std::endl;
std::cout << (e->remove(56)) << std::endl;
std::cout << (a->remove(359)) << std::endl;
d->printPretty();
*d=*e;
std::cout << (b->insert(220)) << std::endl;
std::cout << (c->insert(243)) << std::endl;
std::cout << (d->remove(294)) << std::endl;
std::cout << (b->remove(381)) << std::endl;
std::cout << (e->insert(294)) << std::endl;
*a=*c;
std::cout << (b->remove(397)) << std::endl;
std::cout << (c->remove(436)) << std::endl;
std::cout << (d->insert(194)) << std::endl;
std::cout << (e->insert(81)) << std::endl;
std::cout << (e->insert(294)) << std::endl;
std::cout << (d->remove(194)) << std::endl;
std::cout << (e->remove(126)) << std::endl;
std::cout << (e->insert(294)) << std::endl;
*e=*b;
*c=*d;
std::cout << (b->remove(279)) << std::endl;
std::cout << (a->insert(401)) << std::endl;
std::cout << (d->insert(306)) << std::endl;
std::cout << (e->insert(279)) << std::endl;
std::cout << (d->remove(349)) << std::endl;
std::cout << (e->remove(264)) << std::endl;
std::cout << (c->remove(10)) << std::endl;
*b=*b;
std::cout << (a->insert(160)) << std::endl;
std::cout << (a->insert(243)) << std::endl;
*d=*a;
std::cout << (e->remove(279)) << std::endl;
*e=*e;
std::cout << (a->insert(460)) << std::endl;
std::cout << (d->remove(301)) << std::endl;
std::cout << (b->insert(220)) << std::endl;
*d=*a;
*a=*c;
std::cout << (d->remove(431)) << std::endl;
*c=*c;
*b=*c;
std::cout << (d->insert(294)) << std::endl;
std::cout << (a->insert(174)) << std::endl;
std::cout << (a->remove(157)) << std::endl;
a->printPretty();
*e=*a;
std::cout << (a->remove(174)) << std::endl;
*d=*c;
*e=*a;
*c=*b;
std::cout << (c->remove(311)) << std::endl;
std::cout << (e->remove(63)) << std::endl;
d->printPretty();
std::cout << (e->insert(336)) << std::endl;
d->printPretty();
b->printPretty();
e->printPretty();
*c=*d;
std::cout << (c->remove(481)) << std::endl;
*a=*a;
c->printPretty();
std::cout << (e->insert(336)) << std::endl;
std::cout << (b->remove(25)) << std::endl;
std::cout << (c->insert(82)) << std::endl;
std::cout << (e->insert(183)) << std::endl;
std::cout << (d->remove(18)) << std::endl;
a->printPretty();
std::cout << (e->insert(44)) << std::endl;
e->printPretty();
c->printPretty();
a->printPretty();
d->printPretty();
std::cout << (e->remove(496)) << std::endl;
std::cout << (c->insert(345)) << std::endl;
std::cout << (d->remove(467)) << std::endl;
e->printPretty();
std::cout << (b->remove(425)) << std::endl;
std::cout << (d->insert(428)) << std::endl;
std::cout << (d->remove(428)) << std::endl;
e->printPretty();
c->printPretty();
*a=*c;
std::cout << (e->remove(183)) << std::endl;
std::cout << (a->remove(82)) << std::endl;
d->printPretty();
std::cout << (a->insert(299)) << std::endl;
std::cout << (a->insert(356)) << std::endl;
std::cout << (b->insert(170)) << std::endl;
std::cout << (c->remove(82)) << std::endl;
d->printPretty();
std::cout << (c->remove(345)) << std::endl;
*c=*b;
std::cout << (a->insert(161)) << std::endl;
std::cout << (e->insert(289)) << std::endl;
std::cout << (a->remove(161)) << std::endl;
std::cout << (b->insert(170)) << std::endl;
std::cout << (b->insert(170)) << std::endl;
std::cout << (b->remove(170)) << std::endl;
std::cout << (c->insert(170)) << std::endl;
std::cout << (a->remove(356)) << std::endl;
*c=*b;
a->printPretty();
*a=*a;
std::cout << (a->remove(195)) << std::endl;
std::cout << (e->insert(289)) << std::endl;
std::cout << (e->insert(94)) << std::endl;
*a=*e;
std::cout << (c->remove(132)) << std::endl;
*b=*d;
std::cout << (e->insert(412)) << std::endl;
std::cout << (b->remove(453)) << std::endl;
std::cout << (e->remove(180)) << std::endl;
*a=*c;
std::cout << (b->insert(372)) << std::endl;
*c=*b;
std::cout << (e->remove(455)) << std::endl;
b->printPretty();
std::cout << (b->remove(372)) << std::endl;
a->printPretty();
*c=*c;
b->printPretty();
*c=*d;
e->printPretty();
std::cout << (b->remove(369)) << std::endl;
e->printPretty();
*a=*c;
std::cout << (e->insert(340)) << std::endl;
*b=*a;
std::cout << (d->remove(11)) << std::endl;
std::cout << (e->remove(313)) << std::endl;
e->printPretty();
*e=*b;
c->printPretty();
*a=*e;
std::cout << (e->remove(334)) << std::endl;
*b=*d;
*a=*d;
c->printPretty();
std::cout << (c->remove(231)) << std::endl;
std::cout << (d->insert(126)) << std::endl;
*e=*c;
std::cout << (a->insert(469)) << std::endl;
std::cout << (d->insert(393)) << std::endl;
*e=*b;
std::cout << (d->remove(393)) << std::endl;
std::cout << (b->remove(488)) << std::endl;
std::cout << (d->insert(126)) << std::endl;
e->printPretty();
*a=*d;
*c=*e;
b->printPretty();
*a=*b;
e->printPretty();
b->printPretty();
std::cout << (d->insert(272)) << std::endl;
*b=*c;
*a=*e;
*a=*c;
std::cout << (d->remove(126)) << std::endl;
*a=*b;
std::cout << (c->insert(356)) << std::endl;
std::cout << (e->remove(489)) << std::endl;
std::cout << (d->insert(391)) << std::endl;
std::cout << (b->remove(192)) << std::endl;
std::cout << (b->insert(207)) << std::endl;
std::cout << (a->insert(107)) << std::endl;
std::cout << (c->remove(356)) << std::endl;
std::cout << (d->remove(76)) << std::endl;
std::cout << (b->remove(207)) << std::endl;
std::cout << (c->insert(177)) << std::endl;
std::cout << (e->insert(163)) << std::endl;
b->printPretty();
*e=*c;
std::cout << (d->insert(346)) << std::endl;
a->printPretty();
std::cout << (d->insert(72)) << std::endl;
std::cout << (e->remove(177)) << std::endl;
std::cout << (b->insert(481)) << std::endl;
std::cout << (b->insert(28)) << std::endl;
*d=*c;
std::cout << (b->remove(386)) << std::endl;
std::cout << (b->insert(170)) << std::endl;
std::cout << (c->insert(177)) << std::endl;
*c=*b;
std::cout << (a->insert(107)) << std::endl;
c->printPretty();
a->printPretty();
a->printPretty();
std::cout << (a->insert(140)) << std::endl;
std::cout << (e->insert(75)) << std::endl;
std::cout << (d->remove(471)) << std::endl;
std::cout << (e->remove(28)) << std::endl;
std::cout << (e->remove(75)) << std::endl;
std::cout << (c->remove(314)) << std::endl;
b->printPretty();
std::cout << (e->remove(52)) << std::endl;
*e=*d;
std::cout << (b->insert(190)) << std::endl;
std::cout << (b->insert(28)) << std::endl;
c->printPretty();
*b=*b;
std::cout << (b->remove(481)) << std::endl;
*c=*d;
c->printPretty();
std::cout << (e->remove(177)) << std::endl;
c->printPretty();
std::cout << (b->insert(358)) << std::endl;
d->printPretty();
*b=*e;
*a=*c;
std::cout << (b->remove(176)) << std::endl;
std::cout << (b->insert(240)) << std::endl;
d->printPretty();
std::cout << (a->insert(177)) << std::endl;
std::cout << (e->insert(461)) << std::endl;
std::cout << (b->insert(418)) << std::endl;
std::cout << (e->insert(185)) << std::endl;
a->printPretty();
std::cout << (d->insert(22)) << std::endl;
std::cout << (a->insert(4)) << std::endl;
e->printPretty();
std::cout << (d->insert(22)) << std::endl;
std::cout << (d->insert(177)) << std::endl;
*e=*d;
b->printPretty();
*d=*e;
std::cout << (c->insert(275)) << std::endl;
std::cout << (c->insert(177)) << std::endl;
std::cout << (c->insert(148)) << std::endl;
std::cout << (c->remove(275)) << std::endl;
std::cout << (e->insert(177)) << std::endl;
std::cout << (e->insert(305)) << std::endl;
*b=*c;
std::cout << (e->remove(284)) << std::endl;
*b=*e;
std::cout << (e->remove(305)) << std::endl;
std::cout << (d->insert(183)) << std::endl;
std::cout << (d->insert(22)) << std::endl;
std::cout << (b->remove(362)) << std::endl;
std::cout << (a->insert(16)) << std::endl;
std::cout << (d->remove(183)) << std::endl;
std::cout << (c->remove(317)) << std::endl;
a->printPretty();
std::cout << (c->remove(350)) << std::endl;
e->printPretty();
std::cout << (a->insert(16)) << std::endl;
std::cout << (e->insert(154)) << std::endl;
std::cout << (e->remove(177)) << std::endl;
*c=*a;
d->printPretty();
c->printPretty();
d->printPretty();
*b=*b;
*a=*d;
std::cout << (a->insert(177)) << std::endl;
std::cout << (e->insert(22)) << std::endl;
*e=*d;
b->printPretty();
std::cout << (b->insert(205)) << std::endl;
d->printPretty();
std::cout << (c->insert(4)) << std::endl;
std::cout << (c->remove(16)) << std::endl;
std::cout << (c->insert(80)) << std::endl;
std::cout << (a->remove(215)) << std::endl;
e->printPretty();
*d=*a;
std::cout << (d->remove(22)) << std::endl;
std::cout << (a->remove(177)) << std::endl;
std::cout << (d->remove(177)) << std::endl;
std::cout << (d->remove(285)) << std::endl;
*d=*d;
std::cout << (b->remove(285)) << std::endl;
a->printPretty();
std::cout << (b->remove(379)) << std::endl;
*a=*d;
std::cout << (d->insert(410)) << std::endl;
*d=*a;
*c=*b;
std::cout << (e->remove(336)) << std::endl;
std::cout << (d->remove(34)) << std::endl;
return 0;
}
