#ifndef ORDER_STATE_H__INCLUDED
#define ORDER_STATE_H__INCLUDED

#include "Order.h"

namespace IB {

struct OrderState {

	explicit OrderState()
		:
		commission(UNSET_DOUBLE),
		minCommission(UNSET_DOUBLE),
		maxCommission(UNSET_DOUBLE)
	{}

	IBString status;

	IBString initMargin;
	IBString maintMargin;
	IBString equityWithLoan;

	double  commission;
	double  minCommission;
	double  maxCommission;
	IBString commissionCurrency;

	IBString warningText;
};

} // namespace IB
#endif
