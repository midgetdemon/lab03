#ifndef __DECIMAL_OP_MOCK_HPP__
#define __DECIMAL_OP_MOCK_HPP__

#include "base.hpp"

class DecimalOpMock: public Base{
	public:
		DecimalOpMock(){}
		virtual double evalue(){ return 4.6231; }
		virtual string stringify(){ return "4.6231"; }
};

#endif
