#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->insert(320)) << std::endl;
std::cout << (a->remove(252)) << std::endl;
std::cout << (a->remove(360)) << std::endl;
std::cout << (a->remove(42)) << std::endl;
std::cout << (a->remove(320)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
*a=*b;
a->printPretty();
std::cout << (b->insert(67)) << std::endl;
std::cout << (b->remove(159)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
std::cout << (c->remove(67)) << std::endl;
ScapegoatTree<int> *d=new ScapegoatTree<int>(*c);
std::cout << (c->insert(265)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
e->printPretty();
a->printPretty();
*b=*c;
a->printPretty();
std::cout << (a->remove(58)) << std::endl;
std::cout << (c->remove(265)) << std::endl;
*b=*c;
std::cout << (a->insert(416)) << std::endl;
std::cout << (d->remove(119)) << std::endl;
d->printPretty();
*e=*a;
*b=*d;
c->printPretty();
std::cout << (e->remove(416)) << std::endl;
std::cout << (c->remove(405)) << std::endl;
std::cout << (e->insert(445)) << std::endl;
*c=*b;
std::cout << (c->insert(283)) << std::endl;
std::cout << (a->insert(416)) << std::endl;
a->printPretty();
std::cout << (a->remove(121)) << std::endl;
*e=*d;
std::cout << (e->remove(79)) << std::endl;
std::cout << (e->remove(163)) << std::endl;
*c=*d;
d->printPretty();
std::cout << (a->remove(476)) << std::endl;
std::cout << (a->remove(316)) << std::endl;
a->printPretty();
std::cout << (e->remove(328)) << std::endl;
std::cout << (b->insert(238)) << std::endl;
d->printPretty();
*b=*c;
std::cout << (b->insert(18)) << std::endl;
std::cout << (a->insert(416)) << std::endl;
std::cout << (b->insert(18)) << std::endl;
b->printPretty();
std::cout << (a->remove(416)) << std::endl;
std::cout << (d->insert(35)) << std::endl;
std::cout << (e->insert(105)) << std::endl;
*d=*b;
std::cout << (d->remove(18)) << std::endl;
c->printPretty();
std::cout << (b->insert(18)) << std::endl;
std::cout << (e->remove(105)) << std::endl;
d->printPretty();
*a=*b;
std::cout << (a->remove(18)) << std::endl;
std::cout << (b->insert(18)) << std::endl;
*a=*a;
*d=*d;
std::cout << (b->remove(330)) << std::endl;
d->printPretty();
std::cout << (e->remove(311)) << std::endl;
std::cout << (a->remove(179)) << std::endl;
std::cout << (c->insert(381)) << std::endl;
*a=*a;
e->printPretty();
*e=*d;
std::cout << (c->remove(500)) << std::endl;
std::cout << (e->remove(465)) << std::endl;
std::cout << (b->insert(18)) << std::endl;
*d=*d;
b->printPretty();
std::cout << (c->insert(381)) << std::endl;
*e=*d;
std::cout << (a->insert(498)) << std::endl;
std::cout << (a->insert(498)) << std::endl;
*b=*b;
*e=*d;
std::cout << (b->insert(18)) << std::endl;
std::cout << (e->remove(295)) << std::endl;
*d=*d;
std::cout << (a->insert(498)) << std::endl;
std::cout << (e->insert(207)) << std::endl;
*e=*a;
*b=*b;
std::cout << (b->remove(245)) << std::endl;
std::cout << (a->remove(69)) << std::endl;
*b=*c;
std::cout << (c->insert(84)) << std::endl;
*d=*a;
std::cout << (c->remove(452)) << std::endl;
std::cout << (b->remove(9)) << std::endl;
*d=*c;
b->printPretty();
std::cout << (d->remove(157)) << std::endl;
std::cout << (c->insert(84)) << std::endl;
std::cout << (e->insert(195)) << std::endl;
*b=*c;
std::cout << (c->remove(84)) << std::endl;
std::cout << (d->remove(84)) << std::endl;
std::cout << (e->remove(212)) << std::endl;
std::cout << (c->remove(381)) << std::endl;
std::cout << (b->remove(381)) << std::endl;
std::cout << (a->insert(498)) << std::endl;
std::cout << (d->remove(71)) << std::endl;
std::cout << (d->remove(359)) << std::endl;
std::cout << (e->insert(195)) << std::endl;
*b=*d;
std::cout << (e->remove(195)) << std::endl;
std::cout << (b->insert(443)) << std::endl;
std::cout << (d->insert(381)) << std::endl;
std::cout << (a->remove(498)) << std::endl;
std::cout << (b->insert(186)) << std::endl;
c->printPretty();
std::cout << (a->insert(150)) << std::endl;
d->printPretty();
std::cout << (a->remove(137)) << std::endl;
e->printPretty();
std::cout << (b->insert(443)) << std::endl;
*b=*a;
std::cout << (a->remove(223)) << std::endl;
*c=*d;
*d=*c;
std::cout << (a->remove(150)) << std::endl;
std::cout << (e->insert(138)) << std::endl;
std::cout << (e->insert(356)) << std::endl;
std::cout << (c->insert(227)) << std::endl;
std::cout << (c->remove(381)) << std::endl;
std::cout << (d->insert(480)) << std::endl;
std::cout << (c->remove(227)) << std::endl;
d->printPretty();
std::cout << (c->remove(219)) << std::endl;
std::cout << (d->remove(188)) << std::endl;
c->printPretty();
std::cout << (d->remove(368)) << std::endl;
std::cout << (b->remove(150)) << std::endl;
std::cout << (d->remove(472)) << std::endl;
std::cout << (b->insert(310)) << std::endl;
d->printPretty();
std::cout << (b->remove(310)) << std::endl;
std::cout << (a->remove(261)) << std::endl;
std::cout << (c->remove(273)) << std::endl;
std::cout << (d->remove(432)) << std::endl;
std::cout << (d->remove(480)) << std::endl;
std::cout << (a->remove(24)) << std::endl;
*a=*c;
*a=*c;
std::cout << (d->remove(381)) << std::endl;
b->printPretty();
std::cout << (e->insert(138)) << std::endl;
std::cout << (a->remove(266)) << std::endl;
b->printPretty();
std::cout << (e->insert(45)) << std::endl;
e->printPretty();
b->printPretty();
*b=*e;
std::cout << (e->insert(356)) << std::endl;
d->printPretty();
std::cout << (d->insert(259)) << std::endl;
std::cout << (e->remove(95)) << std::endl;
std::cout << (e->remove(122)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (b->remove(290)) << std::endl;
std::cout << (e->remove(125)) << std::endl;
*e=*d;
a->printPretty();
std::cout << (b->remove(356)) << std::endl;
std::cout << (c->remove(225)) << std::endl;
std::cout << (b->remove(498)) << std::endl;
std::cout << (c->remove(191)) << std::endl;
std::cout << (b->remove(312)) << std::endl;
std::cout << (c->insert(178)) << std::endl;
std::cout << (a->insert(442)) << std::endl;
e->printPretty();
std::cout << (b->remove(138)) << std::endl;
std::cout << (a->insert(442)) << std::endl;
std::cout << (b->insert(45)) << std::endl;
*b=*e;
std::cout << (b->remove(224)) << std::endl;
c->printPretty();
e->printPretty();
std::cout << (c->insert(178)) << std::endl;
std::cout << (c->insert(178)) << std::endl;
std::cout << (b->remove(259)) << std::endl;
std::cout << (d->remove(259)) << std::endl;
a->printPretty();
std::cout << (c->insert(459)) << std::endl;
*b=*b;
std::cout << (a->remove(442)) << std::endl;
std::cout << (b->remove(54)) << std::endl;
std::cout << (c->insert(364)) << std::endl;
std::cout << (a->insert(485)) << std::endl;
std::cout << (e->remove(259)) << std::endl;
e->printPretty();
*b=*a;
std::cout << (c->remove(459)) << std::endl;
e->printPretty();
std::cout << (a->remove(485)) << std::endl;
std::cout << (c->insert(178)) << std::endl;
*b=*c;
d->printPretty();
std::cout << (e->remove(319)) << std::endl;
std::cout << (e->remove(250)) << std::endl;
std::cout << (a->remove(112)) << std::endl;
*a=*c;
b->printPretty();
std::cout << (e->remove(161)) << std::endl;
*b=*b;
*e=*c;
std::cout << (e->insert(364)) << std::endl;
std::cout << (c->insert(455)) << std::endl;
std::cout << (e->remove(485)) << std::endl;
std::cout << (c->remove(427)) << std::endl;
c->printPretty();
std::cout << (b->insert(120)) << std::endl;
*e=*e;
std::cout << (e->insert(337)) << std::endl;
std::cout << (b->remove(120)) << std::endl;
std::cout << (a->remove(178)) << std::endl;
*e=*b;
*c=*c;
d->printPretty();
std::cout << (c->remove(361)) << std::endl;
std::cout << (e->insert(178)) << std::endl;
std::cout << (e->remove(55)) << std::endl;
*b=*e;
*b=*a;
a->printPretty();
std::cout << (b->remove(364)) << std::endl;
*d=*b;
c->printPretty();
std::cout << (c->remove(455)) << std::endl;
std::cout << (a->insert(440)) << std::endl;
d->printPretty();
a->printPretty();
*a=*e;
*d=*d;
std::cout << (d->insert(155)) << std::endl;
std::cout << (a->insert(178)) << std::endl;
*d=*b;
e->printPretty();
std::cout << (a->insert(364)) << std::endl;
*a=*e;
d->printPretty();
std::cout << (a->insert(364)) << std::endl;
*e=*d;
std::cout << (c->insert(391)) << std::endl;
std::cout << (d->remove(419)) << std::endl;
std::cout << (a->remove(364)) << std::endl;
std::cout << (e->remove(448)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (a->remove(178)) << std::endl;
*b=*e;
std::cout << (c->remove(29)) << std::endl;
std::cout << (b->insert(164)) << std::endl;
std::cout << (c->remove(178)) << std::endl;
std::cout << (b->insert(164)) << std::endl;
*d=*c;
*e=*b;
a->printPretty();
std::cout << (b->remove(111)) << std::endl;
*b=*a;
std::cout << (c->remove(420)) << std::endl;
*b=*c;
std::cout << (e->insert(102)) << std::endl;
std::cout << (e->remove(102)) << std::endl;
*a=*e;
std::cout << (d->remove(391)) << std::endl;
b->printPretty();
std::cout << (c->remove(364)) << std::endl;
std::cout << (b->insert(391)) << std::endl;
*b=*b;
*c=*e;
*e=*c;
c->printPretty();
*b=*b;
std::cout << (c->remove(158)) << std::endl;
std::cout << (c->insert(82)) << std::endl;
*a=*d;
std::cout << (a->remove(364)) << std::endl;
std::cout << (e->insert(164)) << std::endl;
*c=*a;
std::cout << (d->remove(383)) << std::endl;
*e=*d;
std::cout << (c->insert(232)) << std::endl;
*e=*c;
std::cout << (b->remove(64)) << std::endl;
std::cout << (b->insert(391)) << std::endl;
std::cout << (c->insert(56)) << std::endl;
a->printPretty();
*a=*d;
std::cout << (a->insert(471)) << std::endl;
b->printPretty();
std::cout << (a->insert(364)) << std::endl;
std::cout << (c->insert(16)) << std::endl;
std::cout << (d->remove(73)) << std::endl;
std::cout << (c->remove(16)) << std::endl;
std::cout << (c->insert(23)) << std::endl;
std::cout << (c->remove(220)) << std::endl;
std::cout << (d->remove(364)) << std::endl;
std::cout << (c->insert(232)) << std::endl;
*a=*e;
std::cout << (a->insert(232)) << std::endl;
a->printPretty();
*d=*d;
std::cout << (d->remove(242)) << std::endl;
c->printPretty();
std::cout << (b->insert(391)) << std::endl;
std::cout << (b->remove(62)) << std::endl;
std::cout << (b->insert(391)) << std::endl;
std::cout << (a->remove(408)) << std::endl;
std::cout << (c->remove(232)) << std::endl;
std::cout << (a->remove(137)) << std::endl;
std::cout << (e->remove(232)) << std::endl;
d->printPretty();
std::cout << (c->insert(23)) << std::endl;
std::cout << (e->remove(478)) << std::endl;
*e=*e;
std::cout << (e->remove(181)) << std::endl;
std::cout << (a->insert(441)) << std::endl;
std::cout << (c->remove(30)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (c->insert(23)) << std::endl;
std::cout << (c->insert(23)) << std::endl;
std::cout << (c->insert(23)) << std::endl;
b->printPretty();
std::cout << (c->remove(23)) << std::endl;
std::cout << (c->remove(56)) << std::endl;
std::cout << (b->remove(364)) << std::endl;
*e=*e;
std::cout << (c->insert(369)) << std::endl;
std::cout << (b->insert(374)) << std::endl;
std::cout << (a->remove(75)) << std::endl;
c->printPretty();
*b=*d;
std::cout << (b->insert(450)) << std::endl;
std::cout << (c->remove(369)) << std::endl;
std::cout << (a->insert(223)) << std::endl;
std::cout << (d->remove(284)) << std::endl;
std::cout << (c->remove(145)) << std::endl;
std::cout << (c->insert(109)) << std::endl;
std::cout << (d->insert(197)) << std::endl;
std::cout << (a->insert(211)) << std::endl;
*c=*d;
std::cout << (c->remove(197)) << std::endl;
*d=*b;
std::cout << (a->insert(17)) << std::endl;
std::cout << (b->remove(450)) << std::endl;
std::cout << (b->insert(340)) << std::endl;
*d=*d;
std::cout << (e->remove(29)) << std::endl;
std::cout << (a->remove(181)) << std::endl;
*a=*d;
std::cout << (a->remove(450)) << std::endl;
*b=*e;
a->printPretty();
std::cout << (b->insert(210)) << std::endl;
*c=*b;
std::cout << (e->insert(98)) << std::endl;
std::cout << (e->insert(98)) << std::endl;
std::cout << (c->remove(210)) << std::endl;
b->printPretty();
std::cout << (b->remove(75)) << std::endl;
c->printPretty();
b->printPretty();
*d=*c;
*d=*e;
std::cout << (e->remove(98)) << std::endl;
*d=*a;
b->printPretty();
*a=*b;
e->printPretty();
std::cout << (b->insert(210)) << std::endl;
*b=*b;
*d=*b;
std::cout << (a->remove(461)) << std::endl;
std::cout << (d->insert(210)) << std::endl;
std::cout << (e->remove(196)) << std::endl;
*b=*e;
std::cout << (a->insert(63)) << std::endl;
std::cout << (d->insert(210)) << std::endl;
std::cout << (b->remove(190)) << std::endl;
*a=*e;
std::cout << (e->remove(441)) << std::endl;
*b=*d;
b->printPretty();
std::cout << (a->remove(25)) << std::endl;
a->printPretty();
*c=*c;
std::cout << (b->insert(210)) << std::endl;
a->printPretty();
c->printPretty();
d->printPretty();
std::cout << (d->remove(8)) << std::endl;
*b=*d;
*a=*c;
*e=*a;
*c=*c;
*c=*a;
*a=*b;
std::cout << (b->insert(210)) << std::endl;
*b=*c;
e->printPretty();
*e=*e;
std::cout << (d->insert(210)) << std::endl;
std::cout << (e->insert(138)) << std::endl;
std::cout << (d->insert(145)) << std::endl;
std::cout << (a->remove(227)) << std::endl;
std::cout << (c->insert(382)) << std::endl;
std::cout << (b->insert(42)) << std::endl;
std::cout << (a->remove(210)) << std::endl;
*a=*b;
a->printPretty();
*e=*e;
std::cout << (a->remove(42)) << std::endl;
c->printPretty();
*c=*e;
std::cout << (e->remove(138)) << std::endl;
*c=*b;
*d=*c;
e->printPretty();
*c=*a;
std::cout << (e->remove(495)) << std::endl;
std::cout << (e->insert(28)) << std::endl;
e->printPretty();
std::cout << (b->remove(351)) << std::endl;
std::cout << (c->insert(222)) << std::endl;
d->printPretty();
*c=*c;
std::cout << (c->remove(231)) << std::endl;
e->printPretty();
*a=*e;
*c=*a;
std::cout << (e->remove(186)) << std::endl;
std::cout << (d->insert(22)) << std::endl;
b->printPretty();
std::cout << (c->remove(28)) << std::endl;
std::cout << (b->insert(104)) << std::endl;
std::cout << (c->insert(200)) << std::endl;
std::cout << (d->remove(22)) << std::endl;
std::cout << (a->insert(28)) << std::endl;
std::cout << (b->remove(104)) << std::endl;
std::cout << (d->insert(42)) << std::endl;
std::cout << (c->remove(200)) << std::endl;
a->printPretty();
a->printPretty();
d->printPretty();
*a=*c;
std::cout << (b->remove(42)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (e->insert(28)) << std::endl;
std::cout << (e->insert(28)) << std::endl;
*c=*c;
std::cout << (b->remove(201)) << std::endl;
std::cout << (b->insert(85)) << std::endl;
b->printPretty();
*c=*a;
d->printPretty();
*a=*a;
std::cout << (b->insert(340)) << std::endl;
c->printPretty();
*b=*b;
b->printPretty();
*c=*b;
*c=*c;
std::cout << (b->insert(340)) << std::endl;
e->printPretty();
std::cout << (c->remove(85)) << std::endl;
std::cout << (b->insert(340)) << std::endl;
std::cout << (e->insert(28)) << std::endl;
std::cout << (d->insert(42)) << std::endl;
b->printPretty();
std::cout << (a->insert(70)) << std::endl;
std::cout << (e->remove(28)) << std::endl;
std::cout << (e->remove(405)) << std::endl;
std::cout << (a->remove(52)) << std::endl;
*c=*c;
std::cout << (a->insert(70)) << std::endl;
c->printPretty();
e->printPretty();
std::cout << (d->insert(17)) << std::endl;
a->printPretty();
std::cout << (d->insert(45)) << std::endl;
std::cout << (b->insert(340)) << std::endl;
std::cout << (b->remove(470)) << std::endl;
b->printPretty();
std::cout << (b->insert(340)) << std::endl;
std::cout << (d->insert(109)) << std::endl;
a->printPretty();
*e=*d;
*a=*c;
std::cout << (e->remove(109)) << std::endl;
std::cout << (e->remove(412)) << std::endl;
std::cout << (b->insert(48)) << std::endl;
std::cout << (d->insert(17)) << std::endl;
std::cout << (d->remove(299)) << std::endl;
std::cout << (e->remove(116)) << std::endl;
std::cout << (c->remove(340)) << std::endl;
std::cout << (b->insert(85)) << std::endl;
std::cout << (a->remove(365)) << std::endl;
d->printPretty();
std::cout << (e->remove(42)) << std::endl;
e->printPretty();
std::cout << (b->remove(450)) << std::endl;
std::cout << (b->remove(340)) << std::endl;
std::cout << (b->remove(85)) << std::endl;
std::cout << (e->remove(92)) << std::endl;
e->printPretty();
*e=*d;
std::cout << (b->insert(48)) << std::endl;
d->printPretty();
std::cout << (b->insert(48)) << std::endl;
std::cout << (a->insert(291)) << std::endl;
std::cout << (c->insert(367)) << std::endl;
std::cout << (e->remove(63)) << std::endl;
std::cout << (c->insert(367)) << std::endl;
std::cout << (e->insert(335)) << std::endl;
std::cout << (e->remove(109)) << std::endl;
std::cout << (b->remove(240)) << std::endl;
std::cout << (c->insert(32)) << std::endl;
*e=*e;
*d=*b;
*e=*e;
std::cout << (c->remove(132)) << std::endl;
std::cout << (a->remove(291)) << std::endl;
std::cout << (e->insert(367)) << std::endl;
std::cout << (c->remove(136)) << std::endl;
std::cout << (e->insert(45)) << std::endl;
std::cout << (b->remove(48)) << std::endl;
*a=*b;
std::cout << (e->remove(17)) << std::endl;
std::cout << (c->insert(142)) << std::endl;
std::cout << (d->remove(278)) << std::endl;
std::cout << (a->insert(344)) << std::endl;
std::cout << (c->insert(367)) << std::endl;
*e=*d;
*c=*c;
std::cout << (d->remove(48)) << std::endl;
std::cout << (b->remove(199)) << std::endl;
b->printPretty();
std::cout << (b->remove(273)) << std::endl;
c->printPretty();
std::cout << (e->insert(189)) << std::endl;
*b=*c;
*b=*c;
*e=*e;
std::cout << (a->remove(344)) << std::endl;
*c=*a;
std::cout << (b->remove(142)) << std::endl;
a->printPretty();
*c=*e;
c->printPretty();
std::cout << (e->insert(189)) << std::endl;
*d=*b;
std::cout << (d->insert(367)) << std::endl;
std::cout << (c->remove(48)) << std::endl;
d->printPretty();
c->printPretty();
b->printPretty();
std::cout << (a->insert(322)) << std::endl;
b->printPretty();
std::cout << (a->insert(322)) << std::endl;
std::cout << (e->insert(143)) << std::endl;
std::cout << (e->remove(143)) << std::endl;
std::cout << (e->insert(48)) << std::endl;
std::cout << (d->insert(457)) << std::endl;
std::cout << (e->insert(48)) << std::endl;
std::cout << (e->insert(189)) << std::endl;
e->printPretty();
std::cout << (c->insert(224)) << std::endl;
std::cout << (c->remove(224)) << std::endl;
*a=*c;
std::cout << (e->insert(353)) << std::endl;
std::cout << (d->remove(367)) << std::endl;
*b=*e;
std::cout << (d->insert(401)) << std::endl;
std::cout << (a->insert(189)) << std::endl;
std::cout << (d->insert(463)) << std::endl;
std::cout << (a->remove(189)) << std::endl;
std::cout << (d->insert(369)) << std::endl;
std::cout << (c->remove(324)) << std::endl;
std::cout << (e->insert(48)) << std::endl;
std::cout << (d->insert(225)) << std::endl;
std::cout << (c->remove(189)) << std::endl;
e->printPretty();
*c=*c;
*c=*c;
std::cout << (b->remove(189)) << std::endl;
std::cout << (d->remove(32)) << std::endl;
std::cout << (d->insert(195)) << std::endl;
std::cout << (e->insert(144)) << std::endl;
std::cout << (b->insert(316)) << std::endl;
*e=*b;
*e=*c;
std::cout << (d->remove(345)) << std::endl;
std::cout << (d->remove(306)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (b->insert(36)) << std::endl;
b->printPretty();
std::cout << (d->insert(463)) << std::endl;
std::cout << (a->insert(371)) << std::endl;
std::cout << (d->insert(463)) << std::endl;
d->printPretty();
std::cout << (b->remove(122)) << std::endl;
std::cout << (b->remove(353)) << std::endl;
*c=*d;
std::cout << (c->insert(446)) << std::endl;
std::cout << (b->remove(316)) << std::endl;
c->printPretty();
*e=*c;
std::cout << (b->remove(48)) << std::endl;
std::cout << (c->remove(347)) << std::endl;
std::cout << (d->remove(401)) << std::endl;
std::cout << (d->insert(195)) << std::endl;
std::cout << (c->insert(224)) << std::endl;
std::cout << (e->insert(225)) << std::endl;
e->printPretty();
std::cout << (a->insert(392)) << std::endl;
std::cout << (e->insert(446)) << std::endl;
std::cout << (e->insert(241)) << std::endl;
std::cout << (d->remove(463)) << std::endl;
std::cout << (a->remove(371)) << std::endl;
*d=*c;
std::cout << (e->insert(463)) << std::endl;
std::cout << (b->remove(36)) << std::endl;
std::cout << (d->remove(470)) << std::endl;
std::cout << (a->insert(138)) << std::endl;
std::cout << (e->insert(401)) << std::endl;
std::cout << (d->remove(174)) << std::endl;
std::cout << (b->remove(441)) << std::endl;
std::cout << (e->remove(261)) << std::endl;
d->printPretty();
std::cout << (a->insert(397)) << std::endl;
return 0;
}