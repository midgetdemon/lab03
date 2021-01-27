#ifndef __NEG_OP_MOCK_HPP__
#define __NEG_OP_MOCK_HPP__

class NegOpMock : public Base {
	public:
		NegOpMock() {}

		virtual double evaluate() { return -1.0; }
		virtual string stringify() { return "-1.0"; }
};

#endif
