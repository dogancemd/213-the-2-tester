#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->remove(149)) << std::endl;
std::cout << (a->remove(116)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
b->printPretty();
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
ScapegoatTree<int> *d=new ScapegoatTree<int>(*a);
std::cout << (b->remove(284)) << std::endl;
std::cout << (c->remove(292)) << std::endl;
std::cout << (a->remove(47)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
a->printPretty();
*e=*b;
*b=*a;
*c=*e;
a->printPretty();
*b=*d;
b->printPretty();
std::cout << (d->remove(464)) << std::endl;
*a=*a;
*d=*b;
std::cout << (c->insert(358)) << std::endl;
*c=*d;
std::cout << (e->insert(430)) << std::endl;
std::cout << (e->remove(137)) << std::endl;
std::cout << (a->insert(139)) << std::endl;
std::cout << (e->remove(89)) << std::endl;
e->printPretty();
*e=*a;
std::cout << (e->insert(445)) << std::endl;
std::cout << (e->remove(139)) << std::endl;
*e=*e;
a->printPretty();
std::cout << (e->remove(146)) << std::endl;
std::cout << (c->remove(367)) << std::endl;
*e=*b;
*b=*e;
std::cout << (a->insert(395)) << std::endl;
std::cout << (d->remove(497)) << std::endl;
std::cout << (a->remove(485)) << std::endl;
std::cout << (d->insert(196)) << std::endl;
std::cout << (b->remove(75)) << std::endl;
std::cout << (e->remove(235)) << std::endl;
std::cout << (d->insert(308)) << std::endl;
*b=*c;
c->printPretty();
*e=*e;
std::cout << (a->insert(139)) << std::endl;
std::cout << (d->insert(309)) << std::endl;
std::cout << (d->remove(196)) << std::endl;
std::cout << (a->remove(395)) << std::endl;
e->printPretty();
std::cout << (d->remove(88)) << std::endl;
*d=*c;
d->printPretty();
std::cout << (a->remove(139)) << std::endl;
c->printPretty();
a->printPretty();
*c=*c;
c->printPretty();
d->printPretty();
std::cout << (d->remove(491)) << std::endl;
e->printPretty();
*e=*d;
std::cout << (a->insert(317)) << std::endl;
std::cout << (b->insert(156)) << std::endl;
e->printPretty();
*c=*d;
c->printPretty();
std::cout << (b->remove(156)) << std::endl;
*c=*a;
a->printPretty();
std::cout << (a->remove(176)) << std::endl;
d->printPretty();
std::cout << (d->remove(101)) << std::endl;
std::cout << (d->remove(10)) << std::endl;
std::cout << (c->remove(317)) << std::endl;
std::cout << (a->insert(317)) << std::endl;
std::cout << (b->remove(232)) << std::endl;
std::cout << (a->insert(270)) << std::endl;
*b=*d;
std::cout << (a->remove(377)) << std::endl;
std::cout << (d->insert(222)) << std::endl;
*c=*e;
std::cout << (c->insert(437)) << std::endl;
std::cout << (b->insert(350)) << std::endl;
*a=*b;
std::cout << (c->insert(392)) << std::endl;
std::cout << (d->insert(222)) << std::endl;
std::cout << (e->insert(64)) << std::endl;
std::cout << (e->insert(199)) << std::endl;
*b=*b;
std::cout << (b->insert(473)) << std::endl;
*d=*d;
std::cout << (b->insert(295)) << std::endl;
std::cout << (e->remove(191)) << std::endl;
std::cout << (d->insert(222)) << std::endl;
b->printPretty();
std::cout << (a->remove(375)) << std::endl;
std::cout << (a->insert(350)) << std::endl;
*e=*e;
*e=*c;
std::cout << (a->remove(350)) << std::endl;
c->printPretty();
*b=*c;
std::cout << (e->insert(194)) << std::endl;
a->printPretty();
std::cout << (b->remove(277)) << std::endl;
std::cout << (a->insert(42)) << std::endl;
e->printPretty();
std::cout << (a->remove(42)) << std::endl;
std::cout << (c->insert(392)) << std::endl;
std::cout << (b->remove(222)) << std::endl;
std::cout << (b->remove(437)) << std::endl;
std::cout << (d->remove(364)) << std::endl;
std::cout << (d->insert(222)) << std::endl;
*a=*b;
std::cout << (d->insert(168)) << std::endl;
std::cout << (e->remove(344)) << std::endl;
std::cout << (e->insert(194)) << std::endl;
std::cout << (b->insert(391)) << std::endl;
std::cout << (e->remove(189)) << std::endl;
std::cout << (b->remove(392)) << std::endl;
std::cout << (d->insert(127)) << std::endl;
b->printPretty();
b->printPretty();
*d=*b;
std::cout << (b->remove(391)) << std::endl;
std::cout << (c->insert(437)) << std::endl;
*b=*b;
std::cout << (a->remove(46)) << std::endl;
*b=*c;
std::cout << (a->remove(392)) << std::endl;
std::cout << (c->insert(392)) << std::endl;
*b=*c;
a->printPretty();
*c=*d;
std::cout << (a->insert(387)) << std::endl;
std::cout << (c->remove(391)) << std::endl;
std::cout << (d->insert(391)) << std::endl;
std::cout << (e->remove(174)) << std::endl;
std::cout << (c->insert(96)) << std::endl;
std::cout << (a->remove(389)) << std::endl;
std::cout << (e->remove(194)) << std::endl;
std::cout << (a->insert(7)) << std::endl;
*c=*e;
std::cout << (b->remove(437)) << std::endl;
std::cout << (a->insert(337)) << std::endl;
std::cout << (d->remove(467)) << std::endl;
std::cout << (b->insert(392)) << std::endl;
*b=*a;
std::cout << (c->remove(345)) << std::endl;
e->printPretty();
std::cout << (b->remove(160)) << std::endl;
std::cout << (c->insert(445)) << std::endl;
a->printPretty();
std::cout << (e->insert(94)) << std::endl;
std::cout << (e->insert(188)) << std::endl;
e->printPretty();
std::cout << (c->insert(68)) << std::endl;
*d=*e;
std::cout << (e->insert(94)) << std::endl;
std::cout << (b->insert(7)) << std::endl;
*e=*b;
*d=*a;
e->printPretty();
std::cout << (a->insert(337)) << std::endl;
std::cout << (b->remove(7)) << std::endl;
std::cout << (a->insert(7)) << std::endl;
std::cout << (a->insert(387)) << std::endl;
*c=*a;
std::cout << (e->insert(330)) << std::endl;
*b=*e;
std::cout << (e->insert(337)) << std::endl;
*c=*c;
std::cout << (a->insert(317)) << std::endl;
a->printPretty();
std::cout << (a->insert(7)) << std::endl;
std::cout << (c->remove(88)) << std::endl;
std::cout << (a->insert(7)) << std::endl;
std::cout << (e->insert(330)) << std::endl;
std::cout << (c->remove(65)) << std::endl;
c->printPretty();
std::cout << (e->insert(479)) << std::endl;
b->printPretty();
std::cout << (e->remove(342)) << std::endl;
std::cout << (d->remove(184)) << std::endl;
*d=*a;
std::cout << (d->insert(317)) << std::endl;
std::cout << (b->remove(234)) << std::endl;
std::cout << (c->remove(429)) << std::endl;
std::cout << (a->remove(337)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (c->remove(385)) << std::endl;
std::cout << (d->insert(314)) << std::endl;
std::cout << (b->insert(51)) << std::endl;
std::cout << (c->remove(85)) << std::endl;
std::cout << (c->remove(31)) << std::endl;
std::cout << (b->insert(51)) << std::endl;
std::cout << (a->insert(151)) << std::endl;
*c=*c;
std::cout << (b->insert(57)) << std::endl;
*e=*c;
std::cout << (a->insert(387)) << std::endl;
std::cout << (e->remove(353)) << std::endl;
d->printPretty();
std::cout << (b->remove(337)) << std::endl;
*c=*c;
a->printPretty();
e->printPretty();
std::cout << (d->remove(337)) << std::endl;
std::cout << (e->insert(362)) << std::endl;
std::cout << (d->insert(387)) << std::endl;
*a=*a;
std::cout << (b->insert(7)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (b->remove(247)) << std::endl;
std::cout << (d->remove(370)) << std::endl;
std::cout << (b->remove(57)) << std::endl;
std::cout << (c->remove(177)) << std::endl;
std::cout << (d->remove(317)) << std::endl;
std::cout << (b->insert(72)) << std::endl;
std::cout << (a->insert(307)) << std::endl;
*c=*c;
std::cout << (a->insert(32)) << std::endl;
std::cout << (a->insert(105)) << std::endl;
std::cout << (e->remove(337)) << std::endl;
std::cout << (d->remove(463)) << std::endl;
std::cout << (e->remove(131)) << std::endl;
*a=*a;
d->printPretty();
std::cout << (d->remove(197)) << std::endl;
*b=*a;
*a=*d;
std::cout << (e->remove(7)) << std::endl;
std::cout << (e->remove(371)) << std::endl;
d->printPretty();
c->printPretty();
d->printPretty();
std::cout << (e->insert(387)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (c->remove(323)) << std::endl;
std::cout << (a->insert(7)) << std::endl;
std::cout << (e->insert(362)) << std::endl;
std::cout << (a->insert(24)) << std::endl;
std::cout << (a->insert(387)) << std::endl;
std::cout << (d->remove(298)) << std::endl;
*d=*d;
std::cout << (b->remove(443)) << std::endl;
std::cout << (c->remove(387)) << std::endl;
d->printPretty();
std::cout << (d->insert(314)) << std::endl;
std::cout << (c->remove(179)) << std::endl;
std::cout << (b->insert(279)) << std::endl;
std::cout << (c->remove(337)) << std::endl;
std::cout << (c->remove(171)) << std::endl;
std::cout << (a->remove(7)) << std::endl;
c->printPretty();
b->printPretty();
std::cout << (a->remove(179)) << std::endl;
std::cout << (d->remove(13)) << std::endl;
std::cout << (b->remove(93)) << std::endl;
std::cout << (a->remove(24)) << std::endl;
std::cout << (a->insert(387)) << std::endl;
std::cout << (a->insert(387)) << std::endl;
std::cout << (c->remove(294)) << std::endl;
*c=*c;
std::cout << (a->insert(160)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (b->remove(183)) << std::endl;
std::cout << (e->insert(387)) << std::endl;
std::cout << (c->insert(453)) << std::endl;
std::cout << (d->remove(7)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (b->insert(117)) << std::endl;
d->printPretty();
std::cout << (d->insert(339)) << std::endl;
c->printPretty();
std::cout << (b->remove(151)) << std::endl;
std::cout << (c->remove(1)) << std::endl;
*b=*d;
std::cout << (a->insert(386)) << std::endl;
std::cout << (b->remove(339)) << std::endl;
*c=*a;
std::cout << (d->insert(387)) << std::endl;
a->printPretty();
*b=*b;
std::cout << (a->insert(482)) << std::endl;
std::cout << (e->insert(362)) << std::endl;
std::cout << (b->insert(314)) << std::endl;
std::cout << (a->insert(160)) << std::endl;
std::cout << (e->insert(387)) << std::endl;
std::cout << (e->insert(26)) << std::endl;
std::cout << (a->insert(387)) << std::endl;
std::cout << (d->remove(289)) << std::endl;
std::cout << (c->insert(386)) << std::endl;
std::cout << (c->insert(14)) << std::endl;
std::cout << (e->insert(387)) << std::endl;
std::cout << (d->insert(313)) << std::endl;
std::cout << (b->insert(387)) << std::endl;
std::cout << (e->remove(362)) << std::endl;
std::cout << (c->remove(160)) << std::endl;
std::cout << (a->insert(223)) << std::endl;
std::cout << (d->insert(298)) << std::endl;
a->printPretty();
std::cout << (a->insert(314)) << std::endl;
b->printPretty();
std::cout << (c->insert(314)) << std::endl;
std::cout << (a->remove(12)) << std::endl;
*e=*b;
b->printPretty();
*e=*b;
a->printPretty();
std::cout << (d->remove(30)) << std::endl;
std::cout << (a->remove(454)) << std::endl;
std::cout << (a->insert(238)) << std::endl;
std::cout << (d->remove(387)) << std::endl;
*c=*d;
std::cout << (b->remove(278)) << std::endl;
std::cout << (c->remove(339)) << std::endl;
*d=*c;
*e=*b;
std::cout << (a->remove(158)) << std::endl;
c->printPretty();
std::cout << (d->remove(89)) << std::endl;
*e=*d;
*a=*b;
a->printPretty();
std::cout << (e->remove(2)) << std::endl;
std::cout << (d->insert(298)) << std::endl;
std::cout << (a->remove(431)) << std::endl;
a->printPretty();
*c=*d;
std::cout << (c->remove(150)) << std::endl;
std::cout << (e->remove(314)) << std::endl;
std::cout << (a->insert(22)) << std::endl;
std::cout << (e->insert(72)) << std::endl;
std::cout << (b->remove(314)) << std::endl;
*a=*a;
std::cout << (a->remove(387)) << std::endl;
std::cout << (d->remove(186)) << std::endl;
*a=*d;
std::cout << (b->remove(438)) << std::endl;
*c=*b;
std::cout << (a->insert(298)) << std::endl;
d->printPretty();
std::cout << (d->remove(313)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (a->remove(235)) << std::endl;
std::cout << (c->insert(482)) << std::endl;
std::cout << (e->remove(150)) << std::endl;
*d=*e;
d->printPretty();
std::cout << (c->remove(273)) << std::endl;
std::cout << (e->remove(72)) << std::endl;
std::cout << (e->insert(313)) << std::endl;
std::cout << (a->insert(172)) << std::endl;
e->printPretty();
std::cout << (d->insert(313)) << std::endl;
std::cout << (a->insert(313)) << std::endl;
std::cout << (e->insert(153)) << std::endl;
*c=*a;
std::cout << (c->insert(31)) << std::endl;
c->printPretty();
std::cout << (a->insert(402)) << std::endl;
std::cout << (a->remove(172)) << std::endl;
std::cout << (d->insert(312)) << std::endl;
std::cout << (b->insert(387)) << std::endl;
std::cout << (e->insert(272)) << std::endl;
std::cout << (b->insert(387)) << std::endl;
std::cout << (d->remove(298)) << std::endl;
std::cout << (e->insert(177)) << std::endl;
*e=*e;
e->printPretty();
std::cout << (b->remove(387)) << std::endl;
*a=*a;
std::cout << (e->remove(272)) << std::endl;
std::cout << (d->remove(193)) << std::endl;
b->printPretty();
std::cout << (a->remove(107)) << std::endl;
e->printPretty();
std::cout << (a->insert(171)) << std::endl;
std::cout << (e->remove(153)) << std::endl;
std::cout << (d->insert(456)) << std::endl;
std::cout << (a->remove(402)) << std::endl;
*b=*b;
*d=*e;
std::cout << (e->insert(177)) << std::endl;
std::cout << (c->remove(313)) << std::endl;
std::cout << (a->insert(298)) << std::endl;
std::cout << (c->insert(298)) << std::endl;
*a=*a;
a->printPretty();
b->printPretty();
std::cout << (b->insert(283)) << std::endl;
std::cout << (c->remove(294)) << std::endl;
*d=*a;
std::cout << (b->insert(286)) << std::endl;
std::cout << (e->remove(26)) << std::endl;
std::cout << (e->remove(17)) << std::endl;
std::cout << (a->insert(314)) << std::endl;
std::cout << (e->remove(177)) << std::endl;
std::cout << (c->remove(150)) << std::endl;
e->printPretty();
std::cout << (d->remove(171)) << std::endl;
std::cout << (d->remove(314)) << std::endl;
std::cout << (b->remove(9)) << std::endl;
e->printPretty();
std::cout << (c->remove(172)) << std::endl;
std::cout << (c->insert(254)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (a->insert(99)) << std::endl;
*b=*a;
std::cout << (b->insert(298)) << std::endl;
std::cout << (b->remove(34)) << std::endl;
std::cout << (e->remove(94)) << std::endl;
std::cout << (e->remove(313)) << std::endl;
std::cout << (a->insert(314)) << std::endl;
std::cout << (a->insert(313)) << std::endl;
std::cout << (a->remove(298)) << std::endl;
std::cout << (e->insert(298)) << std::endl;
std::cout << (b->insert(386)) << std::endl;
*c=*d;
std::cout << (c->remove(76)) << std::endl;
d->printPretty();
*d=*c;
a->printPretty();
std::cout << (d->remove(313)) << std::endl;
std::cout << (e->remove(298)) << std::endl;
*b=*b;
std::cout << (d->insert(462)) << std::endl;
*d=*e;
*b=*b;
std::cout << (e->remove(275)) << std::endl;
a->printPretty();
std::cout << (a->insert(99)) << std::endl;
*e=*e;
a->printPretty();
b->printPretty();
std::cout << (b->insert(298)) << std::endl;
*a=*c;
std::cout << (a->insert(449)) << std::endl;
std::cout << (a->insert(263)) << std::endl;
std::cout << (c->insert(313)) << std::endl;
std::cout << (b->remove(185)) << std::endl;
e->printPretty();
std::cout << (c->remove(491)) << std::endl;
std::cout << (d->remove(179)) << std::endl;
std::cout << (a->insert(339)) << std::endl;
std::cout << (a->remove(449)) << std::endl;
*b=*d;
std::cout << (c->remove(427)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (b->insert(477)) << std::endl;
*a=*a;
std::cout << (a->remove(70)) << std::endl;
std::cout << (d->remove(206)) << std::endl;
std::cout << (b->insert(477)) << std::endl;
std::cout << (a->insert(242)) << std::endl;
std::cout << (c->remove(298)) << std::endl;
*d=*c;
*a=*d;
*b=*b;
*c=*b;
std::cout << (a->insert(22)) << std::endl;
std::cout << (a->remove(313)) << std::endl;
std::cout << (c->insert(477)) << std::endl;
*b=*e;
std::cout << (d->insert(313)) << std::endl;
d->printPretty();
std::cout << (c->remove(275)) << std::endl;
std::cout << (c->insert(477)) << std::endl;
*e=*a;
*a=*c;
std::cout << (d->insert(313)) << std::endl;
std::cout << (a->insert(477)) << std::endl;
std::cout << (d->remove(61)) << std::endl;
std::cout << (c->insert(393)) << std::endl;
c->printPretty();
*c=*e;
std::cout << (d->remove(345)) << std::endl;
std::cout << (c->insert(22)) << std::endl;
*e=*b;
std::cout << (c->remove(22)) << std::endl;
std::cout << (d->insert(388)) << std::endl;
std::cout << (a->remove(67)) << std::endl;
std::cout << (a->insert(477)) << std::endl;
std::cout << (b->insert(306)) << std::endl;
std::cout << (b->remove(4)) << std::endl;
*d=*c;
std::cout << (a->insert(477)) << std::endl;
std::cout << (c->remove(273)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (b->insert(292)) << std::endl;
*b=*c;
std::cout << (a->insert(102)) << std::endl;
std::cout << (d->insert(422)) << std::endl;
std::cout << (e->insert(476)) << std::endl;
*a=*c;
*c=*b;
std::cout << (d->insert(156)) << std::endl;
std::cout << (c->insert(27)) << std::endl;
std::cout << (d->insert(203)) << std::endl;
*b=*d;
std::cout << (b->insert(27)) << std::endl;
std::cout << (c->remove(27)) << std::endl;
std::cout << (b->insert(208)) << std::endl;
std::cout << (d->remove(156)) << std::endl;
std::cout << (b->insert(422)) << std::endl;
std::cout << (b->remove(60)) << std::endl;
std::cout << (d->remove(168)) << std::endl;
b->printPretty();
*e=*a;
*a=*d;
*e=*e;
std::cout << (a->remove(185)) << std::endl;
c->printPretty();
std::cout << (e->remove(330)) << std::endl;
std::cout << (a->insert(422)) << std::endl;
std::cout << (b->insert(9)) << std::endl;
std::cout << (b->remove(94)) << std::endl;
std::cout << (b->remove(62)) << std::endl;
std::cout << (a->remove(203)) << std::endl;
std::cout << (a->remove(422)) << std::endl;
std::cout << (a->insert(294)) << std::endl;
std::cout << (c->remove(288)) << std::endl;
d->printPretty();
std::cout << (a->insert(294)) << std::endl;
std::cout << (d->insert(203)) << std::endl;
*a=*b;
a->printPretty();
std::cout << (a->remove(203)) << std::endl;
std::cout << (e->remove(224)) << std::endl;
std::cout << (d->insert(203)) << std::endl;
*c=*c;
b->printPretty();
std::cout << (d->insert(422)) << std::endl;
std::cout << (a->remove(156)) << std::endl;
c->printPretty();
std::cout << (d->remove(422)) << std::endl;
*c=*e;
std::cout << (a->remove(422)) << std::endl;
e->printPretty();
std::cout << (d->remove(253)) << std::endl;
std::cout << (a->remove(208)) << std::endl;
a->printPretty();
std::cout << (a->insert(27)) << std::endl;
std::cout << (b->remove(27)) << std::endl;
std::cout << (d->insert(37)) << std::endl;
std::cout << (b->remove(73)) << std::endl;
std::cout << (c->insert(198)) << std::endl;
std::cout << (b->insert(227)) << std::endl;
*b=*b;
std::cout << (d->insert(92)) << std::endl;
std::cout << (c->insert(198)) << std::endl;
std::cout << (b->remove(318)) << std::endl;
*e=*b;
*e=*a;
std::cout << (a->remove(354)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (d->remove(203)) << std::endl;
std::cout << (e->insert(27)) << std::endl;
b->printPretty();
std::cout << (a->remove(80)) << std::endl;
std::cout << (c->insert(198)) << std::endl;
std::cout << (d->remove(292)) << std::endl;
std::cout << (d->remove(49)) << std::endl;
*d=*a;
a->printPretty();
std::cout << (c->remove(198)) << std::endl;
std::cout << (a->insert(9)) << std::endl;
*b=*a;
std::cout << (b->remove(277)) << std::endl;
std::cout << (a->insert(27)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (a->insert(243)) << std::endl;
b->printPretty();
std::cout << (b->remove(38)) << std::endl;
std::cout << (e->insert(9)) << std::endl;
std::cout << (d->remove(235)) << std::endl;
e->printPretty();
std::cout << (b->remove(101)) << std::endl;
std::cout << (a->insert(243)) << std::endl;
std::cout << (a->remove(374)) << std::endl;
std::cout << (c->remove(417)) << std::endl;
std::cout << (e->remove(27)) << std::endl;
d->printPretty();
std::cout << (d->remove(66)) << std::endl;
c->printPretty();
e->printPretty();
std::cout << (d->insert(211)) << std::endl;
std::cout << (e->insert(9)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (a->remove(9)) << std::endl;
e->printPretty();
std::cout << (d->remove(9)) << std::endl;
std::cout << (c->remove(236)) << std::endl;
std::cout << (b->remove(469)) << std::endl;
std::cout << (c->remove(33)) << std::endl;
std::cout << (b->insert(9)) << std::endl;
*a=*e;
std::cout << (b->remove(438)) << std::endl;
std::cout << (e->remove(33)) << std::endl;
*b=*c;
*e=*a;
d->printPretty();
std::cout << (a->remove(9)) << std::endl;
std::cout << (b->remove(137)) << std::endl;
std::cout << (b->remove(266)) << std::endl;
std::cout << (e->insert(9)) << std::endl;
*e=*b;
*c=*b;
d->printPretty();
e->printPretty();
std::cout << (e->remove(304)) << std::endl;
std::cout << (d->insert(211)) << std::endl;
std::cout << (e->insert(43)) << std::endl;
std::cout << (e->insert(43)) << std::endl;
e->printPretty();
std::cout << (d->remove(211)) << std::endl;
*c=*e;
c->printPretty();
std::cout << (b->insert(395)) << std::endl;
std::cout << (e->remove(402)) << std::endl;
*d=*c;
std::cout << (c->insert(497)) << std::endl;
b->printPretty();
std::cout << (e->remove(43)) << std::endl;
c->printPretty();
std::cout << (e->insert(30)) << std::endl;
c->printPretty();
std::cout << (d->insert(299)) << std::endl;
std::cout << (c->insert(48)) << std::endl;
std::cout << (a->insert(447)) << std::endl;
std::cout << (e->remove(142)) << std::endl;
*c=*c;
c->printPretty();
std::cout << (e->insert(30)) << std::endl;
std::cout << (e->remove(99)) << std::endl;
std::cout << (c->insert(497)) << std::endl;
c->printPretty();
std::cout << (d->insert(284)) << std::endl;
std::cout << (d->remove(152)) << std::endl;
std::cout << (c->remove(497)) << std::endl;
std::cout << (a->insert(177)) << std::endl;
a->printPretty();
std::cout << (e->insert(24)) << std::endl;
std::cout << (c->insert(43)) << std::endl;
std::cout << (a->remove(94)) << std::endl;
std::cout << (b->remove(395)) << std::endl;
*a=*e;
std::cout << (a->insert(189)) << std::endl;
c->printPretty();
e->printPretty();
e->printPretty();
std::cout << (e->remove(89)) << std::endl;
*d=*c;
std::cout << (c->insert(123)) << std::endl;
a->printPretty();
std::cout << (d->remove(43)) << std::endl;
c->printPretty();
std::cout << (c->insert(391)) << std::endl;
std::cout << (d->remove(393)) << std::endl;
std::cout << (b->remove(316)) << std::endl;
std::cout << (d->insert(48)) << std::endl;
*c=*d;
std::cout << (d->remove(187)) << std::endl;
std::cout << (e->insert(62)) << std::endl;
c->printPretty();
std::cout << (e->insert(30)) << std::endl;
std::cout << (c->insert(364)) << std::endl;
std::cout << (d->insert(48)) << std::endl;
*c=*e;
b->printPretty();
std::cout << (e->remove(78)) << std::endl;
c->printPretty();
std::cout << (d->remove(48)) << std::endl;
std::cout << (e->remove(308)) << std::endl;
std::cout << (c->insert(5)) << std::endl;
d->printPretty();
std::cout << (a->remove(145)) << std::endl;
return 0;
}