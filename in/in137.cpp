#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
b->printPretty();
b->printPretty();
ScapegoatTree<int> *c=new ScapegoatTree<int>;
ScapegoatTree<int> *d=new ScapegoatTree<int>;
d->printPretty();
ScapegoatTree<int> *e=new ScapegoatTree<int>(*a);
std::cout << (d->insert(258)) << std::endl;
std::cout << (e->insert(148)) << std::endl;
std::cout << (d->insert(472)) << std::endl;
std::cout << (d->insert(410)) << std::endl;
*d=*e;
std::cout << (b->insert(70)) << std::endl;
b->printPretty();
*d=*d;
std::cout << (d->insert(148)) << std::endl;
std::cout << (b->insert(70)) << std::endl;
std::cout << (e->insert(183)) << std::endl;
std::cout << (b->remove(104)) << std::endl;
std::cout << (a->insert(186)) << std::endl;
std::cout << (a->remove(328)) << std::endl;
a->printPretty();
std::cout << (e->insert(13)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (c->insert(85)) << std::endl;
std::cout << (b->insert(70)) << std::endl;
std::cout << (e->remove(117)) << std::endl;
std::cout << (a->remove(186)) << std::endl;
d->printPretty();
std::cout << (e->remove(13)) << std::endl;
*b=*e;
std::cout << (e->remove(183)) << std::endl;
*b=*b;
std::cout << (d->insert(329)) << std::endl;
*d=*a;
*d=*c;
std::cout << (e->remove(148)) << std::endl;
std::cout << (b->insert(322)) << std::endl;
std::cout << (a->remove(330)) << std::endl;
std::cout << (c->remove(85)) << std::endl;
std::cout << (d->remove(85)) << std::endl;
std::cout << (d->remove(85)) << std::endl;
*c=*b;
std::cout << (b->remove(181)) << std::endl;
*b=*c;
std::cout << (b->insert(130)) << std::endl;
std::cout << (a->remove(482)) << std::endl;
std::cout << (b->remove(483)) << std::endl;
a->printPretty();
*c=*c;
std::cout << (c->remove(148)) << std::endl;
b->printPretty();
std::cout << (b->insert(183)) << std::endl;
*a=*e;
c->printPretty();
std::cout << (b->insert(355)) << std::endl;
e->printPretty();
std::cout << (c->remove(434)) << std::endl;
std::cout << (b->remove(354)) << std::endl;
std::cout << (d->insert(324)) << std::endl;
std::cout << (a->insert(457)) << std::endl;
std::cout << (d->insert(31)) << std::endl;
std::cout << (d->insert(324)) << std::endl;
std::cout << (c->insert(322)) << std::endl;
std::cout << (c->remove(247)) << std::endl;
std::cout << (c->remove(141)) << std::endl;
std::cout << (c->remove(322)) << std::endl;
std::cout << (b->insert(496)) << std::endl;
std::cout << (c->remove(183)) << std::endl;
*d=*d;
std::cout << (d->remove(78)) << std::endl;
std::cout << (a->remove(347)) << std::endl;
std::cout << (a->insert(89)) << std::endl;
std::cout << (e->remove(124)) << std::endl;
std::cout << (a->remove(82)) << std::endl;
std::cout << (d->insert(442)) << std::endl;
*a=*b;
a->printPretty();
a->printPretty();
std::cout << (b->insert(183)) << std::endl;
*c=*c;
std::cout << (a->remove(355)) << std::endl;
std::cout << (b->insert(183)) << std::endl;
e->printPretty();
*d=*e;
std::cout << (b->insert(230)) << std::endl;
*e=*c;
e->printPretty();
b->printPretty();
*b=*b;
std::cout << (c->remove(253)) << std::endl;
std::cout << (a->insert(396)) << std::endl;
std::cout << (b->insert(330)) << std::endl;
std::cout << (b->insert(230)) << std::endl;
std::cout << (e->remove(379)) << std::endl;
std::cout << (a->remove(339)) << std::endl;
std::cout << (b->remove(330)) << std::endl;
std::cout << (c->insert(51)) << std::endl;
std::cout << (c->insert(464)) << std::endl;
std::cout << (b->remove(283)) << std::endl;
std::cout << (c->insert(51)) << std::endl;
std::cout << (b->remove(130)) << std::endl;
*a=*d;
a->printPretty();
b->printPretty();
d->printPretty();
std::cout << (d->remove(162)) << std::endl;
std::cout << (a->insert(410)) << std::endl;
c->printPretty();
*a=*c;
c->printPretty();
*c=*a;
std::cout << (a->insert(464)) << std::endl;
std::cout << (d->insert(431)) << std::endl;
std::cout << (a->insert(51)) << std::endl;
std::cout << (c->insert(264)) << std::endl;
std::cout << (b->insert(259)) << std::endl;
*d=*a;
e->printPretty();
std::cout << (a->remove(336)) << std::endl;
std::cout << (a->insert(51)) << std::endl;
std::cout << (b->remove(496)) << std::endl;
std::cout << (e->remove(295)) << std::endl;
*d=*d;
std::cout << (c->insert(196)) << std::endl;
std::cout << (e->insert(378)) << std::endl;
a->printPretty();
std::cout << (e->insert(378)) << std::endl;
std::cout << (a->remove(464)) << std::endl;
std::cout << (e->remove(378)) << std::endl;
std::cout << (b->insert(344)) << std::endl;
a->printPretty();
std::cout << (d->remove(180)) << std::endl;
std::cout << (b->insert(355)) << std::endl;
std::cout << (e->remove(130)) << std::endl;
*e=*e;
std::cout << (c->remove(104)) << std::endl;
std::cout << (a->remove(277)) << std::endl;
d->printPretty();
std::cout << (a->remove(75)) << std::endl;
std::cout << (d->remove(475)) << std::endl;
*e=*c;
std::cout << (b->insert(183)) << std::endl;
std::cout << (a->insert(343)) << std::endl;
std::cout << (b->insert(409)) << std::endl;
std::cout << (e->insert(264)) << std::endl;
std::cout << (a->insert(51)) << std::endl;
std::cout << (e->insert(464)) << std::endl;
*c=*c;
std::cout << (e->insert(264)) << std::endl;
std::cout << (b->remove(259)) << std::endl;
std::cout << (d->remove(192)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (e->insert(196)) << std::endl;
std::cout << (d->remove(51)) << std::endl;
std::cout << (d->remove(464)) << std::endl;
std::cout << (c->remove(456)) << std::endl;
*d=*b;
std::cout << (d->remove(8)) << std::endl;
*b=*a;
std::cout << (b->insert(343)) << std::endl;
std::cout << (e->remove(46)) << std::endl;
std::cout << (c->insert(464)) << std::endl;
d->printPretty();
std::cout << (e->remove(196)) << std::endl;
std::cout << (a->insert(189)) << std::endl;
std::cout << (c->insert(464)) << std::endl;
std::cout << (c->remove(51)) << std::endl;
std::cout << (d->remove(182)) << std::endl;
std::cout << (b->remove(343)) << std::endl;
std::cout << (a->remove(78)) << std::endl;
std::cout << (a->remove(343)) << std::endl;
*d=*c;
std::cout << (b->insert(340)) << std::endl;
std::cout << (c->insert(196)) << std::endl;
*e=*d;
b->printPretty();
std::cout << (a->remove(189)) << std::endl;
b->printPretty();
std::cout << (b->insert(392)) << std::endl;
c->printPretty();
std::cout << (b->remove(51)) << std::endl;
std::cout << (e->insert(174)) << std::endl;
std::cout << (e->remove(196)) << std::endl;
std::cout << (c->remove(2)) << std::endl;
std::cout << (a->remove(51)) << std::endl;
std::cout << (d->insert(464)) << std::endl;
a->printPretty();
*a=*c;
a->printPretty();
std::cout << (e->remove(34)) << std::endl;
*a=*a;
std::cout << (e->remove(155)) << std::endl;
std::cout << (e->insert(264)) << std::endl;
std::cout << (d->insert(464)) << std::endl;
std::cout << (c->remove(464)) << std::endl;
std::cout << (c->remove(196)) << std::endl;
std::cout << (b->insert(392)) << std::endl;
e->printPretty();
std::cout << (a->insert(264)) << std::endl;
std::cout << (b->remove(152)) << std::endl;
std::cout << (a->remove(439)) << std::endl;
std::cout << (e->remove(464)) << std::endl;
a->printPretty();
std::cout << (a->remove(264)) << std::endl;
e->printPretty();
std::cout << (b->remove(245)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (c->insert(264)) << std::endl;
std::cout << (d->remove(264)) << std::endl;
std::cout << (c->remove(264)) << std::endl;
std::cout << (d->remove(464)) << std::endl;
c->printPretty();
std::cout << (a->remove(82)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (b->insert(340)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (d->remove(196)) << std::endl;
a->printPretty();
std::cout << (e->insert(264)) << std::endl;
c->printPretty();
std::cout << (d->insert(46)) << std::endl;
std::cout << (c->remove(170)) << std::endl;
d->printPretty();
std::cout << (d->remove(92)) << std::endl;
std::cout << (b->remove(441)) << std::endl;
std::cout << (b->remove(340)) << std::endl;
std::cout << (e->remove(174)) << std::endl;
std::cout << (a->remove(389)) << std::endl;
a->printPretty();
std::cout << (a->remove(196)) << std::endl;
e->printPretty();
std::cout << (d->remove(65)) << std::endl;
*e=*b;
std::cout << (e->remove(189)) << std::endl;
std::cout << (a->insert(487)) << std::endl;
std::cout << (d->insert(46)) << std::endl;
std::cout << (c->insert(56)) << std::endl;
std::cout << (a->insert(464)) << std::endl;
b->printPretty();
std::cout << (e->remove(464)) << std::endl;
std::cout << (e->remove(392)) << std::endl;
std::cout << (d->remove(106)) << std::endl;
*e=*b;
std::cout << (d->remove(46)) << std::endl;
d->printPretty();
std::cout << (e->insert(6)) << std::endl;
std::cout << (a->insert(495)) << std::endl;
std::cout << (b->remove(292)) << std::endl;
std::cout << (a->remove(495)) << std::endl;
*d=*a;
c->printPretty();
std::cout << (a->remove(400)) << std::endl;
e->printPretty();
*b=*e;
std::cout << (b->insert(344)) << std::endl;
*d=*b;
std::cout << (b->insert(344)) << std::endl;
c->printPretty();
std::cout << (a->insert(401)) << std::endl;
std::cout << (e->remove(304)) << std::endl;
std::cout << (b->insert(392)) << std::endl;
std::cout << (b->remove(344)) << std::endl;
std::cout << (a->remove(337)) << std::endl;
std::cout << (c->remove(56)) << std::endl;
std::cout << (a->remove(119)) << std::endl;
std::cout << (a->insert(469)) << std::endl;
std::cout << (d->remove(150)) << std::endl;
std::cout << (d->remove(106)) << std::endl;
e->printPretty();
std::cout << (d->insert(389)) << std::endl;
std::cout << (b->remove(392)) << std::endl;
std::cout << (e->remove(313)) << std::endl;
std::cout << (b->insert(6)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (d->insert(389)) << std::endl;
std::cout << (e->insert(153)) << std::endl;
*a=*c;
*e=*e;
e->printPretty();
std::cout << (d->insert(6)) << std::endl;
std::cout << (e->insert(136)) << std::endl;
a->printPretty();
a->printPretty();
*d=*e;
std::cout << (d->remove(171)) << std::endl;
*a=*a;
a->printPretty();
std::cout << (e->remove(392)) << std::endl;
*c=*d;
std::cout << (e->insert(6)) << std::endl;
*e=*d;
std::cout << (b->remove(266)) << std::endl;
std::cout << (b->remove(430)) << std::endl;
e->printPretty();
std::cout << (e->remove(6)) << std::endl;
std::cout << (d->insert(151)) << std::endl;
std::cout << (e->remove(136)) << std::endl;
std::cout << (b->remove(6)) << std::endl;
std::cout << (d->insert(16)) << std::endl;
std::cout << (c->insert(136)) << std::endl;
*d=*a;
std::cout << (c->insert(392)) << std::endl;
b->printPretty();
std::cout << (e->insert(392)) << std::endl;
*c=*a;
b->printPretty();
*b=*d;
e->printPretty();
std::cout << (d->insert(414)) << std::endl;
e->printPretty();
std::cout << (a->insert(433)) << std::endl;
b->printPretty();
std::cout << (b->insert(446)) << std::endl;
std::cout << (a->insert(433)) << std::endl;
std::cout << (a->insert(2)) << std::endl;
d->printPretty();
std::cout << (d->insert(414)) << std::endl;
std::cout << (b->insert(446)) << std::endl;
std::cout << (a->insert(429)) << std::endl;
std::cout << (a->insert(429)) << std::endl;
e->printPretty();
std::cout << (d->remove(414)) << std::endl;
std::cout << (e->insert(348)) << std::endl;
a->printPretty();
std::cout << (d->remove(140)) << std::endl;
std::cout << (b->insert(363)) << std::endl;
std::cout << (e->insert(439)) << std::endl;
std::cout << (a->insert(433)) << std::endl;
std::cout << (a->insert(17)) << std::endl;
*e=*a;
e->printPretty();
std::cout << (b->remove(363)) << std::endl;
std::cout << (b->remove(446)) << std::endl;
*c=*a;
*a=*d;
a->printPretty();
std::cout << (c->insert(433)) << std::endl;
std::cout << (c->remove(171)) << std::endl;
std::cout << (e->insert(154)) << std::endl;
e->printPretty();
*b=*a;
std::cout << (b->remove(76)) << std::endl;
std::cout << (d->remove(115)) << std::endl;
*b=*c;
a->printPretty();
std::cout << (b->insert(231)) << std::endl;
std::cout << (e->insert(321)) << std::endl;
c->printPretty();
*c=*c;
std::cout << (c->remove(255)) << std::endl;
*c=*d;
std::cout << (b->insert(35)) << std::endl;
*c=*e;
std::cout << (e->insert(2)) << std::endl;
std::cout << (c->remove(130)) << std::endl;
std::cout << (e->remove(429)) << std::endl;
d->printPretty();
std::cout << (e->insert(154)) << std::endl;
a->printPretty();
std::cout << (d->insert(452)) << std::endl;
std::cout << (d->insert(452)) << std::endl;
*b=*e;
std::cout << (d->insert(117)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (c->insert(355)) << std::endl;
std::cout << (d->remove(200)) << std::endl;
*a=*d;
std::cout << (a->insert(10)) << std::endl;
std::cout << (b->insert(402)) << std::endl;
*b=*c;
*a=*a;
c->printPretty();
std::cout << (d->insert(239)) << std::endl;
std::cout << (c->insert(355)) << std::endl;
std::cout << (b->remove(17)) << std::endl;
std::cout << (a->insert(419)) << std::endl;
c->printPretty();
std::cout << (b->insert(283)) << std::endl;
std::cout << (c->insert(17)) << std::endl;
std::cout << (c->remove(2)) << std::endl;
std::cout << (b->insert(462)) << std::endl;
*b=*b;
std::cout << (d->remove(117)) << std::endl;
*a=*b;
std::cout << (e->insert(154)) << std::endl;
std::cout << (a->remove(2)) << std::endl;
std::cout << (b->insert(2)) << std::endl;
std::cout << (b->insert(297)) << std::endl;
std::cout << (a->remove(141)) << std::endl;
std::cout << (d->remove(452)) << std::endl;
std::cout << (b->insert(297)) << std::endl;
std::cout << (a->insert(311)) << std::endl;
*d=*e;
c->printPretty();
std::cout << (a->remove(131)) << std::endl;
std::cout << (d->remove(444)) << std::endl;
std::cout << (b->remove(207)) << std::endl;
std::cout << (d->remove(433)) << std::endl;
std::cout << (e->remove(115)) << std::endl;
std::cout << (c->remove(34)) << std::endl;
std::cout << (b->remove(154)) << std::endl;
std::cout << (a->insert(355)) << std::endl;
std::cout << (e->insert(411)) << std::endl;
std::cout << (a->insert(485)) << std::endl;
std::cout << (a->insert(154)) << std::endl;
std::cout << (c->insert(353)) << std::endl;
std::cout << (e->insert(338)) << std::endl;
std::cout << (d->insert(140)) << std::endl;
std::cout << (e->insert(417)) << std::endl;
std::cout << (b->remove(429)) << std::endl;
std::cout << (a->remove(433)) << std::endl;
d->printPretty();
*b=*c;
std::cout << (a->remove(356)) << std::endl;
std::cout << (a->remove(247)) << std::endl;
*d=*d;
a->printPretty();
std::cout << (e->insert(433)) << std::endl;
*c=*b;
std::cout << (e->insert(417)) << std::endl;
std::cout << (a->insert(154)) << std::endl;
std::cout << (a->insert(355)) << std::endl;
*d=*c;
std::cout << (a->insert(277)) << std::endl;
std::cout << (e->remove(433)) << std::endl;
b->printPretty();
*e=*d;
std::cout << (d->remove(353)) << std::endl;
*c=*a;
std::cout << (c->insert(93)) << std::endl;
std::cout << (c->insert(485)) << std::endl;
*c=*c;
d->printPretty();
std::cout << (a->remove(412)) << std::endl;
*e=*a;
std::cout << (b->insert(106)) << std::endl;
*d=*b;
std::cout << (a->remove(429)) << std::endl;
a->printPretty();
std::cout << (e->remove(277)) << std::endl;
*e=*c;
std::cout << (e->insert(485)) << std::endl;
std::cout << (e->insert(321)) << std::endl;
*b=*a;
c->printPretty();
std::cout << (d->insert(106)) << std::endl;
std::cout << (b->remove(106)) << std::endl;
e->printPretty();
std::cout << (a->remove(355)) << std::endl;
std::cout << (a->remove(154)) << std::endl;
std::cout << (a->remove(176)) << std::endl;
std::cout << (a->insert(462)) << std::endl;
std::cout << (c->remove(20)) << std::endl;
*e=*c;
*a=*c;
std::cout << (a->remove(355)) << std::endl;
std::cout << (d->insert(429)) << std::endl;
b->printPretty();
std::cout << (a->insert(277)) << std::endl;
std::cout << (e->insert(500)) << std::endl;
std::cout << (d->insert(355)) << std::endl;
std::cout << (a->insert(149)) << std::endl;
std::cout << (d->remove(353)) << std::endl;
b->printPretty();
*e=*d;
std::cout << (e->insert(355)) << std::endl;
std::cout << (e->insert(61)) << std::endl;
c->printPretty();
std::cout << (d->remove(154)) << std::endl;
a->printPretty();
std::cout << (e->insert(396)) << std::endl;
d->printPretty();
std::cout << (c->insert(478)) << std::endl;
*a=*a;
std::cout << (e->remove(17)) << std::endl;
std::cout << (b->remove(75)) << std::endl;
std::cout << (b->insert(379)) << std::endl;
std::cout << (d->insert(106)) << std::endl;
std::cout << (b->insert(428)) << std::endl;
std::cout << (d->remove(433)) << std::endl;
*a=*a;
std::cout << (a->remove(105)) << std::endl;
std::cout << (c->insert(424)) << std::endl;
std::cout << (e->remove(61)) << std::endl;
std::cout << (e->insert(441)) << std::endl;
std::cout << (e->insert(321)) << std::endl;
std::cout << (c->insert(500)) << std::endl;
*d=*a;
std::cout << (c->remove(321)) << std::endl;
std::cout << (d->remove(66)) << std::endl;
std::cout << (c->remove(283)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
std::cout << (d->remove(277)) << std::endl;
std::cout << (c->remove(403)) << std::endl;
std::cout << (b->insert(452)) << std::endl;
std::cout << (d->remove(149)) << std::endl;
std::cout << (a->insert(321)) << std::endl;
*e=*a;
std::cout << (a->insert(283)) << std::endl;
std::cout << (b->remove(283)) << std::endl;
std::cout << (a->remove(462)) << std::endl;
std::cout << (c->insert(485)) << std::endl;
std::cout << (a->remove(311)) << std::endl;
std::cout << (d->remove(154)) << std::endl;
std::cout << (c->insert(261)) << std::endl;
std::cout << (d->remove(309)) << std::endl;
std::cout << (d->remove(429)) << std::endl;
std::cout << (d->remove(485)) << std::endl;
std::cout << (d->insert(38)) << std::endl;
std::cout << (a->insert(175)) << std::endl;
b->printPretty();
std::cout << (c->remove(306)) << std::endl;
std::cout << (a->insert(124)) << std::endl;
*b=*d;
std::cout << (d->insert(93)) << std::endl;
std::cout << (c->insert(277)) << std::endl;
std::cout << (a->insert(424)) << std::endl;
std::cout << (d->insert(394)) << std::endl;
std::cout << (d->insert(277)) << std::endl;
c->printPretty();
*d=*e;
*e=*b;
std::cout << (e->insert(387)) << std::endl;
std::cout << (a->remove(149)) << std::endl;
std::cout << (d->insert(229)) << std::endl;
std::cout << (b->remove(398)) << std::endl;
std::cout << (c->remove(332)) << std::endl;
d->printPretty();
std::cout << (e->insert(311)) << std::endl;
std::cout << (b->remove(174)) << std::endl;
std::cout << (a->insert(61)) << std::endl;
std::cout << (e->insert(277)) << std::endl;
e->printPretty();
std::cout << (e->insert(370)) << std::endl;
std::cout << (b->remove(175)) << std::endl;
std::cout << (a->insert(237)) << std::endl;
std::cout << (c->remove(183)) << std::endl;
std::cout << (a->remove(290)) << std::endl;
std::cout << (b->remove(268)) << std::endl;
*d=*a;
std::cout << (a->insert(283)) << std::endl;
std::cout << (a->insert(283)) << std::endl;
std::cout << (e->insert(65)) << std::endl;
d->printPretty();
b->printPretty();
*a=*c;
std::cout << (e->insert(387)) << std::endl;
std::cout << (d->insert(175)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (b->insert(283)) << std::endl;
std::cout << (d->insert(485)) << std::endl;
*d=*b;
std::cout << (d->insert(321)) << std::endl;
std::cout << (e->insert(188)) << std::endl;
std::cout << (c->remove(198)) << std::endl;
e->printPretty();
std::cout << (a->remove(224)) << std::endl;
c->printPretty();
*d=*a;
std::cout << (c->remove(500)) << std::endl;
std::cout << (a->insert(277)) << std::endl;
std::cout << (d->insert(154)) << std::endl;
std::cout << (e->remove(462)) << std::endl;
std::cout << (e->insert(8)) << std::endl;
*a=*d;
std::cout << (c->remove(237)) << std::endl;
std::cout << (b->insert(472)) << std::endl;
std::cout << (c->remove(343)) << std::endl;
std::cout << (c->insert(429)) << std::endl;
std::cout << (e->insert(8)) << std::endl;
std::cout << (b->insert(462)) << std::endl;
d->printPretty();
std::cout << (c->insert(196)) << std::endl;
*c=*c;
*a=*e;
std::cout << (c->insert(424)) << std::endl;
b->printPretty();
std::cout << (c->insert(454)) << std::endl;
std::cout << (b->remove(403)) << std::endl;
std::cout << (a->insert(8)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
std::cout << (a->remove(67)) << std::endl;
std::cout << (e->remove(8)) << std::endl;
std::cout << (a->insert(210)) << std::endl;
b->printPretty();
std::cout << (a->insert(445)) << std::endl;
std::cout << (b->insert(154)) << std::endl;
std::cout << (d->insert(359)) << std::endl;
*e=*b;
std::cout << (e->remove(277)) << std::endl;
*e=*b;
std::cout << (b->insert(93)) << std::endl;
std::cout << (d->remove(273)) << std::endl;
*e=*b;
b->printPretty();
a->printPretty();
*c=*c;
std::cout << (b->remove(462)) << std::endl;
std::cout << (b->remove(277)) << std::endl;
*b=*d;
b->printPretty();
e->printPretty();
c->printPretty();
a->printPretty();
std::cout << (e->insert(18)) << std::endl;
std::cout << (c->remove(261)) << std::endl;
std::cout << (b->remove(271)) << std::endl;
std::cout << (b->insert(178)) << std::endl;
std::cout << (e->insert(321)) << std::endl;
std::cout << (e->insert(311)) << std::endl;
std::cout << (b->insert(71)) << std::endl;
*c=*d;
std::cout << (e->insert(417)) << std::endl;
std::cout << (d->remove(462)) << std::endl;
std::cout << (d->insert(359)) << std::endl;
std::cout << (d->insert(451)) << std::endl;
*c=*e;
e->printPretty();
std::cout << (e->insert(311)) << std::endl;
std::cout << (e->remove(151)) << std::endl;
std::cout << (d->remove(371)) << std::endl;
std::cout << (d->insert(319)) << std::endl;
std::cout << (e->remove(154)) << std::endl;
c->printPretty();
std::cout << (c->remove(472)) << std::endl;
std::cout << (c->remove(484)) << std::endl;
std::cout << (b->insert(242)) << std::endl;
*e=*e;
std::cout << (d->remove(485)) << std::endl;
std::cout << (c->remove(462)) << std::endl;
*a=*d;
*c=*c;
std::cout << (e->insert(321)) << std::endl;
std::cout << (a->remove(223)) << std::endl;
std::cout << (c->insert(242)) << std::endl;
*e=*d;
*c=*a;
*b=*a;
std::cout << (d->remove(111)) << std::endl;
std::cout << (e->insert(389)) << std::endl;
std::cout << (e->remove(458)) << std::endl;
*b=*c;
std::cout << (b->remove(368)) << std::endl;
std::cout << (b->remove(249)) << std::endl;
std::cout << (a->remove(451)) << std::endl;
c->printPretty();
*c=*e;
std::cout << (c->insert(261)) << std::endl;
*a=*b;
*e=*e;
std::cout << (e->insert(359)) << std::endl;
*b=*a;
std::cout << (a->insert(500)) << std::endl;
*e=*c;
std::cout << (b->insert(311)) << std::endl;
std::cout << (c->remove(260)) << std::endl;
std::cout << (b->remove(499)) << std::endl;
std::cout << (b->remove(478)) << std::endl;
std::cout << (b->insert(156)) << std::endl;
std::cout << (d->insert(354)) << std::endl;
std::cout << (a->remove(367)) << std::endl;
*a=*d;
std::cout << (c->remove(316)) << std::endl;
*d=*b;
std::cout << (b->remove(270)) << std::endl;
std::cout << (d->insert(11)) << std::endl;
std::cout << (a->insert(261)) << std::endl;
std::cout << (d->remove(359)) << std::endl;
*a=*a;
std::cout << (e->insert(311)) << std::endl;
*d=*e;
c->printPretty();
*e=*d;
b->printPretty();
std::cout << (b->insert(250)) << std::endl;
std::cout << (c->insert(154)) << std::endl;
b->printPretty();
std::cout << (e->remove(406)) << std::endl;
std::cout << (e->remove(384)) << std::endl;
return 0;
}
