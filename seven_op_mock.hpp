#ifndef __SEVEN_OP_MOCK_HPP__
#define __SEVEN_OP_MOCK_HPP__

class SevenOpMock: public Base{
	public:
		SevenOpMock(){}
		virtual double evaluate(){return 7.5;}
		virtual string stringify(){return "7.5";}
};

#endif
