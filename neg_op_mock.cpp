

class NegOpMock : public Base {
	public:
		NegOpMock() {}
		
		virtual double evaluate() { return -1.0; }
		virtual string stringify() { return "-1.0"; }
}
